#ifndef LCD_H
#define LCD_H

#include <stm32f10x.h>


#define LCD_Data_Port  GPIOA->ODR       /* Define LCD data port */
#define LCD_Command_Port GPIOC->ODR    /* Define LCD data port */
#define RS (15)                    /* Define Register Select (data/command reg.) pin */
#define RW (14)                    /* Define Read/Write signal pin */
#define EN (13)                    /* Define Enable signal pin */


void LCD_Command(unsigned char cmnd);
void LCD_Char(unsigned char char_data);
void LCD_Init(void);
void LCD_String(char *str);
void LCD_String_xy(char row, char pos, char *str);
void LCD_Clear(void);

#endif
