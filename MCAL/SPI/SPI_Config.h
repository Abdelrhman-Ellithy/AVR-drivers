/*
 * SPI_Config.h
 *
 * Created: 2024-01-06 4:05:47 PM
 *  Author: Abdelrahman Ellithy
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "SPI_interface.h"

#define SPI_Mode ModeMaster


#define SPI_DISABLE								0
#define SPI_ENABLE 								1

#define SPI_DATA_LSB_FIRST 						0
#define SPI_DATA_MSP_FIRST 						1

#define SPI_RISING_LEADING_FALLING_TRAILING 	0
#define SPI_FALLING_LEADING_RISING_TRAILING		1

#define SPI_SAMPLE_LEADING_SETUP_TRAILING 		0
#define SPI_SETUP_LEADING_SAMPLE_TRAILING		1

#define SPI_FREQ_DIVIDED_BY_2					0
#define SPI_FREQ_DIVIDED_BY_4					1
#define SPI_FREQ_DIVIDED_BY_8					2
#define SPI_FREQ_DIVIDED_BY_16					3
#define SPI_FREQ_DIVIDED_BY_32					4
#define SPI_FREQ_DIVIDED_BY_64					5
#define SPI_FREQ_DIVIDED_BY_128					6

#define SPI_DATA_ORDER						SPI_DATA_MSP_FIRST

#define SPI_CLOCK_POLARITY				SPI_RISING_LEADING_FALLING_TRAILING

#define SPI_CLOCK_PHASE					SPI_SAMPLE_LEADING_SETUP_TRAILING

#define SPI_CLOCK_RATE					SPI_FREQ_DIVIDED_BY_16

#define SPI_ENABLE_MODE						SPI_ENABLE

#endif /* SPI_CONFIG_H_ */