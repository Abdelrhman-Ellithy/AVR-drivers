/*
 * Keypad.c
 *
 * Created: 2023-11-09 4:15:56 AM
 *  Author: Abdelrahman Ellithy
 */ 
#include "../../LIB/STD_TYPES.h"
#include "Keypad_Config.h"
#include "Keypad_interface.h"
#include "Keypad_Private.h"

u8 Get_pressed(void){
	u8 loc_pressed=KPD_NotPressed;
	u8 val=1;
	u8 row,col;
	for (col= Col1 ; col<= Col4 ;col++ )
	{
			
		GPIO_PIN_WRITE(keypad_port,col,GPIO_PIN_LOW);
		for (row=row1 ; row<=row4 ; row++)
		{
			GPIO_Read_PIN_Value(keypad_port, row, &val);
			if(val==GPIO_PIN_LOW)
			{
				u32 timeout=0;
				while(GPIO_PIN_LOW==val && timeout<100000)
				{ 
					timeout++;
					GPIO_Read_PIN_Value(keypad_port, row,&val);
				}
				loc_pressed=keypad_Buttons[row][col-Col1];	
				break;
			}
		}
		GPIO_PIN_WRITE(keypad_port,col,GPIO_PIN_HIGH);
	}
	return loc_pressed;
}