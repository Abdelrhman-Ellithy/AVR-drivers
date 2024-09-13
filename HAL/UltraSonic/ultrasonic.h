

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_


#define F_CPU 8000000
#include "../../MCAL/GPIO/GPIO_Interface.h"
#include "../../MCAL/Timers/Timers_Interface.h"
#include <util/delay.h>

typedef struct{
	u8 ULTRASonic_PORT;
	u8 ULTRASONIC_PIN;
}ULTRASONIC_t;

	
void ULTRASONIC_Init(void);
u8 ULTRASONIC_GetDistance(ULTRASONIC_t *ultrasonic);
void ULTRASONIC_Start(ULTRASONIC_t *ultrasonic);
u8 ULTRASONIC_GetDistancePeriodic (u8*Pdistance);

static void Func_ICU(void);
static void Func_OVF(void);
#endif /* ULTRASONIC_H_ */