/*
 * LED_Program.c
 *
 * Created: 2024-07-09 9:15:55 PM
 *  Author: lenovo
 */ 
#include "LED_Config.h"
#include "LED_Interface.h"
#include "LED_Private.h"

/*
void LED_Init(LED_t *led){
	GPIO_PIN_Init(led->LED_Port, led->LED_Pin, GPIO_PIN_OUTPUT);
}
*/

void LED_ON(LED_t *led){
	// & led1 // 0x040 LED1={.LED_Port=GPIO_PORTA, .LED_Pin=GPIO_PIN0, .Active_type=Active_High};
	switch(led->Active_type){
		case Active_High: GPIO_PIN_WRITE(led->LED_Port, led->LED_Pin, GPIO_PIN_HIGH ); break; // GPIO_PIN_WRITE(GPIO_PORTA, GPIO_PIN0, GPIO_PIN_HIGH );
		case Active_Low : GPIO_PIN_WRITE(led->LED_Port, led->LED_Pin, GPIO_PIN_LOW ); break;
	}
}
void LED_OFF(LED_t *led){
		switch(led->Active_type){
			case Active_High: GPIO_PIN_WRITE(led->LED_Port, led->LED_Pin, GPIO_PIN_LOW ); break;
			case Active_Low : GPIO_PIN_WRITE(led->LED_Port, led->LED_Pin, GPIO_PIN_HIGH ); break;
		}
}
void LED_TOGGLE(LED_t *led){
	GPIO_PIN_TOGGLE(led->LED_Port, led->LED_Pin);
}