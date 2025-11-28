#define PIN_RELAY_1  16 // The ESP32 pin GPIO16 connected to the IN1 pin of relay module
#define PIN_RELAY_2  17 // The ESP32 pin GPIO17 connected to the IN2 pin of relay module
// Unused relay, can be turned on if needed
#define PIN_RELAY_3  18 // The ESP32 pin GPIO18 connected to the IN3 pin of relay module
#define PIN_RELAY_4  19 // The ESP32 pin GPIO19 connected to the IN4 pin of relay module
#define AOUT_PIN1 36 // ESP32 pin GPIO36 (ADC0) that connects to AOUT pin of moisture sensor
#define AOUT_PIN2 34 // ESP32 pin GPIO34 (ADC0) that connects to AOUT pin of moisture sensor


#include <iostream>
#include <string>
using namespace std;

class MyClass { 
  public:             
    int myNum;

    bool active_pump(int myNum, int PIN_RELAY) {
      if (myNum < 2200) {
        digitalWrite(PIN_RELAY, HIGH); // turn pump ON
        delay(1000);
        return true;
      } 
      else {
        digitalWrite(PIN_RELAY, LOW); // turn pump OFF
        return false;
      }
    }
};

void setup() {
  Serial.begin(9600);

  // initialize digital pin as an output.
  pinMode(PIN_RELAY_1, OUTPUT);
  pinMode(PIN_RELAY_2, OUTPUT);
  
}


void loop() {
  MyClass myObj1;
  MyClass myObj2;

  int value1 = analogRead(AOUT_PIN1);
  int value2 = analogRead(AOUT_PIN2);
  myObj1.myNum = value1;
  myObj2.myNum = value2;

  bool pumpState1 = myObj1.active_pump(value1, PIN_RELAY_1); // call function
  bool pumpState2 = myObj2.active_pump(value2, PIN_RELAY_2); // call function
}
