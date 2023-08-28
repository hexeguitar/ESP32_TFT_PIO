#ifndef _CYD28_AUDIO_H_
#define _CYD28_AUDIO_H_

#include "CYD_Audio.h"

/**
 * @brief Audio taks commands
 */
typedef enum : uint8_t
{
	IS_PLAYING,
	SET_VOLUME,
	GET_VOLUME,
	GET_RMS,
	CONNECTTOHOST,
	CONNECTTOSPEECH,
	CONNECTTOSD,
	AUDIO_STOP
}audioCmd_t;

/**
 * @brief Audio task queue message
 */
typedef struct 
{
	audioCmd_t cmd;
	const char *txt1;
	const char *txt2;
	uint32_t value;
	uint32_t ret;
} audioMessage_t;

extern CYD_Audio audio;

void audioInit();
audioMessage_t transmitReceive(audioMessage_t msg);

bool audioIsPlaying(void);
void audioSetVolume(uint8_t vol);
uint32_t audioGetRMS();
uint8_t audioGetVolumePerCent();
bool audioConnecttohost(const char *host);
bool audioConnecttoSD(const char *filename);
bool audioConnecttoSpeech(const char *host, const char *lang);
void audioStopSong();
void setVuMeters(uint32_t vuRL);

#endif // _AUDIO_H_
