/*
 * include.h
 *
 */

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdbool.h>
#include "TM4C123GH6PM.h"

#define GPIOF_CR (*((volatile uint32_t *)0x40025524))

#define _80MHZ 0x04
#define _50MHZ 0x07
#define _40MHZ 0x09
#define _25MHZ 0x0F
#define _20MHZ 0x13

#include "PLL/PLL.h"
#include "GPIO/GPIO.h"
#include "UART/UART.h"
#include "SYSTICK/SYSTICK.h"
#include "TIMER/TIMER.h"

#define F150Hz ((50000000/50)/150) //prescalado a 1Mhz


#endif /* INCLUDE_H_ */
