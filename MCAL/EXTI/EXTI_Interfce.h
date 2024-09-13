/*
 * EXTI_Interfce.h
 *
 * Created: 2024-07-27 7:18:34 PM
 *  Author: lenovo
 */ 

#ifndef EXTI_INTERFCE_H_
#define EXTI_INTERFCE_H_

typedef enum{
	EXTI_INT0=0,
	EXTI_INT1,
	EXTI_INT2
}EXTI_ID_t;

typedef enum{
	Low_Level=0,
	Any_Change,
	Failing_Edge,
	Rising_Edge
}EXTI_EDGE_t;

void EXTI_Enable(EXTI_ID_t  ID);
void EXTI_Disble(EXTI_ID_t  ID);
void EXTI_Edge_Detect(EXTI_ID_t  ID,EXTI_EDGE_t Edge );
void EXTI_SetCallBack(EXTI_ID_t ID, void(*LocalPtr_callback)(void));

#endif /* EXTI_INTERFCE_H_ */