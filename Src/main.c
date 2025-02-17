/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

#include<stdint.h>

int main(void)
{
	uint32_t *pClckctrlReg=(uint32_t*)0x40023830;
	uint32_t *pPortDModeReg=(uint32_t*)0x40020C00;
	uint32_t *pPortDoutReg=(uint32_t*)0x40020C14;

	//1. enable the clock for GPIOD peripheral int the AHB1ENR bus
	*pClckctrlReg|=(1<<3);

	//2. configure the mode of the IO pin as output
	//a. clear the 24th and 25th bit positions(CLEAR)
	*pPortDModeReg &= ~(3<<24);
	//b. make 24th bit position as 1 (SET)
	*pPortDModeReg |= (1<<24);

	//3. Set 12th bit of output data register to make I/O pin 12-HIGH

	*pPortDoutReg|=(1<<12);

	while(1);


}
