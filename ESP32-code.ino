const int PIN_RELAY_1 = 16;
const int PIN_RELAY_2 = 17;
const int PIN_RELAY_3 = 18;
const int PIN_RELAY_4 = 19;
const int AOUT_PIN1   = 36;
const int AOUT_PIN2   = 34;

const int MOISTURE_THRESHOLD = 2200; //2200 is dry soil about 39% wet (3600/36)
const int WATERING_TIME = 1000; // Measured in milliseconds


class PlantZone { 
  public:             
    int Moisture_Value;
    int PIN_RELAY;

    bool active_pump(int myNum, int PIN_RELAY) {
      if (Moisture_Value < MOISTURE_THRESHOLD) {
        digitalWrite(PIN_RELAY, HIGH); // turn pump ON
        delay(WATERING_TIME); // you have to give it a delay or else it goes crazy
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
  PlantZone myPlant1;
  PlantZone myPlant2;

  int value1 = analogRead(AOUT_PIN1);
  int value2 = analogRead(AOUT_PIN2);
  myPlant1.Moisture_Value = value1;
  myPlant2.Moisture_Value = value2;

  bool pumpState1 = myPlant1.active_pump(value1, PIN_RELAY_1); // call function
  bool pumpState2 = myPlant2.active_pump(value2, PIN_RELAY_2); // call function
}

