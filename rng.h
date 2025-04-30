#include "stm32l432xx.h"
#include "ee14lib.h"
#include "spi.h"
#include <stdio.h>
#include <math.h>

bool get_random_status(void);
void RNG_init(void); 

#define RNG_CR_CONDRST (1U << 0)