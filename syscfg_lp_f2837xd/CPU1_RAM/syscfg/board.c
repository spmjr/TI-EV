/*
 * Copyright (c) 2020 Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "board.h"

//*****************************************************************************
//
// Board Configurations
// Initializes the rest of the modules. 
// Call this function in your application if you wish to do all module 
// initialization.
// If you wish to not use some of the initializations, instead of the 
// Board_init use the individual Module_inits
//
//*****************************************************************************
void Board_init()
{
	EALLOW;

	PinMux_init();
	CPUTIMER_init();
	GPIO_init();
	INTERRUPT_init();

	EDIS;
}

//*****************************************************************************
//
// PINMUX Configurations
//
//*****************************************************************************
void PinMux_init()
{
	//
	// PinMux for modules assigned to CPU1
	//
	
	// GPIO14 -> myGPIO0 Pinmux
	GPIO_setPinConfig(GPIO_14_GPIO14);
	// GPIO15 -> myGPIO1 Pinmux
	GPIO_setPinConfig(GPIO_15_GPIO15);
	// GPIO31 -> myBoardLED0_GPIO Pinmux
	GPIO_setPinConfig(GPIO_31_GPIO31);
	// GPIO34 -> myBoardLED1_GPIO Pinmux
	GPIO_setPinConfig(GPIO_34_GPIO34);

}


//*****************************************************************************
//
// CPUTIMER Configurations
//
//*****************************************************************************
void CPUTIMER_init(){
	Led_Toggle_Timer_init();
}

void Led_Toggle_Timer_init(){
	CPUTimer_setEmulationMode(Led_Toggle_Timer_BASE, CPUTIMER_EMULATIONMODE_STOPAFTERNEXTDECREMENT);
	CPUTimer_setPreScaler(Led_Toggle_Timer_BASE, 0U);
	CPUTimer_setPeriod(Led_Toggle_Timer_BASE, 100000000U);
	CPUTimer_enableInterrupt(Led_Toggle_Timer_BASE);
	CPUTimer_stopTimer(Led_Toggle_Timer_BASE);

	CPUTimer_reloadTimerCounter(Led_Toggle_Timer_BASE);
	CPUTimer_startTimer(Led_Toggle_Timer_BASE);
}

//*****************************************************************************
//
// GPIO Configurations
//
//*****************************************************************************
void GPIO_init(){
	myGPIO0_init();
	myGPIO1_init();
	myBoardLED0_GPIO_init();
	myBoardLED1_GPIO_init();
}

void myGPIO0_init(){
	GPIO_setPadConfig(myGPIO0, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myGPIO0, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(myGPIO0, GPIO_DIR_MODE_OUT);
	GPIO_setControllerCore(myGPIO0, GPIO_CORE_CPU1);
}
void myGPIO1_init(){
	GPIO_writePin(myGPIO1, 1);
	GPIO_setPadConfig(myGPIO1, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myGPIO1, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(myGPIO1, GPIO_DIR_MODE_OUT);
	GPIO_setControllerCore(myGPIO1, GPIO_CORE_CPU1);
}
void myBoardLED0_GPIO_init(){
	GPIO_setPadConfig(myBoardLED0_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myBoardLED0_GPIO, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(myBoardLED0_GPIO, GPIO_DIR_MODE_OUT);
	GPIO_setControllerCore(myBoardLED0_GPIO, GPIO_CORE_CPU1);
}
void myBoardLED1_GPIO_init(){
	GPIO_setPadConfig(myBoardLED1_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myBoardLED1_GPIO, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(myBoardLED1_GPIO, GPIO_DIR_MODE_OUT);
	GPIO_setControllerCore(myBoardLED1_GPIO, GPIO_CORE_CPU1);
}

//*****************************************************************************
//
// INTERRUPT Configurations
//
//*****************************************************************************
void INTERRUPT_init(){
	
	// Interrupt Setings for INT_Led_Toggle_Timer
	Interrupt_register(INT_Led_Toggle_Timer, &INT_Led_Toggle_Timer_ISR);
	Interrupt_enable(INT_Led_Toggle_Timer);
}
