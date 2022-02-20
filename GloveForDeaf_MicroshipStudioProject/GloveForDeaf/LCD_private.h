#ifndef		LCD_PRIVATE_H
#define		LCD_PRIVATE_H


/*		LCD Cursor & Display Shift CMD Data Line Values					*/
#define CURSOR_SH_LEFT_CMD		0x10
#define CURSOR_SH_RIGHT_CMD		0x14
#define DISPLAY_SH_LEFT_CMD		0x18
#define DISPLAY_SH_RIGHT_CMD	0x1C

/*		LCD Cursor Start Position CMD Data Line Values					*/
#define CURSOR_ROW0_COL0_CMD		0x80
#define CURSOR_ROW1_COL0_CMD		0xC0

#define LCD_CLEAR_CMD				0x01

/*		Addresses To start writing in DDRAM or CGRAM Data Line Values	*/
#define DDRAM_INIT_ADDRESS_CMD		0x80
#define CGRAM_INIT_ADDRESS_CMD		0x40

#define CGRAM_LAST_ADDRESS_CMD		(DDRAM_INIT_ADDRESS_CMD)

#endif
