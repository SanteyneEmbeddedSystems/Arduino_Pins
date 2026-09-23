extern "C" {
    #include "Arduino_DIP_11.h"
}

void setup( void )
{
    ADIP__Configure_Pin( &Arduino_DIP_11 );

    pinMode(13,OUTPUT); // LED of Leonardo board
}


void loop( void )
{
    E_IO_Level level = IO_LEVEL_LOW;
    Arduino_DIP_11__Digital_Input.Get_Level(&level);
    if( IO_LEVEL_HIGH==level)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);
    }
}