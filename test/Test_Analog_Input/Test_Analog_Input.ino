extern "C" {
    #include "Arduino_AIP_0.h"
}

void setup( void )
{
    Serial.begin(9600);
    while (!Serial) {
    }
    Serial.println("Serial communication ready");
}

void loop( void )
{
    T_Pin_Voltage_5 voltage;

    Arduino_AIP_0__Analog_Input.Get_Voltage( &voltage );
    Serial.println(voltage);
    delay(500);
}