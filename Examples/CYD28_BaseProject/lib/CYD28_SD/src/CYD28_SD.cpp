#include "CYD28_SD.h"

#define SD_SCK 18
#define SD_MISO 19
#define SD_MOSI 23
#define SD_CS 5

SPIClass sd_spi = SPIClass(VSPI);
CYD28_SD sdcard;



// ------------------------------------------------------------
void CYD28_SD::begin(void)
{
	sd_spi.begin(SD_SCK, SD_MISO, SD_MOSI, SD_CS);
	// SD lib limits the SPI frequency to 25MHz
	if (!SD.begin(SD_CS, sd_spi, 25000000))
	{
		Serial.println("Card Mount Failed");
		return;
	}
	uint8_t cardType = SD.cardType();

	if (cardType == CARD_NONE)
	{
		Serial.println("No SD card attached");
		return;
	}
	//listDir(SD, "/", 2);
}
// ------------------------------------------------------------
void CYD28_SD::listDir(const char *dirname, uint8_t levels)
{
	char bf[32];
	Serial.printf("Listing directory: %s\n", dirname);

	File root = SD.open(dirname);
	if (!root)
	{
		Serial.println("Failed to open directory");
		return;
	}
	if (!root.isDirectory())
	{
		Serial.println("Not a directory");
		return;
	}

	File file = root.openNextFile();
	while (file)
	{
		if (file.isDirectory())
		{
			Serial.print("  DIR : ");
			Serial.println(file.name());
			if (levels)
			{
				listDir(file.path(), levels - 1);
			}
		}
		else
		{
			Serial.print("  FILE: ");
			Serial.print(file.name());
			Serial.print("  SIZE: ");
			Serial.println(file.size());
		}
		file = root.openNextFile();
	}
}
// ------------------------------------------------------------
void CYD28_SD::createDir(const char *path)
{
	Serial.printf("Creating Dir: %s\n", path);
	if (SD.mkdir(path))	Serial.println("Dir created");
	else				Serial.println("mkdir failed");
}
// ------------------------------------------------------------
void CYD28_SD::removeDir(const char *path)
{
	Serial.printf("Removing Dir: %s\n", path);
	if (SD.rmdir(path))		Serial.println("Dir removed");
	else					Serial.println("rmdir failed");
}
// ------------------------------------------------------------
void CYD28_SD::readFile(const char *path)
{
	Serial.printf("Reading file: %s\n", path);

	File file = SD.open(path);
	if (!file)
	{
		Serial.println("Failed to open file for reading");
		return;
	}

	Serial.print("Read from file: ");
	while (file.available())
	{
		Serial.write(file.read());
	}
	file.close();
}
// ------------------------------------------------------------
void CYD28_SD::writeFile(const char *path, const char *message)
{
	Serial.printf("Writing file: %s\n", path);

	File file = SD.open(path, FILE_WRITE);
	if (!file)
	{
		Serial.println("Failed to open file for writing");
		return;
	}
	if (file.print(message))
	{
		Serial.println("File written");
	}
	else
	{
		Serial.println("Write failed");
	}
	file.close();
}
// ------------------------------------------------------------
void CYD28_SD::appendFile(const char *path, const char *message)
{
	Serial.printf("Appending to file: %s\n", path);

	File file = SD.open(path, FILE_APPEND);
	if (!file)
	{
		Serial.println("Failed to open file for appending");
		return;
	}
	if (file.print(message))
	{
		Serial.println("Message appended");
	}
	else
	{
		Serial.println("Append failed");
	}
	file.close();
}
// ------------------------------------------------------------
void CYD28_SD::renameFile(const char *path1, const char *path2)
{
	Serial.printf("Renaming file %s to %s\n", path1, path2);
	if (SD.rename(path1, path2))
	{
		Serial.println("File renamed");
	}
	else
	{
		Serial.println("Rename failed");
	}
}
// ------------------------------------------------------------
void CYD28_SD::deleteFile(const char *path)
{
	Serial.printf("Deleting file: %s\n", path);
	if (SD.remove(path))
	{
		Serial.println("File deleted");
	}
	else
	{
		Serial.println("Delete failed");
	}
}
// ------------------------------------------------------------
void CYD28_SD::testFileIO(const char *path)
{
	File file = SD.open(path);
	static uint8_t buf[512];
	size_t len = 0;
	uint32_t start = millis();
	uint32_t end = start;
	if (file)
	{
		len = file.size();
		size_t flen = len;
		start = millis();
		while (len)
		{
			size_t toRead = len;
			if (toRead > 512)
			{
				toRead = 512;
			}
			file.read(buf, toRead);
			len -= toRead;
		}
		end = millis() - start;
		Serial.printf("%u bytes read for %u ms\n", flen, end);
		file.close();
	}
	else
	{
		Serial.println("Failed to open file for reading");
	}

	file = SD.open(path, FILE_WRITE);
	if (!file)
	{
		Serial.println("Failed to open file for writing");
		return;
	}
	size_t i;
	start = millis();
	for (i = 0; i < 2048; i++)
	{
		file.write(buf, 512);
	}
	end = millis() - start;
	Serial.printf("%u bytes written for %u ms\n", 2048 * 512, end);
	file.close();
}

void CYD28_SD::status(uint8_t *mount, uint8_t *type, uint64_t *size, 
			uint32_t *sectors, uint32_t *sectorSize, uint64_t *totalBytes,
			uint64_t *usedBytes)
{
	if (mount) *mount = SD.begin(SD_CS, sd_spi, 25000000);
	else return;
	if (type)		*type = SD.cardType();
	if (size)		*size = SD.cardSize();
	if (sectors)	*sectors = SD.numSectors();
	if (sectorSize) *sectorSize = SD.sectorSize();
	if (totalBytes) *totalBytes = SD.totalBytes();
	if (usedBytes)	*usedBytes = SD.usedBytes();
}

void CYD28_SD::printStatus(char *buf)
{
	if (buf == NULL) return;
	bool mount = SD.begin(SD_CS, sd_spi, 25000000);
	if (!mount)
	{
		snprintf(buf, 20, "SD CARD not found!");
	}
	else
	{
		uint8_t type = SD.cardType();
		uint64_t size = SD.cardSize();
		uint64_t totalBytes = SD.totalBytes();
		uint64_t usedBytes = SD.usedBytes();

		snprintf( buf, 255,
			"SD card found\n"
			"Type: %s\n"
			"Size: %lluMB\n"
			"Total Space: %lluMB\n"
			"Used Space: %luMB\n", 
			sdcardTypeLabels[type], 
			size/1048576, 
			totalBytes/1048576, 
			usedBytes/1048576);
	}


}