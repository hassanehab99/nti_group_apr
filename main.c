/*
 * GccApplication1.c
 *
 * Created: 03/04/2022 10:07:52 ص
 * Author : dell
 */ 
#include "STD.h"
#include "DIO.h"
#include "LED.h"
#include "P_B.h"
#include "SSD.h"
#include "KEY_PAD.h"
#include "LCD.h"
#include "ADC.h"
#include "TEMP_SENSOR.h"
#include "EXT_INT.h"
#include "UART.h"
void EXT0INT(void);
# define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{ 
	H_LcdInit();
	M_UartInit();
	u8 x = 0;
	while(1)
	{
		x = M_UartReseive();
		H_LcdWriteCharacter(x);
	}
}

void EXT0INT(void)
{
	H_LedInit(R_LED);
	H_LedTog(R_LED);
}