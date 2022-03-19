/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16LF1939
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set REL1 aliases
#define REL1_TRIS                 TRISAbits.TRISA0
#define REL1_LAT                  LATAbits.LATA0
#define REL1_PORT                 PORTAbits.RA0
#define REL1_ANS                  ANSELAbits.ANSA0
#define REL1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define REL1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define REL1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define REL1_GetValue()           PORTAbits.RA0
#define REL1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define REL1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define REL1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define REL1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set REL2 aliases
#define REL2_TRIS                 TRISAbits.TRISA1
#define REL2_LAT                  LATAbits.LATA1
#define REL2_PORT                 PORTAbits.RA1
#define REL2_ANS                  ANSELAbits.ANSA1
#define REL2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define REL2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define REL2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define REL2_GetValue()           PORTAbits.RA1
#define REL2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define REL2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define REL2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define REL2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set VIN1 aliases
#define VIN1_TRIS                 TRISBbits.TRISB0
#define VIN1_LAT                  LATBbits.LATB0
#define VIN1_PORT                 PORTBbits.RB0
#define VIN1_WPU                  WPUBbits.WPUB0
#define VIN1_ANS                  ANSELBbits.ANSB0
#define VIN1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define VIN1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define VIN1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define VIN1_GetValue()           PORTBbits.RB0
#define VIN1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define VIN1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define VIN1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define VIN1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define VIN1_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define VIN1_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

// get/set IN1 aliases
#define IN1_TRIS                 TRISDbits.TRISD0
#define IN1_LAT                  LATDbits.LATD0
#define IN1_PORT                 PORTDbits.RD0
#define IN1_ANS                  ANSELDbits.ANSD0
#define IN1_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IN1_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IN1_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IN1_GetValue()           PORTDbits.RD0
#define IN1_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IN1_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IN1_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define IN1_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set IN2 aliases
#define IN2_TRIS                 TRISDbits.TRISD2
#define IN2_LAT                  LATDbits.LATD2
#define IN2_PORT                 PORTDbits.RD2
#define IN2_ANS                  ANSELDbits.ANSD2
#define IN2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IN2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IN2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IN2_GetValue()           PORTDbits.RD2
#define IN2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IN2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IN2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define IN2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/