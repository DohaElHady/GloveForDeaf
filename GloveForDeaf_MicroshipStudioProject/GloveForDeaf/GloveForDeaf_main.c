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

	}
	return 0 ;
}
