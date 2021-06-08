#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include  "oled.h"

int main( void )
{
	NVIC_PriorityGroupConfig( NVIC_PriorityGroup_2 );       /* 设置NVIC中断分组2:2位抢占优先级，2位响应优先级 */
	uart_init( 115200 );                                      /* 串口初始化为9600 */
	delay_init();                                           /* 延时函数初始化 */
	LED_Init();
	OLED_Init();
	

	while ( 1 )
	{
		LED0 = 0;
		delay_ms( 200 );
		LED0 = 1;
		delay_ms( 200 );
		
		OLED_Refresh_Gram();
	//	OLED_ShowNumber(20,20,1,2,16);
		OLED_ShowString(20,20,"fine");
	}
}


