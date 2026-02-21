#define PIN_RELAY_1  16 // The ESP32 pin GPIO16 connected to the IN1 pin of relay module
#define PIN_RELAY_2  17 // The ESP32 pin GPIO17 connected to the IN2 pin of relay module
// Unused relay, can be turned on if needed
#define PIN_RELAY_3  18 // The ESP32 pin GPIO18 connected to the IN3 pin of relay module
#define PIN_RELAY_4  19 // The ESP32 pin GPIO19 connected to the IN4 pin of relay module
#define AOUT_PIN1 34 // ESP32 pin GPIO36 (ADC0) that connects to AOUT pin of moisture sensor
#define AOUT_PIN2 35 // ESP32 pin GPIO34 (ADC0) that connects to AOUT pin of moisture sensor

#define DRYNESS 2200 // ESP32 pin GPIO34 (ADC0) that connects to AOUT pin of moisture sensor
const int FLOATSENSOR = 12;
bool float_Sensor = true;

// the soil will return 3600 when dry, 2000 when it's wet
void setup() {
  Serial.begin(9600);
  // initialize digital pin as an output.
  pinMode(PIN_RELAY_1, OUTPUT);
  pinMode(PIN_RELAY_2, OUTPUT);
  pinMode(FLOATSENSOR, INPUT_PULLUP);
}
void loop() {



  float_Sensor = digitalRead(FLOATSENSOR);

  if (float_Sensor == HIGH){
    float_Sensor = 1;
    Serial.println("Water Level - HIGH");
  }else {
    float_Sensor = 0;
    Serial.println("Water Level - LOW");
  }
// these should be wrapped into a function, having code like this is not great
// classes aren't neeeded but I will think about maybe writing one if time permits

  int value1 = analogRead(AOUT_PIN1); // read the analog value from sensor
  Serial.print("Sensor 1, Moisture value: ");
  Serial.println(value1);
  
  if ((value1 > DRYNESS) && (float_Sensor == true)){
  Serial.println("Turn on all");
  digitalWrite(PIN_RELAY_1, LOW);
  }else{
  Serial.println("Turn off all");
  digitalWrite(PIN_RELAY_1, HIGH);
  }


// class/function
  int value2 = analogRead(AOUT_PIN2); // read the analog value from sensor
  Serial.print("Sensor 2, Moisture value: ");
  Serial.println(value1);
  
  
  if ((value2 > DRYNESS) && (float_Sensor == true)){
  Serial.println("Turn on all");
  digitalWrite(PIN_RELAY_2, LOW);
  }else{
  Serial.println("Turn off all");
  digitalWrite(PIN_RELAY_2, HIGH);
  }
 }


 
