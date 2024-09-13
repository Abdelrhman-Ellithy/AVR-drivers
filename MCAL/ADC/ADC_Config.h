/*
 * ADC_Config.h
 *
 * Created: 2023-11-15 6:45:45 AM
 *  Author: Abdelrahman Ellithy
 */ 


#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_
/*
1-left or right adjsetment
2- channel select
3-voltage refrenece
4-ADC eneble or disable
5-Interrupt enable or disable
*/


#define ADC_DISABLE             0
#define ADC_ENABLE              1

#define ADC_STATUS   ADC_ENABLE

#define INT_DISABLE             0
#define INT_ENABLE              1

#define INT_STATUS   INT_DISABLE

#define AREF                    0
#define AVCC                    1
#define INTERNAL_2_56           3

#define ADC_VREF  AVCC

#define RIGHT_ADJUSTMENT        0
#define LEFT_ADJUSTMENT         1


#define ADC_ADJUSTMENT RIGHT_ADJUSTMENT

#define ADC_SINGLE_CONVERSION   0
#define ADC_FREE_RUNNING        1
#define ADC_ANALOG_COMPARATOR   2
#define ADC_EXTI0               3
#define ADC_TIM0_CTC            4
#define ADC_TIM0_OVF            5
#define ADC_TIM1_CTC_CHANNEL_B  6
#define ADC_TIM1_OVF            7
#define ADC_TIM1_ICU            8


#define ADC_CHANNEL  ADC_CHANNEL0

/*
 Options:-
 	 1-ADC_SINGLE_CONVERSION
 	 2-ADC_FREE_RUNNING
 	 3-ADC_ANALOG_COMPARATOR
 	 4-ADC_EXTI0
 	 5-ADC_TIM0_CTC
 	 6-ADC_TIM0_OVF
 	 7-ADC_TIM1_CTC_CHANNEL_B
 	 8-ADC_TIM1_OVF
 	 9-ADC_TIM1_ICU

 */

#define ADC_TRIGGERING_SOURCE   ADC_SINGLE_CONVERSION

/*
 Options:-
 	 1-ADC_PRE_2
 	 2-ADC_PRE_4
 	 3-ADC_PRE_8
 	 4-ADC_PRE_16
 	 5-ADC_PRE_32
 	 6-ADC_PRE_64
 	 7-ADC_PRE_128

 */

#define  ADC_PRESCALLER   ADC_PRE_32

#define  ADC_TIMEOUT      50000


#endif /* ADC_CONFIG_H_ */