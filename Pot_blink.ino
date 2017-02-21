/*
 Tanner Crum 2/20/2017
 The Arduino built-in LED blinks at a rate set by a potentiometer
 Potemtiometer: middle lead pin A0, GND, +5V
 */


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int potValue = analogRead(A0);

  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println(potValue);
  delay(1024-potValue);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1024-potValue);
}
