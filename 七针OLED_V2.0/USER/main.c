#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include  "oled.h"

#include "bmp.h"



int main( void )
{
	NVIC_PriorityGroupConfig( NVIC_PriorityGroup_2 );       /* 设置NVIC中断分组2:2位抢占优先级，2位响应优先级 */
	uart_init( 115200 ); 	/* 串口初始化为9600 */
	uart3_init( 115200 );
	delay_init();       	/* 延时函数初始化 */
	LED_Init();
	OLED_Init();
	

	while ( 1 )
	{
			OLED_DrawBMP(0, 0, 127, 7, gImage_bless1);
			delay_ms(2000);
			//OLED_Refresh_Gram();
	//	OLED_ShowNumber(20,20,1,2,16);
			LED0=!LED0;
			delay_ms(200);
//		u8 test = 0;
		//OLED_ShowString(50,0,"*****");

			//OLED_ShowNumber(0,20,OpenMV_Rx_BUF[0],3,12);
		
			//OLED_ShowNumber(20,20,OpenMV_Rx_BUF[1],3,12);
		while(1){
			OLED_Refresh_Gram();
			OLED_ShowNumber(20,0,OpenMV_Rx_BUF[2],3,12);
			OLED_ShowString(0,0,"x:");
			OLED_ShowNumber(20,10,OpenMV_Rx_BUF[4],3,12);
			OLED_ShowString(0,10,"y:");
			OLED_ShowNumber(20,20,OpenMV_Rx_BUF[6],3,12);
			OLED_ShowString(0,20,"w:");
			OLED_ShowNumber(20,30,OpenMV_Rx_BUF[8],3,12);
			OLED_ShowString(0,30,"h:");

			OLED_ShowString(50,50,"ENU");
		}
//			USART_SendData(USART1,ch);
//			delay_ms(1000);
	}
}


