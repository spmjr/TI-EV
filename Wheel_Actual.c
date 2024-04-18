#include "driverlib.h"
#include "device.h"
#include "board.h"
#include <stdbool.h>
#include <time.h>
#include<stdio.h>
#include<stdlib.h>

// Define loops
# define LOOP_COUNT 10
//

// Function //
//void delay(int number_of_seconds)
//{
//    // Converting time into milli_seconds
//    int milli_seconds = 1000 * number_of_seconds;
//
//    // Storing start time
//    clock_t start_time = clock();
//
//    // looping till required time is not achieved
//    while (clock() < start_time + milli_seconds) ;
//}

//
// Main
//
void main(void)
{
//
    // Device Initialization
    Device_init();

//
//    //
//    // Initializes PIE and clears PIE registers. Disables CPU interrupts.
//    //
    Interrupt_initModule();
//
//    //
//    // Initializes the PIE vector table with pointers to the shell Interrupt
//    // Service Routines (ISR).
//    //
    Interrupt_initVectorTable();
//
	Board_init();
//
//    //
//    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
//    //
    EINT;
    ERTM;
//
//    while(1)
//    {
//    }

	for(;;){
	    //case(000)
	        GPIO_writePin(myGPIO0, 0);
	        GPIO_writePin(myGPIO1, 1);
	        GPIO_writePin(myGPIO2, 0);
	        GPIO_writePin(myGPIO3, 1);
	        GPIO_writePin(myGPIO4, 0);
	        GPIO_writePin(myGPIO5, 1);
	        DEVICE_DELAY_US(500000);
	      //case (100)
	        GPIO_writePin(myGPIO0, 1);
	        GPIO_writePin(myGPIO2, 1);
	        GPIO_writePin(myGPIO1, 0);
	        GPIO_writePin(myGPIO3, 1);
	        GPIO_writePin(myGPIO4, 0);
	        GPIO_writePin(myGPIO5, 0);
	        DEVICE_DELAY_US(500000);
	      //case (110)
	        GPIO_writePin(myGPIO0, 1);
	        GPIO_writePin(myGPIO2, 1);
	        GPIO_writePin(myGPIO1, 1);
	        GPIO_writePin(myGPIO3, 0);
	        GPIO_writePin(myGPIO4, 0);
	        GPIO_writePin(myGPIO5, 0);
	        DEVICE_DELAY_US(500000);
	      //case (010)
	        GPIO_writePin(myGPIO0, 0);
	        GPIO_writePin(myGPIO2, 1);
	        GPIO_writePin(myGPIO1, 1);
	        GPIO_writePin(myGPIO3, 0);
	        GPIO_writePin(myGPIO4, 0);
	        GPIO_writePin(myGPIO5, 1);
	        DEVICE_DELAY_US(500000);
	      //case (011)
	        GPIO_writePin(myGPIO0, 0);
	        GPIO_writePin(myGPIO2, 0);
	        GPIO_writePin(myGPIO1, 1);
	        GPIO_writePin(myGPIO3, 0);
	        GPIO_writePin(myGPIO4, 0);
	        GPIO_writePin(myGPIO5, 0);
	        DEVICE_DELAY_US(500000);
	      //case (001)
	        GPIO_writePin(myGPIO0, 0);
	        GPIO_writePin(myGPIO2, 0);
	        GPIO_writePin(myGPIO1, 0);
	        GPIO_writePin(myGPIO3, 1);
	        GPIO_writePin(myGPIO4, 1);
	        GPIO_writePin(myGPIO5, 1);
	        DEVICE_DELAY_US(500000);
	       //case (101)
	        GPIO_writePin(myGPIO0, 1);
	        GPIO_writePin(myGPIO2, 0);
	        GPIO_writePin(myGPIO1, 0);
	        GPIO_writePin(myGPIO3, 1);
	        GPIO_writePin(myGPIO4, 1);
	        GPIO_writePin(myGPIO5, 0);
	        DEVICE_DELAY_US(500000);
	       //case (111)
	        GPIO_writePin(myGPIO0, 1);
	        GPIO_writePin(myGPIO2, 0);
	        GPIO_writePin(myGPIO1, 1);
	        GPIO_writePin(myGPIO3, 0);
	        GPIO_writePin(myGPIO4, 1);
	        GPIO_writePin(myGPIO5, 0);
	        DEVICE_DELAY_US(500000);
	 }

}

__interrupt void INT_Led_Toggle_Timer_ISR(void)
{
    //GPIO_writePin(myGPIO0, 1);
    //GPIO_writePin(myGPIO2, 1);
   // GPIO_togglePin(myGPIO0);
    //GPIO_writePin(myGPIO1, 0);
   //GPIO_togglePin(myGPIO3);
   //GPIO_togglePin(myGPIO4);
    //GPIO_togglePin(myGPIO5);
    //Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
    //for(;;){
//        GPIO_writePin(myGPIO0, 1);
//        GPIO_writePin(myGPIO2, 1);
//        GPIO_writePin(myGPIO1, 1);
//        GPIO_writePin(myGPIO3, 1);
//        GPIO_writePin(myGPIO4, 1);
//        GPIO_writePin(myGPIO5, 1);
//        delay(1);
//        //Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//        GPIO_writePin(myGPIO0, 0);
//        GPIO_writePin(myGPIO2, 0);
//        GPIO_writePin(myGPIO1, 0);
//        GPIO_writePin(myGPIO3, 0);
//        GPIO_writePin(myGPIO4, 0);
//        GPIO_writePin(myGPIO5, 0);
        //Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//        delay(1);
//        //
//        GPIO_writePin(myGPIO0, 0);
//        GPIO_writePin(myGPIO2, 0);
//        GPIO_writePin(myGPIO1, 1);
    //}

//switch(1){
//        case 1: //(000)
//            GPIO_writePin(myGPIO0, 1);
//            GPIO_writePin(myGPIO2, 1);
//            GPIO_writePin(myGPIO1, 0);
//                 GPIO_togglePin(myGPIO2,1);
//                 GPIO_togglePin(myGPIO0,1);
//                 GPIO_togglePin(myGPIO1,1);
//                 GPIO_togglePin(myGPIO3,1);
//                 GPIO_togglePin(myGPIO4,1);
//                 GPIO_togglePin(myGPIO5,1);
//         Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//       case 2: //(100)
//           GPIO_writePin(myGPIO0, 0);
//           GPIO_writePin(myGPIO2, 0);
//           GPIO_writePin(myGPIO1, 1);
//                         GPIO_togglePin(myGPIO2,1);
//                         GPIO_togglePin(myGPIO0,1);
//                         GPIO_togglePin(myGPIO1,1);
//                         GPIO_togglePin(myGPIO3,1);
//                         GPIO_togglePin(myGPIO4,1);
//                         GPIO_togglePin(myGPIO5,1);
//                 Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//    case 3: //(110)
//                         GPIO_togglePin(myGPIO2,1);
//                         GPIO_togglePin(myGPIO0,1);
//                         GPIO_togglePin(myGPIO1,1);
//                         GPIO_togglePin(myGPIO3,1);
//                         GPIO_togglePin(myGPIO4,1);
//                         GPIO_togglePin(myGPIO5,1);
//                 Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//    case 4: //(010)
//                         GPIO_togglePin(myGPIO2,1);
//                         GPIO_togglePin(myGPIO0,1);
//                         GPIO_togglePin(myGPIO1,1);
//                         GPIO_togglePin(myGPIO3,1);
//                         GPIO_togglePin(myGPIO4,1);
//                         GPIO_togglePin(myGPIO5,1);
//                 Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//    case 5: //(011)
//                         GPIO_togglePin(myGPIO2,1);
//                         GPIO_togglePin(myGPIO0,1);
//                         GPIO_togglePin(myGPIO1,1);
//                         GPIO_togglePin(myGPIO3,1);
//                         GPIO_togglePin(myGPIO4,1);
//                         GPIO_togglePin(myGPIO5,1);
//                 Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//    case 6: //(001)
//                         GPIO_togglePin(myGPIO2,1);
//                         GPIO_togglePin(myGPIO0,1);
//                         GPIO_togglePin(myGPIO1,1);
//                         GPIO_togglePin(myGPIO3,1);
//                         GPIO_togglePin(myGPIO4,1);
//                         GPIO_togglePin(myGPIO5,1);
//                 Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//    case 7: //(101)
//                         GPIO_togglePin(myGPIO2,1);
//                         GPIO_togglePin(myGPIO0,1);
//                         GPIO_togglePin(myGPIO1,1);
//                         GPIO_togglePin(myGPIO3,1);
//                         GPIO_togglePin(myGPIO4,1);
//                         GPIO_togglePin(myGPIO5,1);
//                 Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
//    case 8://(111)
//                         GPIO_togglePin(myGPIO2,1);
//                         GPIO_togglePin(myGPIO0,1);
//                         GPIO_togglePin(myGPIO1,1);
//                         GPIO_togglePin(myGPIO3,1);
//                         GPIO_togglePin(myGPIO4,1);
//                         GPIO_togglePin(myGPIO5,1);
//                 Interrupt_clearACKGroup(INT_Led_Toggle_Timer_INTERRUPT_ACK_GROUP);
    //}

}

//
// End of File
//
