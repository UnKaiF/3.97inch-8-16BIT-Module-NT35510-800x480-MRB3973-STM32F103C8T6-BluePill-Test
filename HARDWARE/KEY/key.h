#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
	 
#define KEY0_PRES	1		//KEY0  

void ButtonInit(void);//IO初始化
u8 ButtonScan(void);  	//按键扫描函数					    
#endif
