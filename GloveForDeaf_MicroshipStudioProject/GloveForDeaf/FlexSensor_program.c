#include		"Std_Types.h"
#include		"Bit_Math.h"

#include		"DIO_interface.h"
#include		"ADC_interface.h"

#include		"FlexSensor_private.h"
#include		"FlexSensor_interface.h"

u8			Flex0_u8CheckBending(void)
{
	u16 u16Local_ResultTemp = 0 ;
	ADC_voidSetChannel(FLEX0_CHANNEL);
	u16Local_ResultTemp = ADC_u16ReadValue();
	u16Local_ResultTemp = (u16Local_ResultTemp*500UL/1024UL);
	if(u16Local_ResultTemp<FLEX0_BENDING_VREF)
	{
		/* The Sensor is bended*/
		return 1;
	}
	else
	{
		return 0;
	}
}

u8			Flex1_u8CheckBending(void)
{
	u16 u16Local_ResultTemp = 0 ;
	ADC_voidSetChannel(FLEX1_CHANNEL);
	u16Local_ResultTemp = ADC_u16ReadValue();
	u16Local_ResultTemp = (u16Local_ResultTemp*500UL/1024UL);
	if(u16Local_ResultTemp<FLEX1_BENDING_VREF)
	{
		/* The Sensor is bended*/
		return 1;
	}
	else
	{
		return 0;
	}
}


u8			Flex2_u8CheckBending(void)
{
	u16 u16Local_ResultTemp = 0 ;
	ADC_voidSetChannel(FLEX2_CHANNEL);
	u16Local_ResultTemp = ADC_u16ReadValue();
	u16Local_ResultTemp = (u16Local_ResultTemp*500UL/1024UL);
	if(u16Local_ResultTemp<FLEX2_BENDING_VREF)
	{
		/* The Sensor is bended*/
		return 1;
	}
	else
	{
		return 0;
	}
}


u8			Flex3_u8CheckBending(void)
{
	u16 u16Local_ResultTemp = 0 ;
	ADC_voidSetChannel(FLEX3_CHANNEL);
	u16Local_ResultTemp = ADC_u16ReadValue();
	u16Local_ResultTemp = (u16Local_ResultTemp*500UL/1024UL);
	if(u16Local_ResultTemp<FLEX3_BENDING_VREF)
	{
		/* The Sensor is bended*/
		return 1;
	}
	else
	{
		return 0;
	}
}


u8			Flex4_u8CheckBending(void)
{
	u16 u16Local_ResultTemp = 0 ;
	ADC_voidSetChannel(FLEX4_CHANNEL);
	u16Local_ResultTemp = ADC_u16ReadValue();
	u16Local_ResultTemp = (u16Local_ResultTemp*500UL/1024UL);
	if(u16Local_ResultTemp<FLEX4_BENDING_VREF)
	{
		/* The Sensor is bended*/
		return 1;
	}
	else
	{
		return 0;
	}
}
