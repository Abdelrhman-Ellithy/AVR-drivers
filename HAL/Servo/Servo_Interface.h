/*
 * Servo_interface.h
 *
 * Created: 2023-12-03 1:20:34 PM
 *  Author: Abdelrahman Ellithy
 */ 

#ifndef SERVO_H_
#define SERVO_H_

#include "../../MCAL/GPIO/GPIO_Interface.h"
#include "../../MCAL/Timers/Timers_Interface.h"
typedef enum{
	SERVO_OCR1A,
	SERVO_OCR1B
}Servo_Reg_t;

typedef struct{
	Servo_Reg_t Servoe_REG;
	u8  angle;
}Servo_t;

void SERVO_Init(Servo_t *servo);
void Servo_setAngle(Servo_t *servo);


#endif /* SERVO_H_ */







































/*
typedef enum{
	Clock_Wize,
	UntiClock_Wize
}Direction_type;

typedef enum{
	servo_OCR1A=0,
	servo_OCR1B
}Comp_Reg;

typedef struct{
	u8 * ServoPort;
	Comp_Reg reg ;
	Direction_type ServorDir;
}Servo;
*/