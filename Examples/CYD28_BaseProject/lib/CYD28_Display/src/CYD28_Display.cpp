#include "CYD28_Display.h"

// display configuration (pinout, spi, etc) exists in 
// User_Setup.h in libs/TFT_eSPI

// lvgl 
#define LV_BUFFER_ROWS 20		// defines the lvgl pixel buffer size

static CYD28_Display *dispPtr;
static lv_disp_draw_buf_t disp_buf;
static lv_color_t bufA[CYD28_DISPLAY_HOR_RES_MAX * LV_BUFFER_ROWS]; // dual buffer mode
static lv_color_t bufB[CYD28_DISPLAY_HOR_RES_MAX * LV_BUFFER_ROWS]; // dual buffer mode
void disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
void touch_read(lv_indev_drv_t *drv, lv_indev_data_t *data);

CYD28_Display display;
// ------------------------------------------------------------
void CYD28_Display::begin(CYD28_Display_rot_t rot)
{
	dispPtr = this;
	uint16_t width, height;
	switch (rot)
	{
		case CYD28_DISPLAY_ROT_LANDSC0:
		case CYD28_DISPLAY_ROT_LANDSC1:
			width = CYD28_DISPLAY_HOR_RES_MAX;
			height = CYD28_DISPLAY_VER_RES_MAX;
			break;
		case CYD28_DISPLAY_ROT_PORT0:
		case CYD28_DISPLAY_ROT_PORT1:
			width = CYD28_DISPLAY_VER_RES_MAX;
			height = CYD28_DISPLAY_HOR_RES_MAX;			
			break;
		default:
			width = CYD28_DISPLAY_HOR_RES_MAX;
			height = CYD28_DISPLAY_VER_RES_MAX;
	}

	tft.begin();
	tft.setRotation(rot);
	tft.initDMA();
	ts.begin();
    ts.setRotation(rot);
	ts.setThreshold(300);
	oldPoint = ts.getPointScaled();
	lv_init();

    lv_disp_draw_buf_init(&disp_buf, bufA, bufB, width * LV_BUFFER_ROWS);
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = width;
    disp_drv.ver_res = height;
    disp_drv.flush_cb = disp_flush;
    disp_drv.draw_buf = &disp_buf;
    lv_disp_drv_register(&disp_drv);
    // touchscreen
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = touch_read;
    lv_indev_drv_register(&indev_drv);
}
// ------------------------------------------------------------
/**
 * @brief Main display update callback
 * 
 * @param disp 
 * @param area 
 * @param color_p 
 */
void disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);
	uint32_t l = w * h;
    dispPtr->tft.startWrite();
    dispPtr->tft.setAddrWindow(area->x1, area->y1, w, h);
 	dispPtr->tft.pushPixelsDMA(&color_p->full, l);
    dispPtr->tft.endWrite();
    lv_disp_flush_ready(disp);
}
// ------------------------------------------------------------
/**
 * @brief Touchscreen read callback
 * 
 * @param drv 
 * @param data 
 */
void touch_read(lv_indev_drv_t *drv, lv_indev_data_t *data)
{
    if (dispPtr->ts.touched())
    {
        CYD28_TS_Point p = dispPtr->ts.getPointScaled();
        data->state = LV_INDEV_STATE_PR;
        data->point.x = p.x;
        data->point.y = p.y;
        dispPtr->oldPoint.x = p.x;
        dispPtr->oldPoint.y = p.y;
        //log_i("X = %d, Y = %d", data->point.x, data->point.y);
    }
    else
    {
        data->state = LV_INDEV_STATE_REL;
        data->point.x = dispPtr->oldPoint.x;
        data->point.y = dispPtr->oldPoint.y;
    }
}

