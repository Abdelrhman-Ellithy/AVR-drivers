/*
 * GPIO_Praivate.h
 * SW Component : GPIO
 * Layer :MCAl
 * Created: 2024-07-02 10:39:15 PM
 *  Author: Abdelrahman Ellithy
 */

// Alt + shift+
#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

#include "../../LIB/STD_TYPES.h"


#define GPIO_REG_PORTA	*((volatile u8 *)0X3B)
#define GPIO_REG_DDRA	*((volatile u8 *)0X3A)
#define GPIO_REG_PINA	*((volatile u8 *)0X39)

#define GPIO_REG_PORTB	*((volatile u8 *)0X38)
#define GPIO_REG_DDRB	*((volatile u8 *)0X37)
#define GPIO_REG_PINB	*((volatile u8 *)0X36)

#define GPIO_REG_PORTC	*((volatile u8 *)0X35)
#define GPIO_REG_DDRC	*((volatile u8 *)0X34)
#define GPIO_REG_PINC	*((volatile u8 *)0X33)

#define GPIO_REG_PORTD	*((volatile u8 *)0X32)
#define GPIO_REG_DDRD	*((volatile u8 *)0X31)
#define GPIO_REG_PIND	*((volatile u8 *)0X30)


typedef struct{
    volatile u8 PIN;
    volatile u8 DDR;
    volatile u8 PORT;

}GPIOX_Reg_t;

#define GPIOA       ((GPIOX_Reg_t*)0x39)
#define GPIOB       ((GPIOX_Reg_t*)0x36)
#define GPIOC       ((GPIOX_Reg_t*)0x33)
#define GPIOD       ((GPIOX_Reg_t*)0x30)

#endif /* GPIO_PRIVATE_H_ */
