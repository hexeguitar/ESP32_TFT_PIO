#include "gui.h"
#include "CYD28_LDR.h"
#include "CYD28_RGBled.h"
#include "CYD28_audio.h"
#include "CYD28_SD.h"
#include <WiFiManager.h>

extern WiFiManager wifiManager;

static lv_obj_t *screenMain;

uint8_t userData;

// ---------------- main tabview ----------------------------------------
lv_obj_t * tabview;
lv_obj_t * tabAudio;
lv_obj_t * tabSD;
lv_obj_t * tabLDR;
lv_obj_t * tabRGB;
lv_obj_t * tabSYS;

// ------------------ TAB AUDIO -----------------------------------------	
const char *btnLabels[] = {"SAMPLE1", "SAMPLE2", "SAMPLE3","\n", "SAMPLE4", "SAMPLE5", "SAMPLE6", "\n", "SAMPLE7", "SAMPLE8", "STOP", NULL};
static lv_obj_t * btnMatrix;
static lv_obj_t * volSlider;
static lv_obj_t * volSlider_label;
static lv_obj_t * VUmeter;
static lv_obj_t * VUmeterR;
static lv_obj_t * VUmeterL;
static lv_obj_t * label_AudioStatus;
static void event_handler_btnsAudio(lv_event_t * e);
static void volSlider_event_cb(lv_event_t * e);
lv_timer_t *VU_updateTimer;
void VU_updateTimer_cb(lv_timer_t *t);
// ------------------ TAB SD ---------------------------------------
static lv_obj_t * btns_SD;
static lv_obj_t * label_SD_ls;
const char *btnSDLabels[] = {"REFRESH", NULL};
static void event_handler_btnsSD(lv_event_t * e);
// ------------------ TAB LDR ---------------------------------------
lv_obj_t *LDR_label_txt;
lv_obj_t *LDR_label_val;

lv_obj_t *LDR_label_thresTxt;
lv_obj_t *LDR_label_thresVal;

lv_obj_t *LDR_label_dark;

lv_obj_t *LDR_chart;
lv_chart_series_t *LDR_series;
lv_chart_series_t *LDR_ser_slow;

lv_timer_t *LDR_updateTimer;
void LDR_updateTimer_cb(lv_timer_t *t);

// ------------------ TAB RGB ---------------------------------------
lv_obj_t *RGB_btns;
const char *RGB_btns_labels[] = {"RED", "GREEN", "BLUE", NULL};

static void event_handler_btnsRGB(lv_event_t * e);
// ------------------ TAB SYS ---------------------------------------
lv_obj_t *label_sysinfo;
void printSysInfo(char * buf);
lv_timer_t *SYS_updateTimer; // used to periodically update the info page
void SYS_updateTimer_cb(lv_timer_t *t);

/**----------------------------------------------------------------
 * @brief Main gui init - builds all the interface
 */
void gui_init(void)
{
	char buf[256];

    screenMain = lv_obj_create(NULL);	// main screen object

	tabview = lv_tabview_create(screenMain, LV_DIR_LEFT, 40);
	tabAudio = lv_tabview_add_tab(tabview, "Audio");
	//lv_obj_set_width(tabAudio, lv_obj_get_width(tabview) - 40);
	tabSD = lv_tabview_add_tab(tabview, "SD");
	tabLDR = lv_tabview_add_tab(tabview, "LDR");
	tabRGB = lv_tabview_add_tab(tabview, "RGB");
	tabSYS = lv_tabview_add_tab(tabview, "SYS");

	lv_obj_t * tab_btns = lv_tabview_get_tab_btns(tabview);
	lv_obj_set_style_border_side(tab_btns, LV_BORDER_SIDE_RIGHT, LV_PART_ITEMS | LV_STATE_CHECKED);
	
// ------------------ TAB AUDIO -----------------------------------------	
    btnMatrix = lv_btnmatrix_create(tabAudio);
    lv_btnmatrix_set_map(btnMatrix, btnLabels);
    lv_obj_align(btnMatrix, LV_ALIGN_TOP_MID, 0, 0);
    lv_obj_add_event_cb(btnMatrix, event_handler_btnsAudio, LV_EVENT_VALUE_CHANGED, NULL);
	lv_obj_clear_flag(tabAudio, LV_OBJ_FLAG_SCROLLABLE);

	volSlider = lv_slider_create(tabAudio);
	lv_obj_set_size(volSlider, 200, 10);
	lv_slider_set_range(volSlider, 0, 100);
	lv_slider_set_value(volSlider, 100, LV_ANIM_OFF);
	lv_obj_align_to(volSlider, btnMatrix, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
    lv_obj_add_event_cb(volSlider, volSlider_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

    volSlider_label = lv_label_create(tabAudio);
    lv_label_set_text_fmt(volSlider_label, "Volume %3d%%", audioGetVolumePerCent());
    lv_obj_align_to(volSlider_label, volSlider, LV_ALIGN_OUT_BOTTOM_MID, 0, 1);

	static lv_style_t style_indic;
    lv_style_init(&style_indic);
    lv_style_set_bg_opa(&style_indic, LV_OPA_COVER);
    lv_style_set_bg_color(&style_indic, lv_palette_main(LV_PALETTE_GREEN));
    lv_style_set_bg_grad_color(&style_indic, lv_palette_main(LV_PALETTE_RED));
    lv_style_set_bg_grad_dir(&style_indic, LV_GRAD_DIR_HOR);

    VUmeterR = lv_bar_create(tabAudio);
    lv_obj_add_style(VUmeterR, &style_indic, LV_PART_INDICATOR);
    lv_obj_set_size(VUmeterR, 150, 5);
    lv_bar_set_range(VUmeterR, 0, 100);
	lv_obj_align_to(VUmeterR, volSlider, LV_ALIGN_OUT_BOTTOM_MID, 0, 20);

	VUmeterL = lv_bar_create(tabAudio);
    lv_obj_add_style(VUmeterL, &style_indic, LV_PART_INDICATOR);
    lv_obj_set_size(VUmeterL, 150, 5);
    lv_bar_set_range(VUmeterL, 0, 100);
	lv_obj_align_to(VUmeterL, VUmeterR, LV_ALIGN_OUT_BOTTOM_MID, 0, 5);

	label_AudioStatus = lv_label_create(tabAudio);
	lv_label_set_text_fmt(label_AudioStatus, "Press button to play");
	lv_obj_align_to(label_AudioStatus, VUmeterL, LV_ALIGN_OUT_BOTTOM_MID, 0, 7);

	VU_updateTimer = lv_timer_create(VU_updateTimer_cb, 60, &userData);
	//lv_timer_pause(VU_updateTimer);

// ------------------ TAB SD -----------------------------------------	
	label_SD_ls = lv_label_create(tabSD);
	lv_obj_align(label_SD_ls, LV_ALIGN_TOP_MID,0, 0);
	lv_obj_set_size(label_SD_ls, lv_obj_get_width(tabSD), 150);
	lv_obj_set_style_text_align(label_SD_ls, LV_TEXT_ALIGN_LEFT, 0);

	lv_obj_set_style_pad_hor(label_SD_ls, 15, 0);
	
	sdcard.printStatus(buf);
	lv_label_set_text_fmt(label_SD_ls, buf);

	btns_SD = lv_btnmatrix_create(tabSD);
    lv_btnmatrix_set_map(btns_SD, btnSDLabels);
    lv_obj_align(btns_SD, LV_ALIGN_TOP_MID, 0, 0);
    lv_obj_add_event_cb(btns_SD, event_handler_btnsSD, LV_EVENT_VALUE_CHANGED, NULL);	
	lv_obj_align(btns_SD, LV_ALIGN_BOTTOM_MID,0, 0);
	lv_obj_set_height(btns_SD, 50);
	
	lv_obj_set_style_pad_all(btns_SD, 5, LV_PART_ITEMS);
	lv_obj_clear_flag(tabSD, LV_OBJ_FLAG_SCROLLABLE);

// ------------------ TAB LDR ---------------------------------------
	
	LDR_chart = lv_chart_create(tabLDR);
	lv_obj_set_height(LDR_chart, 150);
	lv_chart_set_type(LDR_chart, LV_CHART_TYPE_LINE);
	lv_chart_set_range(LDR_chart, LV_CHART_AXIS_PRIMARY_X, 0, 250);
	lv_chart_set_range(LDR_chart, LV_CHART_AXIS_PRIMARY_Y, 0, 1023);
	lv_chart_set_point_count(LDR_chart, 250);
	lv_chart_set_div_line_count(LDR_chart, 4, 4);
	lv_chart_set_update_mode(LDR_chart, LV_CHART_UPDATE_MODE_CIRCULAR);
				
	lv_obj_set_style_text_font(LDR_chart, &UbuntuCond11, LV_PART_TICKS);

	LDR_series = lv_chart_add_series(LDR_chart, lv_palette_main(LV_PALETTE_RED), 
										LV_CHART_AXIS_PRIMARY_Y);
	LDR_label_txt = lv_label_create(tabLDR);
	lv_obj_set_style_text_align(LDR_label_txt, LV_TEXT_ALIGN_LEFT, 0);
	lv_label_set_text_fmt(LDR_label_txt, "ADC value: %3d",ldr.get());
	lv_obj_align_to(LDR_label_txt, LDR_chart, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 10);

	LDR_label_thresTxt = lv_label_create(tabLDR);
	lv_obj_set_style_text_align(LDR_label_thresTxt, LV_TEXT_ALIGN_RIGHT, 0);
	lv_label_set_text_fmt(LDR_label_thresTxt, "Threshold: %3d", ldr.thresGet());
	lv_obj_align_to(LDR_label_thresTxt, LDR_chart, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, 10);

	LDR_label_dark = lv_label_create(tabLDR);
	lv_obj_set_style_text_font(LDR_label_dark, &UbuntuCond36, 0);
	lv_label_set_text_static(LDR_label_dark, ldr.isDark() ? "Night" : "Day");
	lv_obj_align_to(LDR_label_dark, LDR_chart, LV_ALIGN_OUT_BOTTOM_MID, 0, 30);

	LDR_updateTimer = lv_timer_create(LDR_updateTimer_cb, 500, &userData);
	lv_obj_clear_flag(tabLDR, LV_OBJ_FLAG_SCROLLABLE);

// ------------------ TAB RGB ---------------------------------------
	RGB_btns = lv_btnmatrix_create(tabRGB);
    lv_btnmatrix_set_map(RGB_btns, RGB_btns_labels);
    lv_obj_align(RGB_btns, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(RGB_btns, event_handler_btnsRGB, LV_EVENT_VALUE_CHANGED, NULL);
	lv_obj_clear_flag(tabRGB, LV_OBJ_FLAG_SCROLLABLE);

	#if defined(USE_I2S_DAC) && defined(BOARD_HAS_PSRAM)
		static lv_obj_t *RGB_infoLabel = lv_label_create(tabRGB);
		lv_label_set_text_static(RGB_infoLabel, "PSRAM MOD/I2S installed, RGB disabled!");
		lv_obj_align(RGB_infoLabel, LV_ALIGN_TOP_MID,0,0);
		lv_btnmatrix_set_btn_ctrl(RGB_btns, 0, LV_BTNMATRIX_CTRL_DISABLED);
		lv_btnmatrix_set_btn_ctrl(RGB_btns, 1, LV_BTNMATRIX_CTRL_DISABLED);
		lv_btnmatrix_set_btn_ctrl(RGB_btns, 2, LV_BTNMATRIX_CTRL_DISABLED);
	#elif defined(USE_I2S_DAC)
		static lv_obj_t *RGB_infoLabel = lv_label_create(tabRGB);
		lv_label_set_text_static(RGB_infoLabel, "I2S MOD installed, R disabled!");
		lv_obj_align(RGB_infoLabel, LV_ALIGN_TOP_MID,0,0);
		lv_btnmatrix_set_btn_ctrl(RGB_btns, 0, LV_BTNMATRIX_CTRL_DISABLED);
	#elif defined(BOARD_HAS_PSRAM)
		static lv_obj_t *RGB_infoLabel = lv_label_create(tabRGB);
		lv_label_set_text_static(RGB_infoLabel, "PSRAM MOD installed, G+B disabled!");
		lv_obj_align(RGB_infoLabel, LV_ALIGN_TOP_MID,0,0);
		lv_btnmatrix_set_btn_ctrl(RGB_btns, 1, LV_BTNMATRIX_CTRL_DISABLED);
		lv_btnmatrix_set_btn_ctrl(RGB_btns, 2, LV_BTNMATRIX_CTRL_DISABLED);
	#endif
// ------------------ TAB SYS ---------------------------------------
	label_sysinfo = lv_label_create(tabSYS);

	lv_label_set_recolor(label_sysinfo, true); 
	lv_obj_align(RGB_btns, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_text_align(label_SD_ls, LV_TEXT_ALIGN_LEFT, 0);
	printSysInfo(buf);
	lv_label_set_text(label_sysinfo, buf);
	SYS_updateTimer = lv_timer_create(SYS_updateTimer_cb, 2000, &userData);

// ------------------ LOAD MAIN SCREEN ------------------------------------
	
	lv_tabview_set_act(tabview, 0, LV_ANIM_OFF);
    lv_scr_load(screenMain);
} // --- END gui_init

/** -----------------------------------------------
 * @brief event handler for the Audio tab button matrix
 * 
 * @param e 
 */
static void event_handler_btnsAudio(lv_event_t * e)
{
	lv_obj_t * btnm = lv_event_get_target(e);
	uint16_t idx = lv_btnmatrix_get_selected_btn(btnm);
	const char * labelTxt = lv_btnmatrix_get_btn_text(btnm, idx);

	switch(idx)
	{
		case 0: 
			audioConnecttoSD("/ninja.mp3"); 
			//lv_timer_resume(VU_updateTimer);
			break;
		case 1: 
			audioConnecttoSD("/guitar.mp3");
			break;
		case 2: 
			audioConnecttoSD("/iw.mp3");
			break;
		case 3:
			audioConnecttohost("https://github.com/schreibfaul1/ESP32-audioI2S/raw/master/additional_info/Testfiles/Miss-Marple.m4a");  
			break;
		case 4: 
			audioConnecttohost("http://stream.radioparadise.com/flac"); 
			break;
		case 5: 
			audioConnecttoSpeech("Welcome to cheap yellow display", "en"); break;
			break;
		case 6: 
			audioConnecttoSpeech("Stock audio system, no mod installed", "en");   
			break;
		case 7: 
			audioConnecttoSpeech("Audio modification installed", "en"); 
			break;
		case 8:
			audioStopSong();  
			break;

	}
	Serial.printf("Button %d - %s was pressed\n", idx, labelTxt);
}
// ----------------------------------------------------------------------------
void audio_eof_mp3(const char *info)
{ // end of file

	Serial.print("eof_mp3     ");
	Serial.println(info);
}
// ------------------------------------------------

void audio_info(const char*s)
{
	Serial.printf("%s\r\n", s);
}

/** -----------------------------------------------
 * @brief event handler for the Volume slider
 * 
 * @param e 
 */
static void volSlider_event_cb(lv_event_t * e)
{
    lv_obj_t * slider = lv_event_get_target(e);
    char buf[12];
	uint32_t vol;
	int32_t val = lv_slider_get_value(slider);
    lv_snprintf(buf, sizeof(buf), "Volume %3d%%", val);
    lv_label_set_text(volSlider_label, buf);
	vol = (val * 21)/100;
	audioSetVolume(vol);
}
/** -----------------------------------------------
 * @brief manually set the VU meters value, input value is 
 * 			u16_t u16_t
 *			 R     L 
 * @param vuRL 
 */
void setVuMeters(uint32_t vuRL)
{
	uint8_t r = (vuRL >> 16) & 0xFF;
	uint8_t l = vuRL  & 0xFF;
	lv_bar_set_value(VUmeterR, r, LV_ANIM_OFF);
	lv_bar_set_value(VUmeterL, l, LV_ANIM_OFF);
}
/** -----------------------------------------------
 * @brief event handler for the SD card refresh button
 * 
 * @param e 
 */
static void event_handler_btnsSD(lv_event_t * e)
{
	lv_obj_t * btnm = lv_event_get_target(e);
	uint16_t idx = lv_btnmatrix_get_selected_btn(btnm);
	const char * labelTxt = lv_btnmatrix_get_btn_text(btnm, idx);

	switch(idx)
	{
		case 0:
			char buf[256];
			sdcard.printStatus(buf); 
			break;

	}
	Serial.printf("SD tab: Button %d - %s was pressed\n", idx, labelTxt);	
}

/** -----------------------------------------------
 * @brief LDR update timer callback.
 * 		Reads the LDR input value and passes it for the chart
 * @param t 
 */
void LDR_updateTimer_cb(lv_timer_t *t)
{
	if (lv_tabview_get_tab_act(tabview) != 2) return; // update only when tab is active
    int32_t ldrValue = ldr.get();
    bool dark, changed;
    dark = ldr.isDark(&changed);    
    lv_chart_set_next_value(LDR_chart, LDR_series, ldrValue);
	lv_label_set_text_fmt(LDR_label_txt, "ADC value: %3d",ldrValue);
    if (changed)
    {
        lv_label_set_text_fmt(LDR_label_dark, "%s", dark ? "Night":"Day");
    } 
}

/** -----------------------------------------------
 * @brief event handler for the RGB led buttons (RGB tab)
 * 
 * @param e 
 */
static void event_handler_btnsRGB(lv_event_t * e)
{
	lv_obj_t * btnm = lv_event_get_target(e);
	uint16_t idx = lv_btnmatrix_get_selected_btn(btnm);
	const char * labelTxt = lv_btnmatrix_get_btn_text(btnm, idx);

	switch(idx)
	{
		case 0: 
			led.redToggle();
			break;
		case 1: 
			led.greenToggle();
			break;
		case 2: 
			led.blueToggle();
			break;
		
	}
	Serial.printf("Button %d - %s was pressed\n", idx, labelTxt);	
}
/** -----------------------------------------------
 * @brief Print various system information
 * 
 * @param buf pointer to a 256 bytes long buffer 
 */
void printSysInfo(char * buf)
{
	if (!buf) return;
	esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
	snprintf(buf, 256, 	"#590a1b SYSTEM INFO:#\n\n"
						"%d cores Wifi %s%s\n"
						"Silicon revision: %d\n"
						"%dMB %s flash\n"
						"Total heap: %d\n"
						"Free heap: %d\n"
						"#12451b Total PSRAM:# %d\n"
						"#12451b Free PSRAM:# %d\n"
						"WiFi: %s mode: %s\n"
						"IP: " IPSTR,

						chip_info.cores, (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
    					(chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "",
						chip_info.revision,
						spi_flash_get_chip_size()/(1024*1024),
						(chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embeded" : "external",
						ESP.getHeapSize(),
						ESP.getFreeHeap(),
						ESP.getPsramSize(),
						ESP.getFreePsram(),
						wifiManager.getWLStatusString(),
						wifiManager.getModeString(WiFi.getMode()),
						WiFi.localIP()[0], WiFi.localIP()[1], WiFi.localIP()[2], WiFi.localIP()[3]);
}
/** -----------------------------------------------
 * @brief periodically (2s) update sys info
 * 
 * @param t 
 */
void SYS_updateTimer_cb(lv_timer_t *t)
{
	char buf[256];
	printSysInfo(buf);
	lv_label_set_text(label_sysinfo, buf);
}
/** -----------------------------------------------
 * @brief Updating VU meters while playing audio
 * 
 * @param t 
 */
void VU_updateTimer_cb(lv_timer_t *t)
{
	if(lv_tabview_get_tab_act(tabview) != 0) return; // update only in audio tab
	uint32_t vu = audioGetRMS();
    setVuMeters(vu);
}