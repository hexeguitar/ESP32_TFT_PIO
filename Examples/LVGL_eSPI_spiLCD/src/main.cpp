#include <Arduino.h>

#include "SPI.h"

#include "ldr.h"
#include "rgbled.h"
#include "display.h"
#include "gui.h"

LDR ldr;
RGBLED led;

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
}

void loop()
{
    lv_task_handler();
    delay(1);
}