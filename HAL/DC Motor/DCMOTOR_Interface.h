/*
 * DC_Motor_Interface.h
 *
 * Created: 2023-12-08 4:12:28 AM
 *  Author: Abdelrahman Ellithy
 */ 

#ifndef DCMOTOR_INTERFACE_H_
#define DCMOTOR_INTERFACE_H_

#include "../../MCAL/GPIO/GPIO_interface.h"

typedef enum{
	 DCMOTOR_FW	=0,
	 DCMOTOR_BK	,
	 DCMOTOR_STOP
}MotorStatus;
	
typedef struct 
{
	u8 DcMotorPort ;
	u8 DcMotorPinA ;
	u8 DcMotorPinB ;
	MotorStatus State;
} DCMOTOR_t;

void DCMOTOR_Control (DCMOTOR_t * DcMotor) ;

#endif
