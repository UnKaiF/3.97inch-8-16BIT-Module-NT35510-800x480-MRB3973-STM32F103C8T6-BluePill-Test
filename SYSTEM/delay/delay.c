#include "delay.h"

volatile uint32_t delay_countdown = 0;

void delay_init(void)
{
	SysTick_Config(SystemCoreClock / 1000);
}								    

void delay_ms(u32 nms)
{	 		  	  
	delay_countdown = nms;
	while (delay_countdown) {};
}   

void delay_us(u32 nus)
{	
	u32 i = nus*72;
	for(;i;i--) {};
}

void SysTick_Handler(void)
{
	if (delay_countdown)
		delay_countdown--;
}




































