![image](../../../../images/microchip.jpg) 

## dsPIC33C FreeRTOS Demo

## Summary

This folder contains the freeRTOS demo for Microchip's dsPIC33CH128MP508 device.
For this demo, MPLAB X and MPLAB XC-DSC are the preferred IDE and compiler respectively with which to build the FreeRTOS demos. 
The board to be used to run this demo is Explorer 16/32 (Explore 16/32 is backward compatible with Explorer 16).
The version of freeRTOS used in this demo is : freeRTOS v10.5

## Related Documentation

+ The FreeRTOS/Source directory contains the FreeRTOS source code, and contains
  its own readme file.

+ See http://www.freertos.org/a00017.html for full details of the directory 
  structure and information on locating the files you require.
  
+ See http://www.freertos.org/portpic24_dspic.html#DemoApp for full details above the demos.
  
The easiest way to use FreeRTOS is to start with one of the pre-configured demo 
application projects (found in the pic24-dspic33-freertos-demo/Demo directory).  That way you will
have the correct FreeRTOS source files included, and the correct include paths
configured.  Once a demo application is building and executing you can remove
the demo application file, and start to add in your own application source
files.

See also -
https://freertos.org/Documentation/01-FreeRTOS-quick-start/01-Beginners-guide/02-Quick-start-guide
https://www.freertos.org/Why-FreeRTOS/FAQs

## Software Used 

- MPLAB® X IDE v6.20 or newer (https://www.microchip.com/mplabx)
- MPLAB® XC-DSC v3.20 or newer (https://www.microchip.com/xcdsc)  
- Any of the serial terminal application. Example: Tera Term (https://ttssh2.osdn.jp/index.html.en)


## Hardware Used

- Explorer 16/32 Development Board (https://www.microchip.com/DM240001-2)
- dsPIC33CH128MP508 PIM (https://www.microchip.com/MA330040)

## Hardware Setup
- For UART communication task - short pins p87 and p88 on Jumper46 or Jumper47

