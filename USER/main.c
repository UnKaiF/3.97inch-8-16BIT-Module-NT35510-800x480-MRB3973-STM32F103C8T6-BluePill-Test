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
	SystemInit();//��ʼ��RCC ����ϵͳ��ƵΪ72MHZ
	delay_init();	     //��ʱ��ʼ��
	LCD_Init();	   //Һ������ʼ��
  //ѭ������
	while(1)
	{
		
		main_test(); 		//����������
		
		Test_Read();     //��ID����ɫֵ����
		
		Test_Color();  		//��ˢ��������
		
		Test_FillRec();		//GUI���λ�ͼ����
		
		Test_Circle(); 		//GUI��Բ����
		
		Test_Triangle();    //GUI�����λ�ͼ����
		
		English_Font_test();//Ӣ������ʾ������
		
		
		Chinese_Font_test();//��������ʾ������
		
		
		Pic_test();			//ͼƬ��ʾʾ������
		
		
		Rotate_Test();   //��ת��ʾ����
		
		
		
		Touch_Test();		//��������д����		
	}
}

