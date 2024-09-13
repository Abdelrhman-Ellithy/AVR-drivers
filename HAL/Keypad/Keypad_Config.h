/*
 * Keypad.h
 *
 * Created: 2023-11-09 4:15:42 AM
 *  Author: Abdelrahman Ellithy
 */ 
#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "../../MCAL/GPIO/GPIO_Interface.h"

#define keypad_port GPIO_PORTD
#define keypad_port_bits 0xf0

#define KPD_Col_start GPIO_PIN4
#define KPD_Col_End   GPIO_PIN7

#define KPD_Row_start 0
#define KPD_Row_End   4

#define row1 GPIO_PIN0
#define row2 GPIO_PIN1
#define row3 GPIO_PIN2
#define row4 GPIO_PIN3

#define Col1 GPIO_PIN4
#define Col2 GPIO_PIN5
#define Col3 GPIO_PIN6
#define Col4 GPIO_PIN7

#endif /* KEYPAD_H_ */