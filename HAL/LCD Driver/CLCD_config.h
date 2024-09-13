/*
 * CLCD_Config.h
 * SW Component : CLCD
 * Layer :HAL
 *  Author: Abdelrahman Ellithy
 */

#ifndef CLCD_CONFIG_H_
#define CLCD_CONFIG_H_

#include "../../MCAL/GPIO/GPIO_Interface.h"
/***************************************************************************************/
/* LCD Mode */

/* $ Options :-
	1- 4
	2- 8
 */
#define CLCD_MODE  8
/* $ Options :-
	1- CLCd_2_16
	2- CLCd_4_16
	3- CLCd_4_20
 */

#define CLCD_Type  CLCd_2_16


/***************************************************************************************/


/* D0 ------> D7 */
/*

  Options:-
 	 1-DIO_PORTA
 	 2-DIO_PORTB
 	 3-DIO_PORTC
 	 4-DIO_PORTD

 */
/***************************************************************************************/


#define CLCD_DATA_PORT      GPIO_PORTB

/* RS,RW,EN */
#define CLCD_CONTROL_PORT   GPIO_PORTC

/***************************************************************************************/


/*

 Options:-
 	 1-DIO_PIN0
 	 2-DIO_PIN1
 	 3-DIO_PIN2
 	 4-DIO_PIN3
 	 5-DIO_PIN4
 	 6-DIO_PIN5
 	 7-DIO_PIN6
 	 8-DIO_PIN7

 */
#define CLCD_RS             GPIO_PIN0
//#define CLCD_RW             DIO_PIN1 alwaws connected to ground
#define CLCD_EN             GPIO_PIN1

#define Cursor_Mode lcd_DisplayOn_CursorOff
/***************************************************************************************/


#endif /* CLCD_CONFIG_H_ */
