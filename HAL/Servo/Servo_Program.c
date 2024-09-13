#include "Servo_Interface.h"
#include "Servo_conifg.h"
#include "Servo_private.h"
#include "../../MCAL/Timers/Timers_Interface.h"

void SERVO_Init(Servo_t *servo){
	SET_ICR_Value(19999);
	Timer1_Init_PostBuild(TIMER1_FASTPWM_ICR_TOP_MODE,TIMER1_SCALER_8, OCRA_NON_INVERTING, OCRB_DISCONNECTED);
	Servo_setAngle(servo);
}
void Servo_setAngle(Servo_t *servo){
	u32 angle=servo->angle;
	u16 loc_angle= (u16)(( ( (u32)(angle*1000) )/180U)+999 );
	
		switch (servo->Servoe_REG){
			case SERVO_OCR1A:
				SET_OCR1A_Value(loc_angle);
			break;
			case SERVO_OCR1B:
				SET_OCR1B_Value(loc_angle);
			break;
		}
}