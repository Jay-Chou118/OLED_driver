# OLED_driver
This time, a six-pin OLED was used

Use STM32 to control the basic configuration of the OLED display

Pin definitions in programs can be modified to be compatible with others

/*

	OLED0.96                  					STM32
	
	GND        			<----------->			GND
	
	VCC        			<----------->			3.3V

	SCL             		<----------->			PE3
	
	SDA        			<----------->			PE4
	
	DC(Data/Command)	        <----------->			PE0
	
	RST				<----------->			PE2
	
*/



This program is just a framework of a drive OLED, you can continue to add functions and operations to it  
