#define PIN_RELAY_1  16 
#define PIN_RELAY_2  17 
// Unused relay, can be turned on if needed
#define PIN_RELAY_3  18 
#define PIN_RELAY_4  19 
#define AOUT_PIN1 34 
#define AOUT_PIN2 35 

#define DRYNESS 2200 // ESP32 pin GPIO34 (ADC0) that connects to AOUT pin of moisture sensor
const int FLOATSENSOR = 12;
bool float_Status = true;


#include "thingProperties.h"
void setup() {
  Serial.begin(9600);
  // initialize digital pin as an output.
  pinMode(PIN_RELAY_1, OUTPUT);
  pinMode(PIN_RELAY_2, OUTPUT);
  pinMode(FLOATSENSOR, INPUT_PULLUP);

  initProperties();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}
void loop() {



  float_Status = digitalRead(FLOATSENSOR);

  if (float_Status == HIGH){
    float_Sensor = true;
  }else {
    float_Sensor = false;
  }
// these should be wrapped into a function, having code like this is not great
// classes aren't neeeded but I will think about maybe writing one if time permits

  int value1 = analogRead(AOUT_PIN1); // read the analog value from sensor;
  
  if ((value1 > DRYNESS) && (float_Sensor == true)){
  digitalWrite(PIN_RELAY_1, LOW);
  }else{
  digitalWrite(PIN_RELAY_1, HIGH);
  }


// class/function
  int value2 = analogRead(AOUT_PIN2); // read the analog value from sensor
  
  if ((value2 > DRYNESS) && (float_Sensor == true)){
  digitalWrite(PIN_RELAY_2, LOW);
  }else{
  digitalWrite(PIN_RELAY_2, HIGH);
  }

    // calls function that allows internal data to be exported into arduino IOT
  soil_Dryness_1 = value1;
  soil_Dryness_2 = value2;
  ArduinoCloud.update();

  
 }

void onWaterOn1Change() {
  if (water_On_1) {
    digitalWrite(PIN_RELAY_1, LOW);
    delay(3000);
    digitalWrite(PIN_RELAY_1, HIGH);
    water_On_1 = false;
  }
}

void onWaterOn2Change() {
  if (water_On_2) {
    digitalWrite(PIN_RELAY_2, LOW);
    delay(3000);
    digitalWrite(PIN_RELAY_2, HIGH);
    water_On_2 = false;
  }
}

