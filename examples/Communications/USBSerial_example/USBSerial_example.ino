#include <Arduino.h>

#define LED1   PB15
#define LED2   PB2
#define LED3   PA5
#define LED4   PA4
#define LED5   PB9
#define LED6   PB8
#define LED7   PB3
#define LED8   PA15

int dataIn;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  
  Serial.begin(9600); // baudrate is not actually used
}

void loop() {
  //digitalWrite(LED1, HIGH); // turn the LED on (HIGH is the voltage level)
  //delay(1000);              // wait for a second
  //digitalWrite(LED1, LOW);  // turn the LED off by making the voltage LOW
  //delay(1000);              // wait for a second
  
  dataIn = Serial.read();
  if (dataIn >= 0) Serial.write(dataIn);
}
