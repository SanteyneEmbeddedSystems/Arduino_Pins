#include "Arduino_DIP_11.h"

const Arduino_Digital_Input_Pin Arduino_DIP_11 =
{
    .Arduino_Pin_Id = 11,
    .Pin_Has_Pull_Up = 1
};

static void Arduino_DIP_11__Digital_Input_Get_Level( E_IO_Level* level )
{
    ADIP__Digital_Pin__Get_Level( &Arduino_DIP_11, level );
}

const Digital_Input Arduino_DIP_11__Digital_Input = 
{
    .Get_Level = Arduino_DIP_11__Digital_Input_Get_Level
};