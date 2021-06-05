#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "oled.h"
#include "timer.h"
 
/************************************************
 ALIENTEK精英STM32开发板实验4
 串口 实验   
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/
 int main(void)
 {		
	u8 t;  
//	u16 len;	
//	u16 times=0;
//	u8 Res;
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart1_init(115200);	 //串口初始化为115200
	//uart3_init(9600);
 	LED_Init();			     //LED端口初始化
	KEY_Init();          //初始化与按键连接的硬件接口
	OLED_Init();
	while(1)
	{	
		u8 test = 0;
		//OLED_ShowString(50,0,"*****");
//		OLED_Refresh_Gram();
//		OLED_ShowChar(0,0,'t',16,1);
//		OLED_ShowChar(10,0,'=',16,1);
	for(;test <8 ;test ++)
		{
			OLED_Refresh_Gram();
			OLED_ShowNumber(0,0,test,2,16);
			delay_ms(1000);
//			test +=1;
//			break;
		}
		
		//OLED_ShowString(0,15,"*****");
//	  OLED_ShowString(35,30,"*****");
//		OLED_ShowString(15,45,"*****");
//		OLED_ShowNumber(0,0,14,2,16);
		//OLED_Refresh_Gram();
		delay_ms(50);

	} 
}


 

