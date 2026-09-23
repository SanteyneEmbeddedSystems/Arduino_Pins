# Arduino_Pins

This repository defines a package gathering software elements allowing to
abstract the Arduino plateform for hardware I/O management.

## Content

### Arduino_Digital_Output_Pin

![Arduino_Digital_Output_Pin overview](doc/Arduino_Digital_Output_Pin.svg)

#### Configuration_Parameters

| Name  | Type | Description |
|:----|:----|:----|
| Arduino_Pin_Id | uint8 | Identifier of the digital pin of the Arduino board.<br>From 0 to 69. |

#### OS_Operations

| Name  | Description |
|:----|:----|
| Configure_Pin | Allows to configure the pin of the Arduino board (identified by Arduino_Pin_Id) as an output pin.<br>This operation shall be called once at initialization, before setting the level of the pin. |

### Arduino_Analog_Input_Pin_5

![Arduino_Analog_Input_Pin_5 overview](doc/Arduino_Analog_Input_Pin_5.svg)

#### Configuration_Parameters

| Name  | Type | Description |
|:----|:----|:----|
| Arduino_Pin_Id | Analog_Pin_Id | Identifier of the analog  pin of the Arduino board. |

### Arduino_Digital_Input_Pin

![Arduino_Digital_Input_Pin overview](doc/Arduino_Digital_Input_Pin.svg)

#### Configuration_Parameters

| Name  | Type | Description |
|:----|:----|:----|
| Arduino_Pin_Id | uint8 | Identifier of the digital pin of the Arduino board.<br>From 0 to 69. |
| Pin_Has_Pull_Up | bool | Allows to turn on an internal resistor that connects the digital pin to the board's voltage supply. |

#### OS_Operations

| Name  | Description |
|:----|:----|
| Configure_Pin | Allows to configure the pin of the Arduino board (identified by Arduino_Pin_Id) as an input pin.<br>This operation shall be called once at initialization, before reading the level of the pin. |

## Dependencies

* Hardware_IO_Interfaces : https://github.com/SanteyneEmbeddedSystems/Hardware_IO_Interfaces/releases/tag/v2.0.0

## Use

### With the Arduino IDE

This repository shall be clone within the _libraries_ folder of the _Arduino
sketchbook folder_.