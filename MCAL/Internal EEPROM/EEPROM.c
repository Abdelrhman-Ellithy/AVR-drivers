/*
 * EEPROM.c
 *
 * Created: 2024-07-22 6:33:46 PM
 *  Author: lenovo
 */ 
#include "EEPROM_Config.h"
#include "EEPROM_Private.h"
#include "EEPROM_Interface.h"
#include "../../LIB/BIT_OPERATIONS.h"
#include "../../LIB/STD_TYPES.h"

void EEPROM_Read(u16 Address, u8 * Data){
	while(GET_BIT(EEPROM_EECR, 1));
	EEPROM_EEAR=Address;
	SET_BIT(EEPROM_EECR, 0);
	*Data=EEPROM_EEDR;
}
void EEPROM_WrIte(u16 Address, u8 Data){
	
		while(GET_BIT(EEPROM_EECR, 1));
		EEPROM_EEAR=Address;
		EEPROM_EEDR=Data;
		SET_BIT(EEPROM_EECR, 2);
		SET_BIT(EEPROM_EECR, 1);
}