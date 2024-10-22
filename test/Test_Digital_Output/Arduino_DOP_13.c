#include "Arduino_DOP_13.h"

const Arduino_Digital_Output_Pin Arduino_DOP_13 =
{
    .Arduino_Pin_Id = 13
};

static void Arduino_DOP_13__Digital_Output_Set_Level( E_IO_Level level )
{
    ADOP__Digital_Pin__Set_Level( &Arduino_DOP_13, level );
}

const Digital_Output Arduino_DOP_13__Digital_Output = 
{
    .Set_Level = Arduino_DOP_13__Digital_Output_Set_Level
};