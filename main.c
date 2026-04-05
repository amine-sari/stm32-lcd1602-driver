#include <stm32f10x.h>
#include "lcd.h"
#include "delay.h"

void init_all();

int main(){
	init_all();
	
	LCD_Init() ;
	
	LCD_Clear();
	
	LCD_String_xy(0,0,"hello world");
	
	
	while(1){
		//GPIOA->ODR^= 0xff;
		//GPIOC->ODR^= 0xe000;
		LCD_Clear();
		
		LCD_String_xy(0,0,"hello abdo");
		
		delay_ms(1000);
		
		LCD_Clear();
		
		LCD_String_xy(0,0,"hello sido");
		
		delay_ms(1000);
		
		LCD_String_xy(0,0,"hello brahim");
		
		delay_ms(1000);
		
	}


}


void init_all(){
    RCC->APB2ENR |= 0b10100; // 0b 1 0100   gpio a and c ;)

    //systick config for 1microsecond
    SysTick->CTRL |= (1<<2) ;
    SysTick->LOAD  = 71 ;
    SysTick->CTRL |= 1;
	
		//gpios
		GPIOC->CRH&= ~(0xFFFFFFFF);
    GPIOC->CRH |= 0x11100000;
		GPIOA->CRL &= ~(0xFFFFFFFF);
    GPIOA->CRL |= 0x11111111;
		



}