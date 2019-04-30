#define touchpin 4 // sets the capactitive touch sensor @pin 4
int ledPin = 2; // sets the LED @pin 2
void setup() {
  pinMode(touchpin, INPUT); //sets the touch sensor as input
  pinMode(ledPin, OUTPUT);  //sets the led as output
}
void loop() {
  int touchValue = digitalRead(touchpin); //reads the touch sensor signal
  if (touchValue == HIGH){      //if sensor is HIGH
    digitalWrite(ledPin, HIGH);   //LED will turn ON
  }
  else{       //otherwise
    digitalWrite(ledPin,LOW); //LED is turned OFF
  } 
  delay(300);   //delay of 300milliseconds
}
