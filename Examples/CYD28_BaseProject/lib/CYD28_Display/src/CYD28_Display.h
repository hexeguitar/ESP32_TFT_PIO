/**
 * @file CYD28_Display.h
 * @author Piotr Zapart www.hexefx.com
 * @brief 	CYD28 (Cheap Yellow Display 2.8") display + touchscreen driver 
 * 			using LVGL library.
 * 			SPI: HSPI using direct GPIO access (no mux)
 * 			XPT2046 Resistove touchscreen uses software bit-banged SPI, hence not interfering
 * 				with the display and SD card (VSPI)
 * @version 0.1
 * @date 2023-08-12
 */
#ifndef _CYD28_DISPLAY_H_
#define _CYD28_DISPLAY_H_
#include <Arduino.h>
#include <SPI.h>
#include "../lvgl/lvgl.h"
#include "CYD28_TouchscreenR.h"
#include "TFT_eSPI.h"

#define CYD28_DISPLAY_HOR_RES_MAX 320
#define CYD28_DISPLAY_VER_RES_MAX 240

/**
 * @brief Display orientation
 */
typedef enum
{
	CYD28_DISPLAY_ROT_PORT0 = 0,
	CYD28_DISPLAY_ROT_LANDSC0 = 1,
	CYD28_DISPLAY_ROT_PORT1 = 2,
	CYD28_DISPLAY_ROT_LANDSC1 = 3
}CYD28_Display_rot_t;

class CYD28_Display
{
public:
	CYD28_Display(){};
	~CYD28_Display(){};

	void begin(CYD28_Display_rot_t rot);
	void loop(void) { lv_task_handler(); };
	TFT_eSPI tft = TFT_eSPI(); 
	CYD28_TouchR ts = CYD28_TouchR(CYD28_DISPLAY_HOR_RES_MAX, CYD28_DISPLAY_VER_RES_MAX);
	CYD28_TS_Point oldPoint;
private:
	// ---- LVGL ---- 
	lv_disp_drv_t disp_drv;
	// ---- Touchscreen driver ----
	lv_indev_drv_t indev_drv;	
};

extern CYD28_Display display;

#endif // _CYD28_DISPLAY_H_
