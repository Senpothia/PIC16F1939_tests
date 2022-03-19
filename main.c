/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16LF1939
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
//#include "config.h"
#include "I2C_LCD.h"

/*
                         Main application
 */
void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();


    int lectureAN1;
    unsigned char reception;

    // lCD
    I2C_Master_Init();
    LCD_Init(0x4E); // Initialize LCD module with I2C address = 0x4E

    LCD_Set_Cursor(1, 1);
    LCD_Write_String("Bonjour Esteban");
    LCD_Set_Cursor(2, 1);
    LCD_Write_String("Coucou!");
    __delay_ms(200);


    while (1) {

        __delay_ms(5000);

        I2C_Master_Init();
        LCD_Init(0x4E); // Initialize LCD module with I2C address = 0x4E

        LCD_Set_Cursor(1, 1);
        LCD_Write_String("Salut Esteban");
        LCD_Set_Cursor(2, 1);
        LCD_Write_String("Coucou mon fils!");
        __delay_ms(200);

        if (IN1_GetValue() == 0) {

            REL1_SetHigh();
            __delay_ms(1000);
            REL1_SetLow();

        }

        // Lecture analogique

        lectureAN1 = ADC_GetConversion(VIN1);
        if (lectureAN1 < 500) {


            REL1_SetHigh();

        } else {

            REL1_SetLow();

        }

        // Transmission TX

        if (IN2_GetValue() == 0) {

            REL2_SetHigh();
            // EUSART_Write('A');  // send a byte to TX  (from Rx)
            printf("Hello!\r\n");
            __delay_ms(1000);
            REL2_SetLow();

            while (IN2_GetValue() == 0) {
            }

        }

        // Réception RX

        if (eusartRxCount != 0) {
            reception = EUSART_Read(); // read a byte for RX

            switch (reception) // check command  
            {
                case '1':
                {

                    REL2_SetHigh();
                    printf(" -> LED ON!!\r\n");
                    break;
                }

                case '0':
                {

                    REL2_SetLow();
                    printf(" -> LED OFF!!\r\n");
                    break;
                }
            }

        }


        // lCD
        /*
        I2C_Master_Init();
        // LCD_Init(0x4E); // Initialize LCD module with I2C address = 0x4E

        LCD_Set_Cursor(1, 1);
        LCD_Write_String("Bonjour Esteban");
        LCD_Set_Cursor(2, 1);
        LCD_Write_String("Coucou!");
        __delay_ms(200);
         */

        /*
        while (1) {
            LCD_SR();
            __delay_ms(350);
            LCD_SR();
            __delay_ms(350);
            LCD_SL();
            __delay_ms(350);
            LCD_SL();
            __delay_ms(350);
        }
        
         */


        // fin LCD




    } // fin boucle infinie





} // fin fonction main

/**
 End of File
 */