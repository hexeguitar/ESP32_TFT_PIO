#include "CYD_Audio.h"

// Custom funtions, some of them replace original library ones.

const uint16_t fader_wave[65] = {
0x0000, 0x0196, 0x033e, 0x04f9, 0x06c6, 0x08a5, 0x0a96, 0x0c97, 0x0ea9, 0x10ca, 0x12fc, 0x153a, 0x1788, 0x19e4, 0x1c4b, 0x1ebe, 
0x213c, 0x23c4, 0x2656, 0x28f0, 0x2b90, 0x2e38, 0x30e5, 0x3396, 0x364b, 0x3902, 0x3bbb, 0x3e74, 0x412c, 0x43e2, 0x4695, 0x4944, 
0x4bee, 0x4e92, 0x512f, 0x53c3, 0x564e, 0x58ce, 0x5b42, 0x5daa, 0x6005, 0x6250, 0x648c, 0x66b8, 0x68d2, 0x6ad9, 0x6ccd, 0x6eac, 
0x7078, 0x722c, 0x73cc, 0x7552, 0x76c2, 0x7818, 0x7956, 0x7a7a, 0x7b83, 0x7c72, 0x7d46, 0x7dfe, 0x7e9a, 0x7f1b, 0x7f7f, 0x7fff, 
0x8000};


void CYD_Audio::fillDACbuf(int32_t val)
{
	int32_t *p = dacBuf;
	const int32_t *end = (int32_t *)(dacBuf +  CYDAUDIO_DAC_BUF_SIZE);
	do
	{
		*p++ = val;
		*p++ = val;
		*p++ = val;
		*p++ = val; 
	} while (p<end);
}

/**
 * @brief Set volume in steps. Default value is max 21 steps. Original library used
 * 		optional square/log curve. Simplified to square here, works good enough.
 * 		Using integer operations only.
 * 
 * @param vol volume setting, values from 0 to m_vol_steps (default 21)
 * @param curve Not used
 */
void CYD_Audio::setVolume(uint8_t vol, uint8_t curve) 
{
	(void)curve; // ignore unused variable
    if (vol > m_vol_steps) m_vol = m_vol_steps;
    else m_vol = vol;
	if (m_vol_steps == 0)
	{
		log_e("vol steps = 0 !!!!!!");
		m_vol_steps = 21;
	}
	uint32_t t32 = (uint32_t)m_vol * ((0xFFFFul + (m_vol_steps>>1)) / m_vol_steps); // scaled to uint16
	if (t32 > 0xFFFF) t32 = 0xFFFF;
	t32 = ((t32 * t32) + 0xFFFF) >> 16; // squared volume

	gainL = t32;
	gainR = t32;
    //log_i("gain = 0x%04x",gainL);
}

/**
 * @brief writes a block of stereo samples packed into int32_t word
 * 
 * @param sampleBuf pointer to the DAC source buffer
 * @param sz 		number of words to write
 * @return true 	all bytes written
 * @return false 	xcould not write all bytes (i2s TX buffer overflow)
 */
bool CYD_Audio::playSampleCYD(int32_t *sampleBuf, uint16_t sz)
{
	m_i2s_bytesWritten = 0;
	esp_err_t err = i2s_write((i2s_port_t) m_i2s_num, 
				(const char*) sampleBuf, 
				sz*4, 
				&m_i2s_bytesWritten, 100);
	if(err != ESP_OK) 
	{ 
		log_e("ESP32 Errorcode %i", err);
		return false;
	}
	if(m_i2s_bytesWritten < sz*4) 
	{
		log_e("Can't stuff any more in I2S..."); 
		return false;
	}			
    return true;
}
/**
 * @brief prepare a block of data for the DAC depending on:
 * 			- bit depth, number of channels
 * 			- current play status (generate fade in)
 * 			- add bias in case of internal DAC use
 * 			- current volume setting
 * 
 * @param cfg combined configuration word (bit depth, channels, formced mono)
 * @param outBfPtr pointer to output buffer (int16int16)
 * @param sz size of data block
 * @return int32_t how many words were written
 */
int32_t CYD_Audio::prepareDACdata(data_cfg_t cfg, int32_t *outBfPtr, uint16_t sz)
{
	int16_t l, r;
	int16_t l2, r2; // used for 8bit 1 ch
	bool doubleFeed = false;
	wordsWritten = 0;
	uint32_t fade;
	int32_t  bias;
	uint32_t s1, s2, frac;
	uint8_t idx = 0;
	while (sz)
	{
		switch(cfg)
		{
			case DATA_8BIT_1CH:							// 8bit 1 channel
			case DATA_8BIT_1CH_FMONO:					// 8bit 1 channel + force mono
				r =  ((m_outBuff[m_curSample] & 0xFF) - 128) << 8;
				l = r;
				r2 = ((m_outBuff[m_curSample] & 0xFF00) - 0x8000); // leave at 16bit
				l2 = r2;
				doubleFeed = true;
				break;
			case DATA_8BIT_2CH:							// 8 bit 2 channels
			case DATA_8BIT_2CH_FMONO:					// forced mono
				r = ((m_outBuff[m_curSample] & 0xFF) - 128) << 8;
				l = ((m_outBuff[m_curSample] & 0xFF00) - 0x8000); 	
				if (cfg == DATA_8BIT_2CH_FMONO)		// force mono
				{
					r = ((int32_t)r + l) >> 1;
					l = r;
				}
				break;
			case DATA_16BIT_1CH:
			case DATA_16BIT_1CH_FMONO:
				r = m_outBuff[m_curSample];
				l = m_outBuff[m_curSample];
				break;
			case DATA_16BIT_2CH:
			case DATA_16BIT_2CH_FMONO:
				r = m_outBuff[m_curSample * 2];
				l = m_outBuff[m_curSample * 2 + 1];
				if (cfg == DATA_16BIT_2CH_FMONO)
				{
					r = ((int32_t)r + l) >> 1;
					l = r;
				}	
				break;
			default:
				return 0;	
		}
		// apply FADE IN
		switch(m_play_status)
		{	// use the fade curve + interpolation to gradually fade the signal in and 
			case FADE_IN:			
				if (m_fader < 0xFFFFFFFF - m_fader_step)	
				{
					idx = m_fader >> (32-6);						// curve table has 64 samples
					frac = (m_fader & 0x03FFFFFF) >> (32-6-16); 	// fractional part 16bit
					s1 = fader_wave[idx];
					s2 = fader_wave[idx+1];
					fade = (s1 * (0xFFFF - frac)) >> 16;			// s[n] * (1-k)
					fade += (s2 * frac) >> 16;						// + s[n+1] * k
					m_fader += m_fader_step;
					l = (l * fade) >> 15;
					r = (r * fade) >> 15;
				}				
				else 	
				{
					m_fader = 0xFFFFFFFF;
					fade = 0x8000;
					m_play_status = FADE_OFF;
				}
				if (m_f_internalDAC)
				{
					m_dacBias = fade;
				}	
				break;
			case FADE_OFF:
				break;
		}
		// Apply volume
		l = ((l * gainL) >> 16) + m_dacBias;
		r = ((r * gainR) >> 16) + m_dacBias;		
		*outBfPtr++ = ((l << 16) | (r & 0xffff));
		wordsWritten++;
		sz--;
		if (doubleFeed)	// 8bit 1ch audio word has 2 samples
		{
			l2 = ((l2 * gainL) >> 16) + m_dacBias;
			r2 = ((r2 * gainR) >> 16) + m_dacBias;
			*outBfPtr++ = ((l2 << 16) | (r2 & 0xffff));			
			if (sz) 
			{
				sz--;
				wordsWritten++;	
			}
			doubleFeed = false;			
		}
		m_validSamples--;
		m_curSample++;
		
	}
	return (wordsWritten);
}

/**
 * @brief play chunk of data received from the input buffer, 
 * 			calculate rms amplitude
 * 		TODO: EQ maybe?
 * 		TODO: external processing callback
 *   
 * @return true all avaialble words written
 * @return false could not write all words
 */
bool CYD_Audio::playChunkCYD()
{
	data_cfg_t dataCfg = (data_cfg_t)(	(getBitsPerSample() << 8) 	| 
										(m_f_forceMono<<2) 			| 
										(getChannels() & 0x03));
	uint16_t writtenSamples;										
	while(m_validSamples)
	{
		if (m_validSamples >= CYDAUDIO_DAC_BUF_SIZE)
		{
			writtenSamples = prepareDACdata(dataCfg, dacBuf, CYDAUDIO_DAC_BUF_SIZE);
			if (writtenSamples == CYDAUDIO_DAC_BUF_SIZE)
			{
				rms.process(dacBuf, CYDAUDIO_DAC_BUF_SIZE);// calculate level
				// TODO: apply EQ
				playSampleCYD(dacBuf, CYDAUDIO_DAC_BUF_SIZE);
			}
			else 
			{
				log_e("I2S write error! sent=%d, wr=%d", CYDAUDIO_DAC_BUF_SIZE, writtenSamples);
				m_validSamples = 0;
				m_curSample = 0;
				stopSong();
				return false;
			}
		}
		else
		{
			uint16_t remainingSamples = m_validSamples;
			writtenSamples = prepareDACdata(dataCfg, dacBuf, remainingSamples);
			if (writtenSamples == remainingSamples)
			{
				rms.process(dacBuf, remainingSamples);	// calculate level
				// TODO: apply EQ
				playSampleCYD(dacBuf, remainingSamples);
			}
			else
			{
				log_e("I2S write error! sent=%d, wr=%d", remainingSamples, writtenSamples);
				m_validSamples = 0;
				m_curSample = 0;
				stopSong();
				return false;				
			}
		}
	}
	m_curSample = 0;
	return true;
}

/**
 * @brief generates bias fade out curve for clickless end of sample
 * 			applies only when internal DAC is used (zero at 0x80)
 */
void CYD_Audio::genFadeOut(void)
{
	uint32_t  bias;
	uint32_t s1, s2, frac;
	uint8_t idx = 0;
	while (m_fader)
	{
		if (m_fader > m_fader_step)							// starting with fader @ max =0xFFFFFFFF
		{
			idx = m_fader >> (32-6);						// curve table has 64 samples
			frac = (m_fader & 0x03FFFFFF) >> (32-6-16); 	// fractional part 16bit
			s1 = fader_wave[idx+1];
			s2 = fader_wave[idx];
			bias = (s2 * (0xFFFF - frac)) >> 16;				// s[n] * (1-k)
			bias += (s1 * frac) >> 16;							// + s[n+1] * k
			m_dacBias = bias;
			bias = (m_dacBias << 16) | m_dacBias;				// make stereo
			m_fader -= m_fader_step;

			m_i2s_bytesWritten = 0;
			esp_err_t err = i2s_write((i2s_port_t)m_i2s_num, (const char *)&bias, sizeof(uint32_t), &m_i2s_bytesWritten, 100);
			if (err != ESP_OK) 			log_e("ESP32 Errorcode %i", err);
			if (m_i2s_bytesWritten < 4) log_e("Can't stuff any more in I2S..."); // increase waitingtime or outputbuffer
		}		
		else break;
	}
	m_i2s_bytesWritten = 0;
	m_fader = 0x00;
	m_play_status = FADE_IN;
	m_dacBias = 0;
	// let I2S send the data and flush the TX buffers
	// too short time will result with a "click"
	delay(400);
	i2s_zero_dma_buffer((i2s_port_t) m_i2s_num);
}

/**
 * @brief Increase the volume by one step, useful for button interface
 * 
 * @return uint16_t  current volume setting
 */
uint16_t CYD_Audio::volumeUp(void)  	// volume step up
{
	m_vol++;
	if (m_vol > m_vol_steps) m_vol = m_vol_steps;
	return m_vol;
}

/**
 * @brief Decrease the volume by one step.
 * 
 * @return uint16_t current volume setting
 */
uint16_t CYD_Audio::volumeDown(void)		// volume step down
{
	bool result = true;
	m_vol--;
	if (m_vol) m_vol--;
	else 
	{
		m_vol =0;
		result = false;
	}
	return m_vol;
}

