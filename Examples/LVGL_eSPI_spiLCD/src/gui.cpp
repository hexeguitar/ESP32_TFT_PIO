#include "gui.h"
#include "display.h"
#include "ldr.h"

lv_obj_t *screenMain;

lv_obj_t *label_LDRtxt;
lv_obj_t *label_LDRval;

lv_obj_t *label_thresTxt;
lv_obj_t *label_thresVal;

lv_obj_t *label_dark;

lv_obj_t *chart;
lv_chart_series_t *ser_ldr;
lv_chart_series_t *ser_dark;

void task_ldr_cb(lv_task_t * task);
static uint32_t user_data = 10;
lv_task_t * task_ldr;

void gui_init(void)
{
    screenMain = lv_obj_create(NULL, NULL);

    static lv_style_t bigStyle;
    lv_style_init(&bigStyle);
    lv_style_set_text_font(&bigStyle, LV_STATE_DEFAULT, &UbuntuCond36);
    

    static lv_style_t style_chart;
    lv_style_init(&style_chart);
    lv_style_set_text_font(&style_chart, LV_STATE_DEFAULT, &UbuntuCond14);
    lv_style_set_text_color(&style_chart, LV_STATE_DEFAULT, LV_COLOR_BLACK);
    lv_style_set_pad_left(&style_chart, LV_STATE_DEFAULT, 56);
    lv_style_set_pad_right(&style_chart, LV_STATE_DEFAULT, 6);   
    lv_style_set_pad_ver(&style_chart, LV_STATE_DEFAULT, 16);  
    
    #define TICK_LABEL_MARGIN   48

    chart = lv_chart_create(screenMain, NULL);
    lv_obj_set_size(chart, lv_obj_get_width(screenMain) - 12 , 2 * lv_obj_get_height(screenMain) / 3);
    lv_obj_set_pos(chart, 6, 6);

    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);
    lv_obj_add_style(chart, LV_LABEL_PART_MAIN, &style_chart);

    static lv_style_t style_seriesADC;
    lv_style_init(&style_seriesADC);
    lv_style_set_size(&style_seriesADC, LV_STATE_DEFAULT, 0);
    lv_style_set_line_width(&style_seriesADC, LV_STATE_DEFAULT, 2);
    lv_obj_add_style(chart, LV_CHART_PART_SERIES, &style_seriesADC);

    lv_chart_set_range(chart, 0, 250);
    lv_chart_set_point_count(chart, 250);
    lv_chart_set_div_line_count(chart, 4, 4);

    const char *y_axis_labels  = "0\n128\n256\n512\n768\n1023";

    lv_chart_set_y_tick_texts(chart, y_axis_labels, 1, LV_CHART_AXIS_DRAW_LAST_TICK | LV_CHART_AXIS_INVERSE_LABELS_ORDER);
    lv_chart_set_y_tick_length(chart, LV_CHART_TICK_LENGTH_AUTO, LV_CHART_TICK_LENGTH_AUTO);
    lv_chart_set_update_mode(chart, LV_CHART_UPDATE_MODE_CIRCULAR);  

    ser_ldr = lv_chart_add_series(chart, LV_COLOR_MAGENTA);
    lv_chart_set_y_range(chart, LV_CHART_AXIS_PRIMARY_Y, 0, 1023);

    label_LDRtxt = lv_label_create(screenMain, NULL);
    lv_label_set_align(label_LDRtxt,LV_LABEL_ALIGN_CENTER);
    lv_label_set_text_static(label_LDRtxt, "ADC value");
    lv_obj_set_pos(label_LDRtxt, 30, 180);

    label_LDRval = lv_label_create(screenMain, NULL);
    lv_label_set_align(label_LDRval,LV_LABEL_ALIGN_CENTER);
    lv_label_set_text_fmt(label_LDRval, "%03d", ldr.get());
    lv_obj_set_pos(label_LDRval, 30, 200);
    lv_obj_add_style(label_LDRval, LV_LABEL_PART_MAIN, &bigStyle);

    label_thresTxt = lv_label_create(screenMain, NULL);
    lv_label_set_align(label_thresTxt,LV_LABEL_ALIGN_CENTER);
    lv_label_set_text_static(label_thresTxt, "Threshold value");
    lv_obj_set_pos(label_thresTxt, 125, 180);

    label_thresVal = lv_label_create(screenMain, NULL);
    lv_label_set_align(label_thresVal,LV_LABEL_ALIGN_CENTER);
    lv_label_set_text_fmt(label_thresVal, "%03d", ldr.thresGet());
    lv_obj_set_pos(label_thresVal, 140, 200);
    lv_obj_add_style(label_thresVal, LV_LABEL_PART_MAIN, &bigStyle);

    label_dark = lv_label_create(screenMain, NULL);
    lv_label_set_align(label_dark,LV_LABEL_ALIGN_CENTER);
    lv_label_set_text_static(label_dark, ldr.isDark() ? "Night" : "Day");
    lv_obj_set_pos(label_dark, 230, 200);
    lv_obj_add_style(label_dark, LV_LABEL_PART_MAIN, &bigStyle);

    task_ldr = lv_task_create(task_ldr_cb, 250, LV_TASK_PRIO_MID, &user_data);

    lv_scr_load(screenMain);
}
// ----------------------------------------------------------------------------
static void event_handler_btn(lv_obj_t *obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED)
    {
        // if (obj == btn1)
        //     lv_label_set_text(label, "Btn1");
        // else if (obj == btn2)
        // {
        //     lv_label_set_text(label, "Btn2");
        // }
    }
}
// ----------------------------------------------------------------------------
void task_ldr_cb(lv_task_t * task)
{
    int32_t ldrValue = ldr.get();
    lv_chart_set_next(chart, ser_ldr, ldrValue);
    lv_label_set_text_fmt(label_LDRval, "%03d", ldrValue);
    lv_label_set_text_fmt(label_dark, "%s", ldr.isDark() ? "Night":"Day");
}
