#ifndef __SYSTICK_H
#define __SYSTICK_H

#include "ee14lib.h"  

void SysTick_initialize(void);
void delay_ms(int delay);
int count();

#endif // __DELAY_H
