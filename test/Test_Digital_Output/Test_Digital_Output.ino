extern "C" {
    #include "Arduino_DOP_13.h"
}

void setup( void )
{
    ADOP__Configure_Pin( &Arduino_DOP_13 );
}


void loop( void )
{
    Arduino_DOP_13__Digital_Output.Set_Level(IO_LEVEL_HIGH);
    delay(500);
    Arduino_DOP_13__Digital_Output.Set_Level(IO_LEVEL_LOW);
    delay(500);
}