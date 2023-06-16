#include <Arduino.h>
#include "SPI.h"
#include "ldr.h"
#include "rgbled.h"
#include "display.h"
#include "gui.h"
#include "Audio.h"
#include "WiFiMulti.h"

LDR ldr;
RGBLED led;
Audio audio(true, I2S_DAC_CHANNEL_LEFT_EN); // enable audio on GPIO26
WiFiMulti wifiMulti;

String ssid =     "xxxx";
String password = "xxxx";

const char UCLS[] = {"\x1b"
                     "[2J"};
const char UHOME[] = {"\x1b"
                      "[;H"};

void setup()
{
    Serial.begin(115200);
    led.begin();
    analogReadResolution(10);
    ldr.begin();
    ldr.thresSet(300);
    ldr.hystSet(100);
    display_init();
    gui_init();

    wifiMulti.addAP(ssid.c_str(), password.c_str());
    wifiMulti.run();
    audio.setVolume(255);       // with audio gain mod the volume can be set to max

    esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
    Serial.print(UCLS);
    Serial.print(UHOME);
    Serial.println("Hardware info");
    Serial.printf("%d cores Wifi %s%s\n", chip_info.cores, (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
    (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");
    Serial.printf("Silicon revision: %d\n", chip_info.revision);
    Serial.printf("%dMB %s flash\n", spi_flash_get_chip_size()/(1024*1024),
    (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embeded" : "external");
    Serial.printf("Total heap: %d\r\n", ESP.getHeapSize());
    Serial.printf("Free heap: %d\r\n", ESP.getFreeHeap());
    Serial.printf("Total PSRAM: %d\r\n", ESP.getPsramSize());
    Serial.printf("Free PSRAM: %d\r\n", ESP.getFreePsram());
    //get chip id
    String chipId = String((uint32_t)ESP.getEfuseMac(), HEX);
    chipId.toUpperCase();
    Serial.printf("Chip id: %s\n", chipId.c_str());

}

void loop()
{
    lv_task_handler();
    audio.loop();
    //delay(1);
}