#include "Arduino_AIP_0.h"

const Arduino_Analog_Input_Pin_5 Arduino_AIP_0 =
{
    .Arduino_Pin_Id = ANALOG_PIN_0
};

static Arduino_AIP_0__Analog_Input__Get_Voltage( T_Pin_Voltage_5* voltage )
{
    AAIP5__Analog_Pin__Get_Voltage( &Arduino_AIP_0, voltage );
}

const Analog_Input_5 Arduino_AIP_0__Analog_Input = 
{
    .Get_Voltage = Arduino_AIP_0__Analog_Input__Get_Voltage
};