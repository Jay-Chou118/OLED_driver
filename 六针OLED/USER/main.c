#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "oled.h"
#include "timer.h"
 
/************************************************
 ALIENTEK��ӢSTM32������ʵ��4
 ���� ʵ��   
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/
extern u8 t;
//u8 OpenMV_Rx_BUF[5];

int main(void)
{		
	 
//	u16 len;	
//	u16 times=0;
//	u8 Res;
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart1_init(115200);	 //���ڳ�ʼ��Ϊ115200
	uart3_init(115200);
 	LED_Init();			     //LED�˿ڳ�ʼ��
//	KEY_Init();          //��ʼ���밴�����ӵ�Ӳ���ӿ�
	OLED_Init();
	TIM3_Int_Init(9999,7199);
//	printf("let's begin");
	while(1)
	{
			
			LED0=!LED0;
			delay_ms(200);
//		u8 test = 0;
		//OLED_ShowString(50,0,"*****");
    	OLED_Refresh_Gram();
			//OLED_ShowNumber(0,20,OpenMV_Rx_BUF[0],3,12);
		
			//OLED_ShowNumber(20,20,OpenMV_Rx_BUF[1],3,12);
			OLED_ShowNumber(0,20,OpenMV_Rx_BUF[2],3,12);
			OLED_ShowNumber(20,20,OpenMV_Rx_BUF[4],3,12);
			OLED_ShowNumber(40,20,OpenMV_Rx_BUF[6],3,12);
			OLED_ShowNumber(60,20,OpenMV_Rx_BUF[8],3,12);
			
//		OLED_ShowChar(0,0,'t',16,1);
//		OLED_ShowChar(10,0,'=',16,1);
//	for(;test <8 ;test ++)
//		{
//			OLED_Refresh_Gram();
//			OLED_ShowNumber(0,0,test,2,16);
//			delay_ms(1000);
//			test +=1;
//			break;
//		}
		
		//OLED_ShowString(0,15,"*****");
//	  OLED_ShowString(35,30,"*****");
//		OLED_ShowString(15,45,"*****");
//		OLED_ShowNumber(0,0,14,2,16);
//		//OLED_Refresh_Gram();
//		delay_ms(50);

	} 
}


 

