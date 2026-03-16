#include <Arduino.h>


const int ledPin = 2; // Internal LED is usually on GPIO 2

void setup() {


  pinMode(ledPin, OUTPUT);

}

void loop() {

  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(1000);
  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(1000);
}