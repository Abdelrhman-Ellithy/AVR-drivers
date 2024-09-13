/*
 * LM35_Interface.h
 *
 * Created: 2023-11-15 11:25:11 AM
 *  Author: lenovo
 */ 


#ifndef LM35_INTERFACE_H_
#define LM35_INTERFACE_H_
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_OPERATIONS.h"
#include "../../MCAL/ADC/ADC_Interface.h"

u8 LM35_VoidRead(u8 Channel, u8* result);

#endif /* LM35_INTERFACE_H_ */