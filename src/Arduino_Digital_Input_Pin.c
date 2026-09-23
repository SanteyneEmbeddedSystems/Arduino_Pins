#include "Arduino_Digital_Input_Pin.h"

#include "Arduino.h" /* pinMode, digitalRead */


/*============================================================================*/
/* OS_Operations */
/*============================================================================*/
void ADIP__Configure_Pin( const Arduino_Digital_Input_Pin* Me )
{
    uint8_t mode = INPUT;
    if( true==Me->Pin_Has_Pull_Up )
    {
        mode = INPUT_PULLUP;
    }
    pinMode( Me->Arduino_Pin_Id, mode );
}


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void ADIP__Digital_Pin__Get_Level( 
    const Arduino_Digital_Input_Pin* Me,
    E_IO_Level* level )
{

    if( HIGH==digitalRead( Me->Arduino_Pin_Id ) )
    {
        *level = IO_LEVEL_HIGH;
    }
    else
    {
        *level = IO_LEVEL_LOW;
    }  
}
