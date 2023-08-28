#ifndef _CYD28_SD_H
#define _CYD28_SD_H

#include <Arduino.h>
#include "SD.h"
#include "SPI.h"

class CYD28_SD
{
public:
	CYD28_SD(){};
	~CYD28_SD(){};
	void begin(void);
	void status(uint8_t *mount, uint8_t *type, uint64_t *size, 
				uint32_t *sectors, uint32_t *sectorSize, uint64_t *totalBytes,
				uint64_t *usedBytes);
	void printStatus(char *buf); 		
	void listDir(const char *dirname, uint8_t levels);
	void createDir(const char *path);
	void removeDir(const char *path);
	void readFile(const char *path);
	void writeFile(const char *path, const char *message);
	void appendFile(const char *path, const char *message);
	void renameFile(const char *path1, const char *path2);
	void deleteFile(const char *path);
	void testFileIO(const char *path);	
private:
	const char *sdcardTypeLabels[5] = 
		{ "None", "MMC", "SD", "SDHC", "Unknown"};
};

extern CYD28_SD sdcard;

#endif // _CYD28_SD_H
