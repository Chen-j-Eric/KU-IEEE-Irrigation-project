# KU-IEEE-Irrigation-project
This is the place where we will post/edit the code for our IEEE project,the code should be written in Arduino IDE version 2.3.6, Using ESP-32 plugin from Espressif 3.3.2. We received funding from KU IEEE to build this project to present it at KU Engineering Expo.

Major thanks to: **Noah Hickman and Joe Lieber for helping me make the project come to life**

# Meetings
Thursdays from 5:00PM - 6PM LEEP 132X

# Parts List
- Freenove ESP32 Board
- 12" Watering Plant Container with Drainage Hole
- 4PC DC Motor
- 5V Relay | 4 Channel
- Gravity: IP65 Capacitive Soil Moisture Sensor
- 5 Herb Seeds Variety Kit

Things that are still up in the air that we are still deciding on
- Water Tank Sensor (ensuring that we do not fry our motors if the tank runs out of water)
- Size of the water tank
- 5v grow lights on top, the relay can switch then off and on to make sure our herbs are able to grow
- Using another ESP32 to add features such as air quality sensors, sunlight sensor or anything that we would want to add

# Freenove ESP32 Board
Because the Freenove is not as popular as some other ESP32s, You will have to compile and run it like a generic ESP32 dev board, On linux(Fedora 42), you may have to give the your board/Usb sudo or R+W permissions otherwise it will not be able to flash your code into the board. 

However, using this board has it's upsides, we are able to screw in the Dupoint wires ensuring that the project can be a long term project. This allows us to build a enclosure that allows us to have a finished project rather than a breadboard where wires can become loose. Once the project is closer to being done the CAD files for the encloser will be in the Github. 




