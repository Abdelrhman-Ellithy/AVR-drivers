/*
 * EEPROM_Interface.h
 *
 * Created: 2024-07-22 6:49:25 PM
 *  Author: lenovo
 */ 


#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"


#define flag_adsress 0x0081

#define base_adsress 0x0051

void EEPROM_Read(u16 Address, u8 * Data);
void EEPROM_WrIte(u16 Address, u8 Data);


#endif /* EEPROM_INTERFACE_H_ */