/*
 Tanner Crum 2/21/2017
 The built-in LED turns on whenever a momentary switch is pressed
 See https://www.arduino.cc/en/Tutorial/DigitalReadSerial for pushbutton schematic
 */

int pushButton = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState); // prints out state of button
  if(buttonState == 1){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1);        // delay in between reads for stability
}

