/**
 * @file main.cpp
 * @author Piotr Zapart (www.hexefx.com)
 * @brief 	demo project for the CYD 2.8" board (ESP32 + ILI9341 display)
 * 
 * 	Libraries:
 * 		CYD28_LDR - onboard LDR for light intensite measurement
 * 		CYD28_RGBled - onboard RGB led, or just R if PSRAM mod is perfromed
 * 		CYD28_SD - sd card library and filesystem
 * 		CYD28_display - dual buffered display driver configured for LVGL v8
 * 		CYD28_Touchscreen - bit banged SPI driver for the onboard touch screen controller
 * 		CYD_Audio - audio library optimized for internal 8bit DAC, based on ESP32-audioI2S by Wolle (schreibfaul1)
 * 		lvgl - v8.3.9 
 * 		SimpleCLI - console command via UART
 * 		TFT_eSPI - used for low level dislpay access.
 * 		WifiManager - added as lib dependency in platformio.ini
 * 
 * 		--- Audio ---
 * 		Audio is runing as a separate task on core 0. Use queues to communicate with it. 
 * 		See CYD28_audio.h/cpp and gui.h/cpp files  
 * 
 * @version 1.
 * @date 2023-08-25
 */
#include <Arduino.h>
#include "SPI.h"
#include "CYD28_LDR.h"
#include "CYD28_RGBled.h"
#include "CYD28_SD.h"
#include "CYD28_Display.h"
#include "gui.h"
#include "CYD28_audio.h"
#include "console.h"

#include <Update.h>
#include <WebServer.h>
#include <DNSServer.h>
#include <WiFiManager.h>

LDR ldr;
RGBLED led;
WiFiManager wifiManager;

uint32_t tNow, tLast;

void setup()
{
	Serial.begin(115200);
#ifndef DUSE_BACKLIGHT_MOD
	pinMode(21, OUTPUT);		// turn on the display backlight
	digitalWrite(21, HIGH);
#endif

	console_init();
	delay(1500);
	
	led.begin();
	analogReadResolution(10);
	ldr.begin();
	ldr.thresSet(300);
	ldr.hystSet(100);
	audioInit();
	display.begin(CYD28_DISPLAY_ROT_LANDSC1);

	gui_init();
	sdcard.begin();
	// Set the SSID and possword for the AP here:
	wifiManager.autoConnect("CYD28", "passwordcyd28");
}

void loop()
{
	display.loop();
	console_process();

	// tNow = millis();
	// if (tNow - tLast > 1000)
	// {
	// 	tLast = tNow;

	// }

}
