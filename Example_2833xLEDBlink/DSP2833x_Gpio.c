//###########################################################################
//
// FILE:	DSP2833x_Gpio.c
//
// TITLE:	DSP2833x General Purpose I/O Initialization & Support Functions.
//
//###########################################################################
// $TI Release: F2833x/F2823x Header Files and Peripheral Examples V141 $
// $Release Date: November  6, 2015 $
// $Copyright: Copyright (C) 2007-2015 Texas Instruments Incorporated -
//             http://www.ti.com/ ALL RIGHTS RESERVED $
//###########################################################################

#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File

//---------------------------------------------------------------------------
// InitGpio: 
//---------------------------------------------------------------------------
// This function initializes the Gpio to a known (default) state.
//
// For more details on configuring GPIO's as peripheral functions,
// refer to the individual peripheral examples and/or GPIO setup example. 
void InitGpio(void)
{
	EALLOW;

	// Each GPIO pin can be:
	// a) a GPIO input/output
	// b) peripheral function 1
	// c) peripheral function 2
	// d) peripheral function 3
	// By default, all are GPIO Inputs
	GpioCtrlRegs.GPAMUX1.all = 0x0000;     // GPIO functionality GPIO0-GPIO15
	GpioCtrlRegs.GPAMUX2.all = 0x0000;     // GPIO functionality GPIO16-GPIO31
	GpioCtrlRegs.GPBMUX1.all = 0x0000;     // GPIO functionality GPIO32-GPIO39
	GpioCtrlRegs.GPBMUX2.all = 0x0000;     // GPIO functionality GPIO48-GPIO63
	GpioCtrlRegs.GPCMUX1.all = 0x0000;     // GPIO functionality GPIO64-GPIO79
	GpioCtrlRegs.GPCMUX2.all = 0x0000;     // GPIO functionality GPIO80-GPIO95

	GpioCtrlRegs.GPADIR.all = 0x0000;      // GPIO0-GPIO31 are inputs
	GpioCtrlRegs.GPBDIR.all = 0x0000;      // GPIO32-GPIO63 are inputs
	GpioCtrlRegs.GPCDIR.all = 0x0000;      // GPI064-GPIO95 are inputs

	// Each input can have different qualification
	// a) input synchronized to SYSCLKOUT
	// b) input qualified by a sampling window
	// c) input sent asynchronously (valid for peripheral inputs only)
	GpioCtrlRegs.GPAQSEL1.all = 0x0000;    // GPIO0-GPIO15 Synch to SYSCLKOUT
	GpioCtrlRegs.GPAQSEL2.all = 0x0000;    // GPIO16-GPIO31 Synch to SYSCLKOUT
	GpioCtrlRegs.GPBQSEL1.all = 0x0000;    // GPIO32-GPIO39 Synch to SYSCLKOUT
	GpioCtrlRegs.GPBQSEL2.all = 0x0000;    // GPIO48-GPIO63 Synch to SYSCLKOUT

	// Pull-ups can be enabled or disabled.
	GpioCtrlRegs.GPAPUD.all = 0x0000;      // Pullup's enabled GPIO0-GPIO31
	GpioCtrlRegs.GPBPUD.all = 0x0000;      // Pullup's enabled GPIO32-GPIO63
	GpioCtrlRegs.GPCPUD.all = 0x0000;      // Pullup's enabled GPIO64-GPIO79

	//GpioCtrlRegs.GPAPUD.all = 0xFFFF;    // Pullup's disabled GPIO0-GPIO31
	//GpioCtrlRegs.GPBPUD.all = 0xFFFF;    // Pullup's disabled GPIO32-GPIO34
	//GpioCtrlRegs.GPCPUD.all = 0xFFFF     // Pullup's disabled GPIO64-GPIO79




	GpioCtrlRegs.GPAMUX1.all = 0x0000;     	// GPIO functionality GPIO00-GPIO15
	GpioCtrlRegs.GPAMUX2.all = 0x0000;     	// GPIO functionality GPIO16-GPIO31
	GpioCtrlRegs.GPBMUX1.all = 0x0000;     	// GPIO functionality GPIO23-GPIO47
	GpioCtrlRegs.GPBMUX2.all = 0x0000;     	// GPIO functionality GPIO48-GPIO63
	GpioCtrlRegs.GPCMUX1.all = 0x0000;     	// GPIO functionality GPIO64-GPIO79
	GpioCtrlRegs.GPCMUX2.all = 0x0000;     	// GPIO functionality GPIO80-GPIO95



	// Each GPIO pin can be:
	// a) a GPIO input/output
	// b) peripheral function 1
	// c) peripheral function 2
	// d) peripheral function 3
	// By default, all are GPIO Inputs

	//-------------------------------------------------------------------------------
	// MUX REGS
	//-------------------------------------------------------------------------------
	//        31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16
	// GPIOA  0  1  0  1  0  1  0  1  0  1  0  1  0  1  0  1
	//        15 14 13 12 11 10 9  8  7  6  5  4  3  2  1  0
	//        0  1  0  1  0  0  0  1  0  1  0  1  0  1  0  1
	// Todos pinos configurados para as fun��es ligadas a PWM

	//-----------------------------------------------
	// Delta - Configurados como I/O e deixados em 0
	//-----------------------------------------------

	GpioCtrlRegs.GPAMUX1.bit.GPIO0=0;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO1=0;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO4=0;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO5=0;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO8=0;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO9=0;		// Fase ?

	GpioDataRegs.GPACLEAR.bit.GPIO0=1;
	GpioDataRegs.GPACLEAR.bit.GPIO1=1;
	GpioDataRegs.GPACLEAR.bit.GPIO4=1;
	GpioDataRegs.GPACLEAR.bit.GPIO5=1;
	GpioDataRegs.GPACLEAR.bit.GPIO8=1;
	GpioDataRegs.GPACLEAR.bit.GPIO9=1;

	GpioCtrlRegs.GPADIR.bit.GPIO0=1;	// Sa�da
	GpioCtrlRegs.GPADIR.bit.GPIO1=1;	// Sa�da
	GpioCtrlRegs.GPADIR.bit.GPIO4=1;	// Sa�da
	GpioCtrlRegs.GPADIR.bit.GPIO5=1;	// Sa�da
	GpioCtrlRegs.GPADIR.bit.GPIO8=1;	// Sa�da
	GpioCtrlRegs.GPADIR.bit.GPIO9=1;	// Sa�da

	//-----------------------------------------------
	// VSI-2L
	//-----------------------------------------------

	GpioCtrlRegs.GPAMUX1.bit.GPIO2=1;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO3=1;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO6=1;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO7=1;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO10=1;		// Fase ?
	GpioCtrlRegs.GPAMUX1.bit.GPIO11=1;		// Fase ?

	//-----------------------------------------------
	// LEDS
	//-----------------------------------------------

	GpioCtrlRegs.GPAMUX2.bit.GPIO31=0;		//LED_2KIT
	GpioCtrlRegs.GPBMUX1.bit.GPIO34=0;		//LED_3KIT
	GpioCtrlRegs.GPBMUX2.bit.GPIO60=0;		//LED_1
	GpioCtrlRegs.GPBMUX2.bit.GPIO61=0;		//LED_2
	GpioCtrlRegs.GPBMUX2.bit.GPIO62=0;		//LED_3
	GpioCtrlRegs.GPBMUX2.bit.GPIO63=0;		//LED_4

	GpioCtrlRegs.GPADIR.bit.GPIO31=1;	  // GPIO31 (LED2 kit)
	GpioCtrlRegs.GPBDIR.bit.GPIO34=1;	  // GPIO34 (LED3 kit)
	GpioCtrlRegs.GPBDIR.bit.GPIO60=1;	  // LED
	GpioCtrlRegs.GPBDIR.bit.GPIO61=1;	  // LED
	GpioCtrlRegs.GPBDIR.bit.GPIO62=1;	  // LED
	GpioCtrlRegs.GPBDIR.bit.GPIO63=1;	  // LED


	//-----------------------------------------------
	// RELAY
	//-----------------------------------------------
	GpioCtrlRegs.GPBDIR.bit.GPIO49=1;	  // RELAY
	//-----------------------------------------------
	// Switches
	//-----------------------------------------------

	GpioCtrlRegs.GPBMUX2.bit.GPIO58=0;		//SWITCH_SW1
	GpioCtrlRegs.GPBMUX2.bit.GPIO59=0;		//SWITCH_SW2

	GpioCtrlRegs.GPBDIR.bit.GPIO58 = 0;    // SWITCH_RESET
	GpioCtrlRegs.GPBDIR.bit.GPIO59 = 0;    // SWITCH_TURNOFF

	GpioCtrlRegs.GPBPUD.bit.GPIO58 = 0;    // Pullup's enable for SWITCH_RESET
	GpioCtrlRegs.GPBPUD.bit.GPIO59 = 0;    // Pullup's enable for SWITCH_TURNOFF

	//-------------------------------------------------------------------------------
	// QUAL REGS
	//-------------------------------------------------------------------------------

	// Each input can have different qualification
	// a) input synchronized to SYSCLKOUT
	// b) input qualified by a sampling window
	// c) input sent asynchronously (valid for peripheral inputs only)

	GpioCtrlRegs.GPAQSEL1.all = 0x0000;    // GPIO0-GPIO15 Synch to SYSCLKOUT
	GpioCtrlRegs.GPAQSEL2.all = 0x0000;    // GPIO16-GPIO31 Synch to SYSCLKOUT
	GpioCtrlRegs.GPBQSEL1.all = 0x0000;    // GPIO32-GPIO39 Synch to SYSCLKOUT
	GpioCtrlRegs.GPBQSEL2.all = 0x0000;    // GPIO48-GPIO63 Synch to SYSCLKOUT


	GpioCtrlRegs.GPAQSEL2.bit.GPIO24=1;    // GPIO0-GPIO15 Synch to SYSCLKOUT
	GpioCtrlRegs.GPAQSEL2.bit.GPIO25=1;    // GPIO0-GPIO15 Synch to SYSCLKOUT
	GpioCtrlRegs.GPAQSEL1.bit.GPIO12=1;	  // for tripzone qualification


	GpioCtrlRegs.GPACTRL.bit.QUALPRD3=100;  // 1us for switches qualification
	GpioCtrlRegs.GPACTRL.bit.QUALPRD1=100;  // 1us for switches qualification

	//-------------------------------------------------------------------------------
	// PULLuPS REGS
	//-------------------------------------------------------------------------------

	// Pull-ups can be enabled or disabled.

	GpioCtrlRegs.GPAPUD.all = 0xFFFF;     // Pullup's disabled GPIO0-GPIO31
	GpioCtrlRegs.GPBPUD.all = 0xFFFF;     // Pullup's disabled GPIO32-GPIO34
	GpioCtrlRegs.GPCPUD.all = 0xFFFF;     // Pullup's disabled GPIO64-GPIO79



	GpioDataRegs.GPACLEAR.bit.GPIO31 =1;
	//  GpioDataRegs.GPASET.bit.GPIO31 = 1;


	//  GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
	GpioDataRegs.GPBSET.bit.GPIO34 = 1;


	EDIS;

}	

//===========================================================================
// End of file.
//===========================================================================
