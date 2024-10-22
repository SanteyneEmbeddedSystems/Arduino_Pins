#ifndef ARDUINO_DIGITAL_OUTPUT_PIN_H
#define ARDUINO_DIGITAL_OUTPUT_PIN_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Attributes */
#include <stdint.h>


/* Realized interfaces */
#include "Digital_Output.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Configuration_Parameter */
    const uint8_t Arduino_Pin_Id;

} Arduino_Digital_Output_Pin;


/*============================================================================*/
/* Component_Operations */
/*============================================================================*/
void ADOP__Configure_Pin( const Arduino_Digital_Output_Pin* Me );


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void ADOP__Digital_Pin__Set_Level( 
    const Arduino_Digital_Output_Pin* Me,
    E_IO_Level level );


#endif