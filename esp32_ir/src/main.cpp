#include <Arduino.h>


const int d0Pin = 14; // Digital Output pin
const int a0Pin = 36; // Analog Output pin (Input only pin)

byte d0Read;
uint16_t a0Read;

void setup() {

  Serial.begin(9600);
  pinMode(d0Pin, INPUT);
  pinMode(2, OUTPUT);

  // Blink internal LED to show initialization status
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(2, LOW);
  delay(300);
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(2, LOW);
  delay(300);

  Serial.println("ESP32 Initialized");

}

void loop() {

  d0Read = digitalRead(d0Pin);
  a0Read = analogRead(a0Pin);

  Serial.print("D0: ");
  Serial.print(d0Read);
  Serial.print(" A0: ");
  Serial.println(a0Read);

  delay(500);
}