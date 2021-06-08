#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include  "oled.h"

int main( void )
{
	NVIC_PriorityGroupConfig( NVIC_PriorityGroup_2 );       /* ����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ� */
	uart_init( 115200 );                                      /* ���ڳ�ʼ��Ϊ9600 */
	delay_init();                                           /* ��ʱ������ʼ�� */
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


