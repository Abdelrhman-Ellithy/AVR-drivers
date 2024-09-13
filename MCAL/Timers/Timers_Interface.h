/*
 * Timers_Interface.h
 *
 * Created: 2023-11-13 9:11:04 PM
 *  Author: lenovo
 */ 


#ifndef TIMERS_INTERFACE_H_
#define TIMERS_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"
/************************************************************************/
/* Timer0 post and Pre                                                  */
/************************************************************************/
typedef enum{
	TIMER0_STOP=0,
	TIMER0_SCALER_1,
	TIMER0_SCALER_8,
	TIMER0_SCALER_64,
	TIMER0_SCALER_256,
	TIMER0_SCALER_1024,
	EXTERNALl_FALLING,
	EXTERNAL_RISING
}Timer0Scaler_type;

typedef enum
{
	TIMER0_NORMAL_MODE=0,
	TIMER0_PHASECORRECT_MODE,
	TIMER0_CTC_MODE,
	TIMER0_FASTPWM_MODE

}Timer0Mode_type;
typedef enum
{
	OCO_DISCONNECTED=0,
	OCO_TOGGLE,
	OCO_NON_INVERTING,
	OCO_INVERTING

}OC0Mode_type;


void Timer0_InitPreBuild(void);
void Timer0_Run(void);
void Timer0_stop(void );


void Timer0_Init_PostBuild( Timer0Mode_type mode,Timer0Scaler_type scaler ,OC0Mode_type oc_mode);

void Timer0_VoidPWMset(u8 pwm );

void TIMER0_Set_OCR_Value(u8 value);

void Timer0_OV_InterruptEnable(void);
void Timer0_OV_InterruptDisable(void);

void Timer0_OC_InterruptEnable(void);
void Timer0_OC_InterruptDisable(void);

void TIMER0_COMP_SetCallBack(void(*LocalPtr)(void));
void TIMER0_OVFt_SetCallBack(void(*LocalPtr)(void));














/************************************************************************/
/* Timer	post Bulid					                                */
/************************************************************************/
typedef enum {
	TIMER1_STOP=0,
	TIMER1_SCALER_1=1,
	TIMER1_SCALER_8,
	TIMER1_SCALER_64,
	TIMER1_SCALER_256,
	TIMER1_SCALER_1024,
	EXTERNAL0_FALLING,
	EXTERNAL0_RISING
}Timer1Scaler_type;

typedef enum
{
	TIMER1_NORMAL_MODE=0,
	TIMER1_CTC_ICR_TOP_MODE,
	TIMER1_CTC_OCRA_TOP_MODE,
	TIMER1_FASTPWM_ICR_TOP_MODE,
	TIMER1_FASTPWM_OCRA_TOP_MODE,
	TIMER1_PHASECORRECT_OCRA_TOP_MODE
	
}Timer1Mode_type;

typedef enum
{
	OCRA_DISCONNECTED=0,
	OCRA_TOGGLE,
	OCRA_NON_INVERTING,
	OCRA_INVERTING

}OC1A_Mode_type;

typedef enum
{
	OCRB_DISCONNECTED=0,
	OCRB_TOGGLE,
	OCRB_NON_INVERTING,
	OCRB_INVERTING

}OC1B_Mode_type;


typedef enum{
	RISING=0,
	FALLING
}ICU_Edge_type;


void SET_OCR1A_Value(u16 value);
void SET_OCR1B_Value(u16 value);
void SET_ICR_Value(u16 value);

void PWM_Measure(u32* Pfreq,u8* Pduty);
void ICU_u8PWM_Mesure( u8 *PWM, u32* Freq);

void Timer1_Init_PostBuild(Timer1Mode_type mode,Timer1Scaler_type scaler,OC1A_Mode_type oc1a_mode,OC1B_Mode_type oc1b_mode);

void Timer1_ICU_InterruptEnable(void);
void Timer1_InputCaptureEdge(ICU_Edge_type edge);
void Timer1_ICU_InterruptDisable(void);

void Timer1_OVF_InterruptEnable(void);
void Timer1_OVF_InterruptDisable(void);

void Timer1_OCA_InterruptEnable(void);
void Timer1_OCA_InterruptDisable(void);

u16 getICRValue();

void Timer1_OCB_InterruptEnable(void);
void Timer1_OCB_InterruptDisable(void);

void Timer1_OVF_SetCallBack(void(*LocalFptr)(void));
void Timer1_OCA_SetCallBack(void(*LocalFptr)(void));
void Timer1_OCB_SetCallBack(void(*LocalFptr)(void));
void Timer1_ICU_SetCallBack(void(*LocalFptr)(void));

void Timer1_VoidPWMset(u8 pwm );
void Timer1_VoidTopOCRAset(u16 laod );
void PWM_Freq_HZ(u32 freq);
#endif /* TIMERS_INTERFACE_H_ */