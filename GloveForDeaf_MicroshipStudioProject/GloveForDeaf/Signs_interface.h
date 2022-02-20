#ifndef		SIGNS_INTERFACE_H
#define		SIGNS_INTERFACE_H


#define   YOU_SIGN                  0
#define   WATCH_YOU_SIGN            1
#define   REALLY_LOVE_YOU_SIGN      2
#define   LOVE_YOU_SIGN             3
#define   AWSOME_SIGN               4
#define   WISH_YOU_GOOD_LIFE_SIGN   5
#define   GOOD_JOB_SIGN             6
#define   SEE_YOU_SIGN              7

u8      Signs_u8CheckSign();
void    Signs_voidTranslateSign(u8 Sign);

void    Signs_voidPrint_YOU_SIGN();
void    Signs_voidPrint_WATCH_YOU_SIGN();
void    Signs_voidPrint_REALLY_LOVE_YOU_SIGN();
void    Signs_voidPrint_LOVE_YOU_SIGN();
void    Signs_voidPrint_AWSOME_SIGN();
void    Signs_voidPrint_WISH_YOU_GOOD_LIFE_SIGN();
void    Signs_voidPrint_GOOD_JOB_SIGN();
void    Signs_voidPrint_SEE_YOU_SIGN();

#endif
