/*
 * EEPROM_Priivate.h
 *
 * Created: 2024-07-22 6:50:10 PM
 *  Author: lenovo
 */ 


#ifndef EEPROM_PRIVATE_H_
#define EEPROM_PRIVATE_H_

#include "../../LIB/STD_TYPES.h"
 
#define EEPROM_EEAR			*((volatile u16 *)0X3E)
#define EEPROM_EEDR		*((volatile u8 *)0X3D)
#define EEPROM_EECR			*((volatile u8 *)0X3C)
 
 
#define flag_adsress	0x0070
#define Already_set		0x00
#define base_adsress	0x0051
#define FLAG_FRIST		0xff

#endif /* EEPROM_PRIVATE_H_ */