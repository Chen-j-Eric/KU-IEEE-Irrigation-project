#define PIN_RELAY_1  27 // The ESP32 pin GPIO27 connected to the IN1 pin of relay module
#define PIN_RELAY_2  26 // The ESP32 pin GPIO26 connected to the IN2 pin of relay module
#define PIN_RELAY_3  25 // The ESP32 pin GPIO25 connected to the IN3 pin of relay module
#define PIN_RELAY_4  33 // The ESP32 pin GPIO33 connected to the IN4 pin of relay module

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);

  // initialize digital pin as an output.
  pinMode(PIN_RELAY_1, OUTPUT);
  pinMode(PIN_RELAY_2, OUTPUT);
  pinMode(PIN_RELAY_3, OUTPUT);
  pinMode(PIN_RELAY_4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("Turn on all");
  digitalWrite(PIN_RELAY_1, HIGH);
  digitalWrite(PIN_RELAY_2, HIGH);
  digitalWrite(PIN_RELAY_3, HIGH);
  digitalWrite(PIN_RELAY_4, HIGH);
  delay(1000);

  Serial.println("Turn off all");
  digitalWrite(PIN_RELAY_1, LOW);
  digitalWrite(PIN_RELAY_2, LOW);
  digitalWrite(PIN_RELAY_3, LOW);
  digitalWrite(PIN_RELAY_4, LOW);
  delay(1000);
}