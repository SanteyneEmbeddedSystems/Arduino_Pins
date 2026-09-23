#ifndef ARDUINO_DIGITAL_INPUT_PIN_H
#define ARDUINO_DIGITAL_INPUT_PIN_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Attributes */
#include <stdint.h>


/* Realized interfaces */
#include "Digital_Input.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Configuration_Parameter */
    const uint8_t Arduino_Pin_Id:7;
    const uint8_t Pin_Has_Pull_Up:1;

} Arduino_Digital_Input_Pin;


/*============================================================================*/
/* Component_Operations */
/*============================================================================*/
void ADIP__Configure_Pin( const Arduino_Digital_Input_Pin* Me );


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void ADIP__Digital_Pin__Get_Level( 
    const Arduino_Digital_Input_Pin* Me,
    E_IO_Level* level );


#endif