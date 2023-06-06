#include "display.h"

#include "../lvgl/src/lvgl.h"
#include "SPI.h"
#include "XPT2046_Touchscreen.h"
#include "TFT_eSPI.h"

#define XPT2046_IRQ     36
#define XPT2046_MOSI    32
#define XPT2046_MISO    39
#define XPT2046_CLK     25
#define XPT2046_CS      33

#define LV_BUFFER_ROWS  16

SPIClass mySpi = SPIClass(HSPI);
XPT2046_Touchscreen ts(XPT2046_CS, XPT2046_IRQ);

TFT_eSPI tft = TFT_eSPI();
TS_Point oldPoint;

static lv_disp_buf_t disp_buf; // LVGL stuff;
static lv_color_t buf[LV_HOR_RES_MAX * LV_BUFFER_ROWS* 2]; // dual buffer mode
lv_disp_drv_t disp_drv;
lv_indev_drv_t indev_drv;

void disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);

// ----------------------------------------------------------------------------
void display_init(void)
{
    mySpi.begin(XPT2046_CLK, XPT2046_MISO, XPT2046_MOSI, XPT2046_CS);
    ts.begin(mySpi);
    ts.setRotation(1);
    tft.begin();
    tft.setRotation(1);  
    oldPoint = ts.getPoint();
    lv_init();
    lv_disp_buf_init(&disp_buf, buf, &buf[LV_HOR_RES_MAX * LV_BUFFER_ROWS], LV_HOR_RES_MAX * LV_BUFFER_ROWS);
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = LV_HOR_RES_MAX;
    disp_drv.ver_res = LV_VER_RES_MAX;
    disp_drv.flush_cb = disp_flush;
    disp_drv.buffer = &disp_buf;
    lv_disp_drv_register(&disp_drv);      
}

// ----------------------------------------------------------------------------
void disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors(&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}
// ----------------------------------------------------------------------------
bool touch_read(lv_indev_drv_t *drv, lv_indev_data_t *data)
{
    if (ts.tirqTouched() && ts.touched())
    {
        TS_Point p = ts.getPoint();
        data->state = LV_INDEV_STATE_PR;
        data->point.x = p.x * 320 / 4096; 
        data->point.y = p.y * 240 / 4096; 
        oldPoint.x = p.x;
        oldPoint.y = p.y;
        Serial.printf("X = %d, Y = %d\r\n", data->point.x, data->point.y);
    }
    else
    {
        data->state = LV_INDEV_STATE_REL;
        data->point.x = oldPoint.x * 320 / 4096;
        data->point.y = oldPoint.y * 240 / 4096;
    }

    return false; 
}