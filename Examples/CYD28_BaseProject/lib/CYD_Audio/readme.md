# ESP32 I2S audio library  



### Audio library changes:
* audio processing (byte decode, volume, eq) done in blocks for more efficiency
* added soft start/stop for the internal DAC. The original method created clicks due to zero mismatch between standard i2s DAC accepting 2's compliment values and the internal 8bit DAC expecting uint8 values with zero scale at 128
* replaced computationally expensive double float operations with interger ones for volume scalling
* added stereo RMS detector 
* temporarily removed balance control  

### TODO:
* add EQ based on optimizued biquad filters
* add play from array in FLASH option (compatible with Bitluni's wave converter)
* 
