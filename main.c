/**
 ******************************************************************************
 * @file           : 
 * @author         : Abdelrahman Ellithy
 */
#define F_CPU 8000000
#include "MCAL/PORT/PORT_interface.h" 
#include "HAL/LCD Driver/CLCD_interface.h"
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_OPERATIONS.h"
#include "MCAL/UART/UART_Interface.h"
u8 UARTDATA=0xff;
int main(void)
{
	PORT_voidInit();
	UART_Init();
	UART_RX_InterruptEnable();
	sei();
	while(1){
		if(UARTDATA!=0xff){
			UART_SendByte('\r');
			UART_SendByte('\n');
			UART_SendByte(UARTDATA);
			UART_SendByte('\r');
			UART_SendByte('\n');
			UARTDATA=0xff;
		}
	}
}