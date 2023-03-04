//===3.97inch_8&16BIT_Module_NT35510_800x480_MRB3973 STM32F103C8T6 BluePill Test====//
//     LCD                STM32
//       DB0~DB7                PB0~PB7   
//       DB8~DB15               PB8~PB15  
//       CS                     PA3
//       RS                     PA4
//       RST                    PA5
//       WR                     PA6
//       RD                     PA7
//==================================================================================//
//	   LCD_TOUCH                STM32
//       PEN                    PA8
//       MISO                   PA9
//       MOSI                   PA10
//       T_CS                   PA11
//       CLK                    PA12
//==================================================================================//
//MISC:
//       LED					PC13	
//		BUTTON0					PA0		 (restart touch sensor calibration)
 
#include "delay.h"
#include "sys.h"
#include "lcd.h"
#include "touch.h"
#include "gui.h"
#include "test.h"

int main(void)
{	
	SystemInit();//初始化RCC 设置系统主频为72MHZ
	delay_init();	     //延时初始化
	LCD_Init();	   //液晶屏初始化
  //循环测试
	while(1)
	{
		
		main_test(); 		//测试主界面
		
		Test_Read();     //读ID和颜色值测试
		
		Test_Color();  		//简单刷屏填充测试
		
		Test_FillRec();		//GUI矩形绘图测试
		
		Test_Circle(); 		//GUI画圆测试
		
		Test_Triangle();    //GUI三角形绘图测试
		
		English_Font_test();//英文字体示例测试
		
		
		Chinese_Font_test();//中文字体示例测试
		
		
		Pic_test();			//图片显示示例测试
		
		
		Rotate_Test();   //旋转显示测试
		
		
		
		Touch_Test();		//触摸屏手写测试		
	}
}

