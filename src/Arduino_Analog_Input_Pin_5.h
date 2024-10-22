#ifndef ARDUINO_ANALOG_INPUT_PIN_5_H
#define ARDUINO_ANALOG_INPUT_PIN_5_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Attributes */
#include <stdint.h>
#include "Arduino.h" /* pin ID */


/* Realized interfaces */
#include "Analog_Input_5.h"


/*============================================================================*/
/* Types */
/*============================================================================*/
typedef uint8_t Analog_Pin_Id;
#define ANALOG_PIN_0  PIN_A0
#define ANALOG_PIN_1  PIN_A1
#define ANALOG_PIN_2  PIN_A2
#define ANALOG_PIN_3  PIN_A3
#define ANALOG_PIN_4  PIN_A4
#define ANALOG_PIN_5  PIN_A5
#define ANALOG_PIN_6  PIN_A6
#define ANALOG_PIN_7  PIN_A7
#define ANALOG_PIN_8  PIN_A8
#define ANALOG_PIN_9  PIN_A9
#define ANALOG_PIN_10 PIN_A10
#define ANALOG_PIN_11 PIN_A11
#define ANALOG_PIN_12 PIN_A12
#define ANALOG_PIN_13 PIN_A13
#define ANALOG_PIN_14 PIN_A14
#define ANALOG_PIN_15 PIN_A15


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Configuration_Parameter */
    const Analog_Pin_Id Arduino_Pin_Id;

} Arduino_Analog_Input_Pin_5;


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void AAIP5__Analog_Pin__Get_Voltage( 
    const Arduino_Analog_Input_Pin_5* Me,
    T_Pin_Voltage_5* voltage );


#endif