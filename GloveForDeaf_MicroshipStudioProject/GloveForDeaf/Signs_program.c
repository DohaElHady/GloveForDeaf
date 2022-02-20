#define F_CPU	16000000UL
#include		"Std_Types.h"
#include		"Bit_Math.h"

#include		"DIO_interface.h"
#include		"ADC_interface.h"
#include		"LCD_interface.h"
#include		"FlexSensor_interface.h"
#include		"ArabicLettersHex.h"
#include		"Signs_interface.h"

#include <util/delay.h>
u8      Signs_u8CheckSign()
{
	u8 u8Local_tempSign=10;
	if(
		Flex0_u8CheckBending() &&
		!Flex1_u8CheckBending() &&
		Flex2_u8CheckBending() &&
		Flex3_u8CheckBending() &&
		Flex4_u8CheckBending() 		)
	{
		u8Local_tempSign= YOU_SIGN;
	}
	else if(
		Flex0_u8CheckBending() &&
		Flex1_u8CheckBending() &&
		Flex2_u8CheckBending() &&
		Flex3_u8CheckBending() &&
		Flex4_u8CheckBending() 		)
	{
		u8Local_tempSign= WATCH_YOU_SIGN;
	}
	else if(
		!Flex0_u8CheckBending() &&
		!Flex1_u8CheckBending() &&
		!Flex2_u8CheckBending() &&
		Flex3_u8CheckBending() &&
		!Flex4_u8CheckBending() 		)
	{
		u8Local_tempSign= REALLY_LOVE_YOU_SIGN;
	}
	else if(
		!Flex0_u8CheckBending() &&
		!Flex1_u8CheckBending() &&
		Flex2_u8CheckBending() &&
		Flex3_u8CheckBending() &&
		!Flex4_u8CheckBending() 		)
	{
		u8Local_tempSign= LOVE_YOU_SIGN ;
	}
	else if(
		Flex0_u8CheckBending() &&
		!Flex1_u8CheckBending() &&
		Flex2_u8CheckBending() &&
		Flex3_u8CheckBending() &&
		!Flex4_u8CheckBending() 		)
	{
		u8Local_tempSign= AWSOME_SIGN;
	}
	else if(
		!Flex0_u8CheckBending() &&
		!Flex1_u8CheckBending() &&
		!Flex2_u8CheckBending() &&
		!Flex3_u8CheckBending() &&
		!Flex4_u8CheckBending() 		)
	{
		u8Local_tempSign= WISH_YOU_GOOD_LIFE_SIGN;
	}
	else if(
		!Flex0_u8CheckBending() &&
		Flex1_u8CheckBending() &&
		Flex2_u8CheckBending() &&
		Flex3_u8CheckBending() &&
		Flex4_u8CheckBending() 		)
	{
		u8Local_tempSign= GOOD_JOB_SIGN;
	}
	else if(
		!Flex0_u8CheckBending() &&
		!Flex1_u8CheckBending() &&
		Flex2_u8CheckBending() &&
		Flex3_u8CheckBending() &&
		Flex4_u8CheckBending() 		)
	{
		u8Local_tempSign= SEE_YOU_SIGN;
	}
	return u8Local_tempSign;
}
void    Signs_voidTranslateSign(u8 Sign)
{
	switch (Sign) {
		case YOU_SIGN:
					Signs_voidPrint_YOU_SIGN();
					break;
		case WATCH_YOU_SIGN:
					Signs_voidPrint_WATCH_YOU_SIGN();
					break;
		case REALLY_LOVE_YOU_SIGN:
					Signs_voidPrint_REALLY_LOVE_YOU_SIGN();
					break;
		case LOVE_YOU_SIGN:
					Signs_voidPrint_LOVE_YOU_SIGN();
					break;
		case AWSOME_SIGN:
					Signs_voidPrint_AWSOME_SIGN();
					break;
		case WISH_YOU_GOOD_LIFE_SIGN:
					Signs_voidPrint_WISH_YOU_GOOD_LIFE_SIGN();
					break;
		case GOOD_JOB_SIGN:
					Signs_voidPrint_GOOD_JOB_SIGN();
					break;
		case SEE_YOU_SIGN:
					Signs_voidPrint_SEE_YOU_SIGN();
					break;
	}
}


void    Signs_voidPrint_YOU_SIGN()
{
	u8 A_num=LCD_u8AddCustomChar(A_customChar);
	u8 N_num=LCD_u8AddCustomChar(N_customChar);
	u8 T_end_num=LCD_u8AddCustomChar(T_end_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,9);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,8);
	LCD_voidWriteChar4bit(N_num);
	LCD_voidGoToXY(0,7);
	LCD_voidWriteChar4bit(T_end_num);
}
void    Signs_voidPrint_WATCH_YOU_SIGN()
{
	u8 A_num=LCD_u8AddCustomChar(A_customChar);
	u8 N_num=LCD_u8AddCustomChar(N_customChar);
	u8 A_end_num=LCD_u8AddCustomChar(A_end_customChar);
	u8 R_num=LCD_u8AddCustomChar(R_customChar);
	u8 Q_num=LCD_u8AddCustomChar(Q_customChar);
	u8 B_num=LCD_u8AddCustomChar(B_customChar);
	u8 k_num=LCD_u8AddCustomChar(k_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,14);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,13);
	LCD_voidWriteChar4bit(N_num);
	LCD_voidGoToXY(0,12);
	LCD_voidWriteChar4bit(A_end_num);
	LCD_voidGoToXY(0,9);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,8);
	LCD_voidWriteChar4bit(R_num);
	LCD_voidGoToXY(0,7);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,6);
	LCD_voidWriteChar4bit(Q_num);
	LCD_voidGoToXY(0,5);
	LCD_voidWriteChar4bit(B_num);
	LCD_voidGoToXY(0,4);
	LCD_voidWriteChar4bit(k_num);
}

void    Signs_voidPrint_REALLY_LOVE_YOU_SIGN()
{
	u8 H_7_num=LCD_u8AddCustomChar(H_7_customChar);
	u8 Q_num=LCD_u8AddCustomChar(Q_customChar);
	u8 A_end_num=LCD_u8AddCustomChar(A_end_customChar);
	u8 A_num=LCD_u8AddCustomChar(A_customChar);
	u8 B_num=LCD_u8AddCustomChar(B_customChar);
	u8 k_num=LCD_u8AddCustomChar(k_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,12);
	LCD_voidWriteChar4bit(H_7_num);
	LCD_voidGoToXY(0,11);
	LCD_voidWriteChar4bit(Q_num);
	LCD_voidGoToXY(0,10);
	LCD_voidWriteChar4bit(A_end_num);
	LCD_voidGoToXY(0,6);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,5);
	LCD_voidWriteChar4bit(H_7_num);
	LCD_voidGoToXY(0,4);
	LCD_voidWriteChar4bit(B_num);
	LCD_voidGoToXY(0,3);
	LCD_voidWriteChar4bit(k_num);
}
void    Signs_voidPrint_LOVE_YOU_SIGN()
{
	u8 A_num=LCD_u8AddCustomChar(A_customChar);
	u8 H_7_num=LCD_u8AddCustomChar(H_7_customChar);
	u8 B_num=LCD_u8AddCustomChar(B_customChar);
	u8 k_num=LCD_u8AddCustomChar(k_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,9);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,8);
	LCD_voidWriteChar4bit(H_7_num);
	LCD_voidGoToXY(0,7);
	LCD_voidWriteChar4bit(B_num);
	LCD_voidGoToXY(0,6);
	LCD_voidWriteChar4bit(k_num);
}
void    Signs_voidPrint_AWSOME_SIGN()
{
	u8 H1_num=LCD_u8AddCustomChar(H1_customChar);
	u8 H2_num=LCD_u8AddCustomChar(H2_customChar);
	u8 Z_num=LCD_u8AddCustomChar(Z_customChar);
	u8 A_num=LCD_u8AddCustomChar(A_customChar);
	u8 R_num=LCD_u8AddCustomChar(R_customChar);
	u8 Y_num=LCD_u8AddCustomChar(Y_customChar);
	u8 B_end_num=LCD_u8AddCustomChar(B_end_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,14);
	LCD_voidWriteChar4bit(H1_num);
	LCD_voidGoToXY(0,13);
	LCD_voidWriteChar4bit(H2_num);
	LCD_voidGoToXY(0,12);
	LCD_voidWriteChar4bit(Z_num);
	LCD_voidGoToXY(0,11);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,9);
	LCD_voidWriteChar4bit(R_num);
	LCD_voidGoToXY(0,8);
	LCD_voidWriteChar4bit(H1_num);
	LCD_voidGoToXY(0,7);
	LCD_voidWriteChar4bit(H2_num);
	LCD_voidGoToXY(0,6);
	LCD_voidWriteChar4bit(Y_num);
	LCD_voidGoToXY(0,5);
	LCD_voidWriteChar4bit(B_end_num);
}
void    Signs_voidPrint_WISH_YOU_GOOD_LIFE_SIGN()
{
	u8 A_num=LCD_u8AddCustomChar(A_customChar);
	u8 T_num=LCD_u8AddCustomChar(T_customChar);
	u8 M_num=LCD_u8AddCustomChar(M_customChar);
	u8 N_num=LCD_u8AddCustomChar(N_customChar);
	u8 Y_end_num=LCD_u8AddCustomChar(Y_end_customChar);
	u8 L_num=LCD_u8AddCustomChar(L_customChar);
	u8 K_num=LCD_u8AddCustomChar(k_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,14);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,13);
	LCD_voidWriteChar4bit(T_num);
	LCD_voidGoToXY(0,12);
	LCD_voidWriteChar4bit(M_num);
	LCD_voidGoToXY(0,11);
	LCD_voidWriteChar4bit(N_num);
	LCD_voidGoToXY(0,10);
	LCD_voidWriteChar4bit(Y_end_num);
	LCD_voidGoToXY(0,8);
	LCD_voidWriteChar4bit(L_num);
	LCD_voidGoToXY(0,7);
	LCD_voidWriteChar4bit(K_num);
	_delay_ms(1000);
	u8 H_7_num=LCD_u8AddCustomChar(H_7_customChar);
	u8 Y_num=LCD_u8AddCustomChar(Y_customChar);
	u8 A_end_num=LCD_u8AddCustomChar(A_end_customChar);
	u8 H_end_num=LCD_u8AddCustomChar(H_end_customChar);
	u8 S1_num=LCD_u8AddCustomChar(S1_customChar);
	u8 S2_num=LCD_u8AddCustomChar(S2_customChar);
	u8 A_3_num=LCD_u8AddCustomChar(A_3_customChar);
	u8 D_num=LCD_u8AddCustomChar(D_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,13);
	LCD_voidWriteChar4bit(H_7_num);
	LCD_voidGoToXY(0,12);
	LCD_voidWriteChar4bit(Y_num);
	LCD_voidGoToXY(0,11);
	LCD_voidWriteChar4bit(A_end_num);
	LCD_voidGoToXY(0,10);
	LCD_voidWriteChar4bit(H_end_num);
	LCD_voidGoToXY(0,8);
	LCD_voidWriteChar4bit(S1_num);
	LCD_voidGoToXY(0,7);
	LCD_voidWriteChar4bit(S2_num);
	LCD_voidGoToXY(0,6);
	LCD_voidWriteChar4bit(A_3_num);
	LCD_voidGoToXY(0,5);
	LCD_voidWriteChar4bit(Y_num);
	LCD_voidGoToXY(0,4);
	LCD_voidWriteChar4bit(D_num);
	LCD_voidGoToXY(0,3);
	LCD_voidWriteChar4bit(H_end_num);
}
void    Signs_voidPrint_GOOD_JOB_SIGN()
{
	u8 A_3_num=LCD_u8AddCustomChar(A_3_customChar);
	u8 M_num=LCD_u8AddCustomChar(M_customChar);
	u8 L_num=LCD_u8AddCustomChar(L_customChar);
	u8 G_num=LCD_u8AddCustomChar(G_customChar);
	u8 Y_num=LCD_u8AddCustomChar(Y_customChar);
	u8 D_num=LCD_u8AddCustomChar(D_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,11);
	LCD_voidWriteChar4bit(A_3_num);
	LCD_voidGoToXY(0,10);
	LCD_voidWriteChar4bit(M_num);
	LCD_voidGoToXY(0,9);
	LCD_voidWriteChar4bit(L_num);
	LCD_voidGoToXY(0,7);
	LCD_voidWriteChar4bit(G_num);
	LCD_voidGoToXY(0,6);
	LCD_voidWriteChar4bit(Y_num);
	LCD_voidGoToXY(0,5);
	LCD_voidWriteChar4bit(D_num);
}
void    Signs_voidPrint_SEE_YOU_SIGN()
{
	u8 A_num=LCD_u8AddCustomChar(A_customChar);
	u8 R_num=LCD_u8AddCustomChar(R_customChar);
	u8 K_num=LCD_u8AddCustomChar(k_customChar);
	u8 LA_num=LCD_u8AddCustomChar(LA_customChar);
	u8 H_7_num=LCD_u8AddCustomChar(H_7_customChar);
	u8 Q_num=LCD_u8AddCustomChar(Q_customChar);
	u8 A_end_num=LCD_u8AddCustomChar(A_end_customChar);
	LCD_voidLCDClear();
	LCD_voidGoToXY(0,12);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,11);
	LCD_voidWriteChar4bit(R_num);
	LCD_voidGoToXY(0,10);
	LCD_voidWriteChar4bit(A_num);
	LCD_voidGoToXY(0,9);
	LCD_voidWriteChar4bit(K_num);
	LCD_voidGoToXY(0,6);
	LCD_voidWriteChar4bit(LA_num);
	LCD_voidGoToXY(0,5);
	LCD_voidWriteChar4bit(H_7_num);
	LCD_voidGoToXY(0,4);
	LCD_voidWriteChar4bit(Q_num);
	LCD_voidGoToXY(0,3);
	LCD_voidWriteChar4bit(A_end_num);
}
