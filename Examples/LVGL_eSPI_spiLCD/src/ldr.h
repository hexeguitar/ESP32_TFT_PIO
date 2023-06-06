#ifndef _LDR_INC_H
#define _LDR_INC_H

#include <Arduino.h>

#define LDR_PIN                 34      // gpio where the LDR is connected to
#define LDR_FEEDFWD_THRES       10      // feedfwd threshold for the filter
#define LDR_HYST_DEFAULT        20      // hysteresis value for the bright/dark detection
#define LDR_THRES_DEFAULT       300     // default threshold 

/**
 * @brief ESP32-2432S028 Display moodule LDR driver
 * Implemented feeatures:  
 *  - ADC filter 
 *  - threshold detector with hysteresis
 * 
 *  Recommended hardware modification:
 *  1. solder a 100k 0603 resistor in parallel with R15 (1M - ontop of it)
 *  2. solder a 100nF 0603 capacitor in parallel with R19 (1M - ontop of it)             
 * 
 */
class LDR
{
public:
    LDR() {};
    ~LDR(){};
// ----------------------------------------------------------------------------  
    void begin()
    {
        pinMode(LDR_PIN, INPUT);
        dark = isDark();
    }
// ----------------------------------------------------------------------------
    int32_t get()
    {
        return filter(analogRead(LDR_PIN));           
    }
// ----------------------------------------------------------------------------
    bool isDark()
    {   
        int32_t v = get();
        if (v > thres + hyst)         dark = true;
        else if (v < thres - hyst)    dark = false;
        return dark;
    }
// ----------------------------------------------------------------------------    
    void thresSet(int32_t th)
    {
        thres = constrain(th, 0, 1023);  
    }
// ----------------------------------------------------------------------------    
    int32_t thresGet(void)
    {
        return thres;  
    }
// ----------------------------------------------------------------------------    
    void hystSet(int32_t h)
    {
        hyst = constrain(h, 0, thres) >> 1;       // store already halved value
    }

private:
    bool dark;
    int32_t thres = LDR_THRES_DEFAULT;                              // bright/dark threshold
    int16_t hyst = LDR_HYST_DEFAULT;                                // hystereis for the bright/dark detect.
    int32_t fltVal;                                          // usd for iir filter
    const int32_t feedfwd = (int32_t)LDR_FEEDFWD_THRES * 256;
    const uint8_t filter_coeff_shift =  2 ;

    int32_t filter(int32_t ADCSample)
    {        
        ADCSample <<= 8;           
        if ((ADCSample > (fltVal + feedfwd)) || (ADCSample < (fltVal - feedfwd)))
        {
            fltVal = ADCSample;
        }
        else
        {
            fltVal = fltVal + ((ADCSample - fltVal) >> filter_coeff_shift);
        }      
        return ((fltVal >> 8) + ((fltVal & 0x00000080) >> (8 - 1)));
    }
};

extern LDR ldr;

#endif // _LDR_INC_H
