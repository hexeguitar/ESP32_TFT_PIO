#ifndef _CYD28_RGBLED_H
#define _CYD28_RGBLED_H

#include <Arduino.h>
// if the PSRAM mod is perfromed it takes the gpio16 and 17
// add -DBOARD_HAS_PSRAM to build_flags in platformio.ini
#ifndef BOARD_HAS_PSRAM
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
   // --------------------------------------- 
	void begin(void)
    {
        pinMode(CYD_LED_RED, OUTPUT);
        digitalWrite(CYD_LED_RED, CYD_LED_OFF);
#ifndef BOARD_HAS_PSRAM
        pinMode(CYD_LED_GREEN, OUTPUT);
        pinMode(CYD_LED_BLUE, OUTPUT);
        digitalWrite(CYD_LED_GREEN, CYD_LED_OFF);
        digitalWrite(CYD_LED_BLUE, CYD_LED_OFF);
#endif        
    }
	// ---------------------------------------   
	void red(bool r) { digitalWrite(CYD_LED_RED, r ? CYD_LED_ON : CYD_LED_OFF); }
 	// ---------------------------------------     
	void red()
    {
        digitalWrite(CYD_LED_RED, CYD_LED_ON);
#ifndef BOARD_HAS_PSRAM        
        digitalWrite(CYD_LED_GREEN, CYD_LED_OFF);
        digitalWrite(CYD_LED_BLUE, CYD_LED_OFF); 
#endif              
    } 
	// --------------------------------------- 
    void redToggle()
    {
        digitalWrite(CYD_LED_RED, digitalRead(CYD_LED_RED) ? CYD_LED_ON : CYD_LED_OFF);            
    }   
    // ---------------------------------------
    void green(bool g) 
	{ 
#ifndef BOARD_HAS_PSRAM  
		digitalWrite(CYD_LED_GREEN, g ? CYD_LED_ON : CYD_LED_OFF); 
#else 
		return;
#endif
	}
	// ---------------------------------------
    void green()
    {
#ifndef BOARD_HAS_PSRAM         
        digitalWrite(CYD_LED_RED, CYD_LED_OFF);
        digitalWrite(CYD_LED_GREEN, CYD_LED_ON);
        digitalWrite(CYD_LED_BLUE, CYD_LED_OFF);       
#else 
		return;
#endif       
    } 
	// ---------------------------------------
    void greenToggle()
    {
#ifndef BOARD_HAS_PSRAM   		
        digitalWrite(CYD_LED_GREEN, digitalRead(CYD_LED_GREEN) ? CYD_LED_ON : CYD_LED_OFF); 
#else 
		return;
#endif 		           
    }  
	// ---------------------------------------
    void blue(bool b) 
	{
#ifndef BOARD_HAS_PSRAM    		
		digitalWrite(CYD_LED_BLUE, b ? CYD_LED_ON : CYD_LED_OFF); 
#else 
		return;
#endif 		
	}
	// ---------------------------------------
    void blue()
    {
#ifndef BOARD_HAS_PSRAM 		
        digitalWrite(CYD_LED_RED, CYD_LED_OFF);
        digitalWrite(CYD_LED_GREEN, CYD_LED_OFF);
        digitalWrite(CYD_LED_BLUE, CYD_LED_ON);  
#else 
		return;
#endif 	     
    }  
	// ---------------------------------------
    void blueToggle()
    {
#ifndef BOARD_HAS_PSRAM 			
        digitalWrite(CYD_LED_BLUE, digitalRead(CYD_LED_BLUE) ? CYD_LED_ON : CYD_LED_OFF);  
#else 
		return;
#endif 			          
    }  
    // ---------------------------------------
private:

};

extern RGBLED led;

#endif // _RGBLED_H
