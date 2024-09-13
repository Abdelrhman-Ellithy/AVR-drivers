/*
 * EXTI_Private.h
 *
 * Created: 2024-07-27 7:18:21 PM
 *  Author: lenovo
 */ 


#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_

#include "../../LIB/STD_TYPES.h"


#define INT1 7
#define INT0 6
#define INT2 5

#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

#define INTF1 7
#define INTF0 6
#define INTF2 5
#define ISC2  6

#define GICR	 *((volatile u8*)0x5B) // general interrupt control register
#define GIFR	 *((volatile u8*)0x5A) // general interrupt flag register
#define MCUCSR   *((volatile u8*)0x54) // MCU Control and Status Register
#define MCUCR	 *((volatile u8*)0x55) // MCU Control Register

#define EX_INT0_vect __vector_1		// External Interrupt Request 0
#define EX_INT1_vect __vector_2		// External Interrupt Request 1
#define EX_INT2_vect __vector_3		// External Interrupt Request 2

#define ISR(vector,...)            \
void vector (void) __attribute__ ((signal,used))__VA_ARGS__ ; \
void vector (void)


#endif /* EXTI_PRIVATE_H_ */