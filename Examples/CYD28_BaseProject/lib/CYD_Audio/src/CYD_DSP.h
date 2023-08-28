#ifndef _CYD_DSP_H_
#define _CYD_DSP_H_

#include <Arduino.h>
#include "esp_dsp.h"

// computes limit((val >> rshift), 2**bits)
static inline int32_t signed_saturate_rshift(int32_t val, int bits, int rshift) __attribute__((always_inline, unused));
static inline int32_t signed_saturate_rshift(int32_t val, int bits, int rshift)
{
	int32_t out, max;
	out = val >> rshift;
	max = 1 << (bits - 1);
	if (out >= 0)
	{
		if (out > max - 1)
			out = max - 1;
	}
	else
	{
		if (out < -max)
			out = -max;
	}
	return out;
}

static inline int16_t saturate16(int32_t val) __attribute__((always_inline, unused));
static inline int16_t saturate16(int32_t val)
{
	if (val > 32767)
		val = 32767;
	else if (val < -32768)
		val = -32768;
	return val;
}

// computes ((a[31:0] * b[15:0]) >> 16)
static inline int32_t signed_multiply_32x16b(int32_t a, uint32_t b) __attribute__((always_inline, unused));
static inline int32_t signed_multiply_32x16b(int32_t a, uint32_t b)
{
	return ((int64_t)a * (int16_t)(b & 0xFFFF)) >> 16;
}

// computes ((a[31:0] * b[31:16]) >> 16)
static inline int32_t signed_multiply_32x16t(int32_t a, uint32_t b) __attribute__((always_inline, unused));
static inline int32_t signed_multiply_32x16t(int32_t a, uint32_t b)
{
	return ((int64_t)a * (int16_t)(b >> 16)) >> 16;
}

// computes (a[31:16] | (b[31:16] >> 16))
static inline uint32_t pack_16t_16t(int32_t a, int32_t b) __attribute__((always_inline, unused));
static inline uint32_t pack_16t_16t(int32_t a, int32_t b)
{
	return (a & 0xFFFF0000) | ((uint32_t)b >> 16);

}

// computes (a[31:16] | b[15:0])
static inline uint32_t pack_16t_16b(int32_t a, int32_t b) __attribute__((always_inline, unused));
static inline uint32_t pack_16t_16b(int32_t a, int32_t b)
{
	return (a & 0xFFFF0000) | (b & 0x0000FFFF);
}

// computes ((a[15:0] << 16) | b[15:0])
static inline uint32_t pack_16b_16b(int32_t a, int32_t b) __attribute__((always_inline, unused));
static inline uint32_t pack_16b_16b(int32_t a, int32_t b)
{
	return (a << 16) | (b & 0x0000FFFF);
}

// -----------------------------------------------------------
/**
 * @brief calculates RMS value of a stereo input block
 * 		data format u16_R u16_L
 */
class CYD_rms
{
public:
	CYD_rms(uint16_t audioBlockSampleCount = 32) : block_smpcount(audioBlockSampleCount) 
	{
		reset();
		setSpan(64);
	};
	~CYD_rms(){};

	bool available() { return ready; }

	void setBias(int16_t v) { bias = -v;}

	void setSpan(uint16_t blocks)	// after how many blocks of accumulating calcualte the rms
	{
		count_cmp = blocks * block_smpcount;
	}
	void getLast(uint32_t *lvlR, uint32_t *lvlL) 
	{ 
		*lvlR = lastResultR;
		*lvlL = lastResultL;
	}
	uint32_t getLast() 
	{ 
		uint32_t result = (lastResultR << 16) | (lastResultL & 0xFFFF);
		ready = false;
		return result;
	}
	void  reset()
	{
		count = 0;
		accL = 0;
		accR = 0;
		lastResultL = 0;
		lastResultR = 0;
	}
	void process(int32_t *src, uint16_t sz)
	{
		int16_t *src16 = (int16_t *)src;
		int16_t *end16 = src16 + 2*sz;
		int64_t sumL, sumR;
		do {
			int16_t r1 = (*src16++) - bias;
			int16_t l1 = (*src16++) - bias;
			int16_t r2 = (*src16++) - bias;
			int16_t l2 = (*src16++) - bias;

			sumR  = ((int32_t)r1 * r1) >> 16; // r1^2 
			sumR += ((int32_t)r2 * r2) >> 16; // r2^2
			sumL  = ((int32_t)l1 * l1) >> 16; // l1^2 
			sumL += ((int32_t)l2 * l2) >> 16; // l2^2
		} while (src16 < end16);
		accL += sumL;
		accR += sumR;
		count += sz;
		if (count >= count_cmp)
		{
			float rmsL, rmsR;
			int64_t meansq = accL / count;
			rmsL = 10.0f * sqrtf((float)meansq);
			meansq = accR / count;
			rmsR = 10.0f * sqrtf((float)meansq);

			lastResultL = rmsL;
			lastResultR = rmsR;
			count = 0;
			accL = 0;
			accR = 0;
			ready = true;
			//log_i("RMSr= %d, RMSl= %d", lastResultR, lastResultL);
		}
	}
private:
	const uint16_t block_smpcount; 
	int32_t bias = 0;
	uint32_t count = 0;
	uint16_t count_cmp = block_smpcount;
	int64_t accL = 0, accR = 0;
	uint32_t lastResultR = 0;
	uint32_t lastResultL = 0;

	float rmsL_last;
	float rmsR_last;

	float attack;
	float decay;

	bool ready = false;
};

#endif // _CYD_DSP_H_
