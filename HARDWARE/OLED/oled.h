/*
	OLED0.96                  							STM32
	GND        				<----------->					GND
	VCC        				<----------->					3.3V
	SCL             	<----------->					PE3
	SDA        				<----------->					PE4
	DC(Data/Command)	<----------->					PE0
	RST								<----------->					PE2
*/


#include "sys.h"


#ifndef __OLED_H_
#define __OLED_H_

#define OLED_SCLK_Clr()  PEout(3)=0  //SCL
#define OLED_SCLK_Set()  PEout(3)=1   //SCL

#define OLED_SDIN_Clr()  PEout(4)=0   //SDA
#define OLED_SDIN_Set()  PEout(4)=1   //SDA

#define OLED_RST_Clr() PEout(2)=0   //RST
#define OLED_RST_Set() PEout(2)=1   //RST

#define OLED_RS_Clr() PEout(0)=0    //DC
#define OLED_RS_Set() PEout(0)=1    //DC



#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据

//OLED控制用函数
void OLED_WR_Byte(u8 dat,u8 cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Refresh_Gram(void);		   				   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size,u8 mode);
void OLED_ShowNumber(u8 x,u8 y,u32 num,u8 len,u8 size);
void OLED_ShowString(u8 x,u8 y,const u8 *p);	



#endif
