#ifndef _RGBLED_H
#define _RGBLED_H

#include <Arduino.h>

#define CYD_LED_BLUE    17
#define CYD_LED_RED     4
#define CYD_LED_GREEN   16
#define CYD_LED_ON      LOW
#define CYD_LED_OFF     HIGH

class RGBLED
{
public:
    RGBLED(){};
    ~RGBLED(){};
    void begin(void)
    {
        pinMode(CYD_LED_RED, OUTPUT);
        pinMode(CYD_LED_GREEN, OUTPUT);
        pinMode(CYD_LED_BLUE, OUTPUT);
        digitalWrite(CYD_LED_RED, CYD_LED_OFF);
        digitalWrite(CYD_LED_GREEN, CYD_LED_OFF);
        digitalWrite(CYD_LED_BLUE, CYD_LED_OFF);
    }
    void red(bool r) { digitalWrite(CYD_LED_RED, r ? CYD_LED_ON : CYD_LED_OFF); }
    void red()
    {
        digitalWrite(CYD_LED_RED, CYD_LED_ON);
        digitalWrite(CYD_LED_GREEN, CYD_LED_OFF);
        digitalWrite(CYD_LED_BLUE, CYD_LED_OFF);       
    }       
    void green(bool g) { digitalWrite(CYD_LED_GREEN, g ? CYD_LED_ON : CYD_LED_OFF); }
    void green()
    {
        digitalWrite(CYD_LED_RED, CYD_LED_OFF);
        digitalWrite(CYD_LED_GREEN, CYD_LED_ON);
        digitalWrite(CYD_LED_BLUE, CYD_LED_OFF);       
    }  
    void blue(bool b) { digitalWrite(CYD_LED_BLUE, b ? CYD_LED_ON : CYD_LED_OFF); }
    void blue()
    {
        digitalWrite(CYD_LED_RED, CYD_LED_OFF);
        digitalWrite(CYD_LED_GREEN, CYD_LED_OFF);
        digitalWrite(CYD_LED_BLUE, CYD_LED_ON);       
    }  
private:

};

extern RGBLED led;

#endif // _RGBLED_H
