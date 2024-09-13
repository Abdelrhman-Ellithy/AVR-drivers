/*
 * Dc_Motor.c
 *
 * Created: 2023-12-08 4:12:28 AM
 *  Author: Abdelrahman Ellithy
 */

 

#include "../../LIB/BIT_OPERATIONS.h"

#include "DCMOTOR_Interface.h"
void DCMOTOR_Control (DCMOTOR_t * DcMotor)
{
	switch (DcMotor->State)
	{
		case DCMOTOR_FW:
			GPIO_PIN_WRITE(DcMotor->DcMotorPort,DcMotor->DcMotorPinA,GPIO_PIN_HIGH);
			GPIO_PIN_WRITE(DcMotor->DcMotorPort,DcMotor->DcMotorPinB,GPIO_PIN_LOW);
			break;
		case DCMOTOR_BK:
			GPIO_PIN_WRITE(DcMotor->DcMotorPort,DcMotor->DcMotorPinA,GPIO_PIN_LOW);
			GPIO_PIN_WRITE(DcMotor->DcMotorPort,DcMotor->DcMotorPinB,GPIO_PIN_HIGH);
			break;
		case DCMOTOR_STOP :
			GPIO_PIN_WRITE(DcMotor->DcMotorPort,DcMotor->DcMotorPinA,GPIO_PIN_LOW);
			GPIO_PIN_WRITE(DcMotor->DcMotorPort,DcMotor->DcMotorPinB,GPIO_PIN_LOW);
			break;
	}
}
