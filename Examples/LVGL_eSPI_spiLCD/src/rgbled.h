#ifndef _RGBLED_H
#define _RGBLED_H

#include <Arduino.h>
// if the PSRAM mod is perfromed it takes the gpio16 and 17
#ifndef USE_PSRAM_MOD
    #define CYD_LED_BLUE    17
    #define CYD_LED_GREEN   16
#endif

#define CYD_LED_RED     4

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
        digitalWrite(CYD_LED_RED, CYD_LED_OFF);
#ifndef USE_PSRAM_MOD
        pinMode(CYD_LED_GREEN, OUTPUT);
        pinMode(CYD_LED_BLUE, OUTPUT);
        digitalWrite(CYD_LED_GREEN, CYD_LED_OFF);
        digitalWrite(CYD_LED_BLUE, CYD_LED_OFF);
#endif        
    }
    void red(bool r) { digitalWrite(CYD_LED_RED, r ? CYD_LED_ON : CYD_LED_OFF); }
    void red()
    {
        digitalWrite(CYD_LED_RED, CYD_LED_ON);
#ifndef USE_PSRAM_MOD        
        digitalWrite(CYD_LED_GREEN, CYD_LED_OFF);
        digitalWrite(CYD_LED_BLUE, CYD_LED_OFF); 
#endif              
    }  
#ifndef USE_PSRAM_MOD          
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
#endif     
private:

};

extern RGBLED led;

#endif // _RGBLED_H
