#include "delay.h"

void delay_ms(long time){
    time*=1000;

    SysTick->VAL = 0;
    
    for (int i = 0; i < time ; i++)
    {
        while(!( (SysTick->CTRL & (1<<16)) == (1<<16) ));
    }

}

void delay_us(long time){
   
    SysTick->VAL = 0;
    
    for (int i = 0; i < time ; i++)
    {
        while(!( (SysTick->CTRL & (1<<16)) == (1<<16) ));
    }
}