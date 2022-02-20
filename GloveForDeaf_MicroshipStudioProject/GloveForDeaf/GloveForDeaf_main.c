#define			F_CPU		16000000UL

#include		"Std_Types.h"
#include		"Bit_Math.h"
#include		<util/delay.h>
#include		"DIO_interface.h"
#include		"ADC_interface.h"
#include		"LCD_interface.h"
#include		"FlexSensor_interface.h"
#include		"Signs_interface.h"

int main(void)
{
	/*		Initializing ADC & LCD 			*/
	ADC_voidInit();
	ADC_voidEnable();
	LCD_voidInit4bit();
	LCD_voidGoToXY(0,0);
	/*	Seting ADC DIO Port to Input	*/
	DIO_voidSetPortDirection(PORTA,INPUT);

	u8 u8Local_ResultTemp = 10 ;

	while(1)
	{
		u8Local_ResultTemp=Signs_u8CheckSign();
		Signs_voidTranslateSign(u8Local_ResultTemp);
		while (u8Local_ResultTemp==Signs_u8CheckSign());

		/* Code for testing sensors values*/
		/*
		for (int i=0;i<8;i++)
		{

			ADC_voidSetChannel(i);
			u16Local_ResultTemp = ADC_u16ReadValue();
			u16Local_ResultTemp = (u16Local_ResultTemp*500UL/1024UL);
			LCD_voidWriteu8Num(i);
			LCD_voidWriteu8Num((u8)u16Local_ResultTemp);
			_delay_ms(200);
			LCD_voidLCDClear();
		}*/
	}
	return 0 ;
}
