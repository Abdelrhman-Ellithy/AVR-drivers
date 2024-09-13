/*
 * GPIO_Program.c
 *
 * SW Component : GPIO
 * Layer :MCAl
 * Created: 2024-07-02 10:39:15 PM
 *  Author: Abdelrahman Ellithy
 */
 
#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Config.h"
#include "../../LIB/BIT_OPERATIONS.h"
static GPIOX_Reg_t * GPIOS[]={GPIOA, GPIOB, GPIOC, GPIOD};
	
void GPIO_PIN_WRITE(u8 PortName,GPIO_PIN PinNumber, u8 Value ){
	
	switch(Value){
		case GPIO_PIN_HIGH:
		switch(PortName){
			case GPIO_PORTA: SET_BIT(GPIOA->PORT,PinNumber); break;
			case GPIO_PORTB: SET_BIT(GPIOB->PORT,PinNumber); break;
			case GPIO_PORTC: SET_BIT(GPIO_REG_PORTC,PinNumber); break;
			case GPIO_PORTD: SET_BIT(GPIO_REG_PORTD,PinNumber); break;
		}
			break;
			
		case GPIO_PIN_LOW:
		switch(PortName){
			case GPIO_PORTA: CLEAR_BIT(GPIO_REG_PORTA,PinNumber); break;
			case GPIO_PORTB: CLEAR_BIT(GPIO_REG_PORTB,PinNumber); break;
			case GPIO_PORTC: CLEAR_BIT(GPIO_REG_PORTC,PinNumber); break;
			case GPIO_PORTD: CLEAR_BIT(GPIO_REG_PORTD,PinNumber); break;
		}		
			break;
	}
}
void GPIO_PIN_Init(u8 PortName,u8 PinNumber, u8 Value ){
		switch(Value){
			case GPIO_PIN_OUTPUT:
			switch(PortName){
				case GPIO_PORTA: SET_BIT(GPIO_REG_DDRA,PinNumber); break;
				case GPIO_PORTB: SET_BIT(GPIO_REG_DDRB,PinNumber); break;
				case GPIO_PORTC: SET_BIT(GPIO_REG_DDRC,PinNumber); break;
				case GPIO_PORTD: SET_BIT(GPIO_REG_DDRD,PinNumber); break;
			}
			break;
			
			case GPIO_PIN_INPUT:
			switch(PortName){
				case GPIO_PORTA: CLEAR_BIT(GPIO_REG_DDRA,PinNumber); break;
				case GPIO_PORTB: CLEAR_BIT(GPIO_REG_DDRB,PinNumber); break;
				case GPIO_PORTC: CLEAR_BIT(GPIO_REG_DDRC,PinNumber); break;
				case GPIO_PORTD: CLEAR_BIT(GPIO_REG_DDRD,PinNumber); break;
			}
			break;
		}
}
void GPIO_PIN_TOGGLE(u8 PortName,GPIO_PIN PinNumber ){
	switch(PortName){
		case GPIO_PORTA: TOGGLE_BIT(GPIO_REG_PORTA,PinNumber); break;
		case GPIO_PORTB: TOGGLE_BIT(GPIO_REG_PORTB,PinNumber); break;
		case GPIO_PORTC: TOGGLE_BIT(GPIO_REG_PORTC,PinNumber); break;
		case GPIO_PORTD: TOGGLE_BIT(GPIO_REG_PORTD,PinNumber); break;
		}
}
void GPIO_Read_PIN_Value(u8 PortName,u8 PinNumber, u8* Value ){
		switch(PortName){
			case GPIO_PORTA: *Value=GET_BIT(GPIO_REG_PINA,PinNumber); break;
			case GPIO_PORTB: *Value=GET_BIT(GPIO_REG_PINB,PinNumber); break;
			case GPIO_PORTC: *Value=GET_BIT(GPIO_REG_PINC,PinNumber); break;
			case GPIO_PORTD: *Value=GET_BIT(GPIO_REG_PIND,PinNumber); break;
		}
}

void GPIO_PORT_WRITE(u8 PortName, u8 Value ){
		switch(PortName){
			case GPIO_PORTA: GPIO_REG_PORTA=Value; break;
			case GPIO_PORTB: GPIO_REG_PORTB=Value; break;
			case GPIO_PORTC: GPIO_REG_PORTC=Value; break;
			case GPIO_PORTD: GPIO_REG_PORTD=Value; break;
		}
}

void GPIO_Set_PORT_Direction(u8 PortName, u8 Value );

void GPIO_Read_PORT_Value(u8 PortName, u8* Value );

