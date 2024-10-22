#include "Arduino_Digital_Output_Pin.h"

#include "Arduino.h" /* pinMode, digitalWrite */


/*============================================================================*/
/* OS_Operations */
/*============================================================================*/
void ADOP__Configure_Pin( const Arduino_Digital_Output_Pin* Me )
{
    pinMode( Me->Arduino_Pin_Id, OUTPUT );
}


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void ADOP__Digital_Pin__Set_Level( 
    const Arduino_Digital_Output_Pin* Me,
    E_IO_Level level )
{
    if( level==IO_LEVEL_LOW )
    {
        digitalWrite( Me->Arduino_Pin_Id, LOW );
    }
    else
    {
        digitalWrite( Me->Arduino_Pin_Id, HIGH );
    }
}
