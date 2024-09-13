/*
 * EXTI_Program.c
 *
 * Created: 2024-07-27 7:19:22 PM
 *  Author: Abdelrahman Ellithy
 */ 
#include "../../lIB/STD_TYPES.h"
#include "../../lIB/BIT_OPERATIONS.h"

#include "EXTI_Config.h"
#include "EXTI_Private.h"
#include "EXTI_Interfce.h"

static void (*INT0_Fptr_callback) (void)=NULLPTR;
static void (*INT1_Fptr_callback) (void)=NULLPTR;
static void (*INT2_Fptr_callback) (void)=NULLPTR;

void EXTI_Enable(EXTI_ID_t  ID){
	switch(ID){
		case EXTI_INT0: SET_BIT(GICR, INT0);  break;
		case EXTI_INT1: SET_BIT(GICR, INT1); break;
		case EXTI_INT2: SET_BIT(GICR, INT2); break;
	}
}
void EXTI_Disble(EXTI_ID_t  ID){
		switch(ID){
			case EXTI_INT0: CLEAR_BIT(GICR, INT0);  break;
			case EXTI_INT1: CLEAR_BIT(GICR, INT1); break;
			case EXTI_INT2: CLEAR_BIT(GICR, INT2); break;
		}
}
void EXTI_Edge_Detect(EXTI_ID_t  ID,EXTI_EDGE_t Edge ){
			switch(ID){
				case EXTI_INT0: 
					switch(Edge){
						case Low_Level : CLEAR_BIT(MCUCR, ISC00); CLEAR_BIT(MCUCR, ISC01); break;
						case Failing_Edge: CLEAR_BIT(MCUCR, ISC00); SET_BIT(MCUCR, ISC01); break;
						case Any_Change: SET_BIT(MCUCR, ISC00); CLEAR_BIT(MCUCR, ISC01); break;
						case Rising_Edge:	SET_BIT(MCUCR, ISC00); SET_BIT(MCUCR, ISC01);  break;
					}
				  break;
				case EXTI_INT1:
					MCUCR &=~(0b11<<2);
					MCUCR |=(Edge<<2);	
				   break;
				case EXTI_INT2: 
				switch(Edge){
					case Failing_Edge : CLEAR_BIT(MCUCSR, ISC2); break;
					case Rising_Edge:   SET_BIT(MCUCSR, ISC2);break;
				}
				break;
			}
}
void EXTI_SetCallBack(EXTI_ID_t ID, void(*LocalPtr_callback)(void)){
		switch(ID){
			case EXTI_INT0: INT0_Fptr_callback=LocalPtr_callback;  break;
			case EXTI_INT1: INT1_Fptr_callback=LocalPtr_callback;  break;
			case EXTI_INT2: INT2_Fptr_callback=LocalPtr_callback;  break;
		}
}

ISR(EX_INT0_vect){
	if(INT0_Fptr_callback!=NULLPTR)
	{
		INT0_Fptr_callback();
	}
}

ISR(EX_INT1_vect){
	if(INT1_Fptr_callback!=NULLPTR)
	{
		INT1_Fptr_callback();
	}
}

ISR(EX_INT2_vect){
	if(INT2_Fptr_callback!=NULLPTR)
	{
		INT2_Fptr_callback();
	}
}