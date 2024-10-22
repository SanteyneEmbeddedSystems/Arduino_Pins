#include "Arduino_Analog_Input_Pin_5.h"


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void AAIP5__Analog_Pin__Get_Voltage(
    const Arduino_Analog_Input_Pin_5* Me,
    T_Pin_Voltage_5* voltage )
{
    *voltage = analogRead( Me->Arduino_Pin_Id );
}