"# 3.97inch-8-16BIT-Module-NT35510-800x480-MRB3973-STM32F103C8T6-BluePill-Test"

Allows you to quickly check the LCD module (http://www.lcdwiki.com/3.97inch_16BIT_Module_NT35510_SKU:MRB3973) after purchase.

Connections:

   LCD                STM32
       DB0~DB7                PB0~PB7   
       DB8~DB15               PB8~PB15  
       CS                     PA3
       RS                     PA4
       RST                    PA5
       WR                     PA6
       RD                     PA7

   LCD_TOUCH          STM32
       PEN                    PA8
       MISO                   PA9
       MOSI                   PA10
       T_CS                   PA11
       CLK                    PA12

MISC:
      LED					PC13	
	BUTTON0					PA0		 (restart touch sensor calibration)
