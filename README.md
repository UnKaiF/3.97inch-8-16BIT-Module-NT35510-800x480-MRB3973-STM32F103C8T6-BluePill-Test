# This code allows you to quickly check the LCD module after purchase.
 > Code based on [www.lcdwiki.com](www.lcdwiki.com) sources.

  [LCD: 3.97inch 16BIT Module NT35510 SKU:MRB3973](http://www.lcdwiki.com/3.97inch_16BIT_Module_NT35510_SKU:MRB3973)
![lcd]()
 [BOARD: STM32F103C8T6 aka "Blue Pill"](http://www.vcc-gnd.com/)
![stm]()

Connections:

|LCD module|STM32 "BluePill"|
|:---------|:---------------|
|DB0~DB7   |PB0~PB7         |
|DB8~DB15  |PB8~PB15        |  
|CS        |PA3             |
|RS        |PA4             |
|RST|PA5|
|WR|PA6|
|RD|PA7|

|Module touchscreen controller|STM32 "BluePill"|
|:----------------------------|:---------------|
|PEN                          |PA8             |
|MISO                         |PA9             |
|MOSI                         |PA10            |
|T_CS                         |PA11            |
|CLK                          |PA12            |

|Miscalleneous                                  |STM32 \"BluePill\"|
|:----------------------------------------------|:---------------|
|LED                                            |PC13            |
|BUTTON [restart touchscreen sensor calibration]|PA0             |
