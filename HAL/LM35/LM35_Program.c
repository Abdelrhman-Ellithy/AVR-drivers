/*
 * LM35_Program.c
 *
 * Created: 2023-11-15 11:25:38 AM
 *  Author: lenovo
 */ 
#include "LM35_Interface.h"

u8 LM35_VoidRead(u8 Channel, u8* result)
{
		u16 loc_ReadVal=0;
		u8 flag=0;
		flag=ADC_u16ReadASynchronus(Channel,&loc_ReadVal);
		if (flag)
		{
			*result=(u8) ((u32)(loc_ReadVal * 5000ul) / 10230UL) ;
			return 1;
		}
		else{
			return 0;
		}
}