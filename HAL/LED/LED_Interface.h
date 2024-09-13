/*
 * LED_Interface.h
 *
 * Created: 2024-07-09 9:15:13 PM
 *  Author: lenovo
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/GPIO/GPIO_Interface.h"


typedef enum{
	Active_Low=0,
	Active_High
}Active_Type_t;

typedef struct{
	u8 LED_Port;
	u8 LED_Pin;
	Active_Type_t Active_type;
}LED_t;

/*
void LED_Init(LED_t *led);
*/
void LED_ON(LED_t *led);
void LED_OFF(LED_t *led);
void LED_TOGGLE(LED_t *led);

#endif /* LED_INTERFACE_H_ */