/*
 * ADC_Interface.h
 *
 * Created: 2023-11-10 10:12:53 AM
 *  Author: Abdelrahman Ellithy
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"

#define ADC_CHANNEL0            0
#define ADC_CHANNEL1            1
#define ADC_CHANNEL2            2
#define ADC_CHANNEL3            3
#define ADC_CHANNEL4            4
#define ADC_CHANNEL5            5
#define ADC_CHANNEL6            6
#define ADC_CHANNEL7            7

#define ADC_PRE_2               0
#define ADC_PRE_4               2
#define ADC_PRE_8               3
#define ADC_PRE_16              4
#define ADC_PRE_32              5
#define ADC_PRE_64              6
#define ADC_PRE_128             7

void ADC_VoidInit(void);
u16 ADC_u16ReadSynchronus ( u8 Copy_u8ChannelNumber ) ;
u8  ADC_u16ReadASynchronus ( u8 Copy_u8ChannelNumber, u16 *result );
void ADC_VoidSet_prescaler(u8 prescaler); 
#endif