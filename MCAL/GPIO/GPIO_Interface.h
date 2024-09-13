/*
 * GPIO_Interface.h
 * SW Component : GPIO
 * Layer :MCAl
 * Created: 2024-07-02 10:39:15 PM
 *  Author: Abdelrahman Ellithy
 */ 


#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"


// macros for user to interface with GPIO

#define GPIO_PORTA		 0x01
#define GPIO_PORTB       0x02
#define GPIO_PORTC       0x03
#define GPIO_PORTD       0x04
		
#define GPIO_PIN0		 0x00
#define GPIO_PIN1		 0x01
#define GPIO_PIN2		 0x02
#define GPIO_PIN3		 0x03
#define GPIO_PIN4		 0x04
#define GPIO_PIN5		 0x05
#define GPIO_PIN6		 0x06
#define GPIO_PIN7		 0x07

typedef enum{
	 PIN0	=	 0x00,
	 PIN1	=	 0x01,
	 PIN2	=	 0x02,
	 PIN3	=	 0x03,
	 PIN4	=	 0x04,
	 PIN5	=	 0x05,
	 PIN6	=	 0x06,
	 PIN7	=	 0x07
}GPIO_PIN;

#define GPIO_PIN_HIGH	 0x01
#define GPIO_PIN_LOW 	 0x00


#define GPIO_PIN_OUTPUT	 0x01
#define GPIO_PIN_INPUT 	 0x00


#define GPIO_PORT_HIGH	 0xFF
#define GPIO_PORT_LOW 	 0x00



// Function prototypes for user to interface with GPIO

void GPIO_PIN_WRITE(u8 PortName,GPIO_PIN PinNumber, u8 Value );

void GPIO_PIN_TOGGLE(u8 PortName,GPIO_PIN PinNumber );

void GPIO_PIN_Init(u8 PortName,u8 PinNumber, u8 Value );

void GPIO_Read_PIN_Value(u8 PortName,u8 PinNumber, u8* Value );

void GPIO_PORT_WRITE(u8 PortName, u8 Value );

void GPIO_Set_PORT_Direction(u8 PortName, u8 Value );

void GPIO_PORT_TOGGLE(u8 PortName, u8 Value );

void GPIO_Read_PORT_Value(u8 PortName, u8* Value );


#endif /* GPIO_INTERFACE_H_ */