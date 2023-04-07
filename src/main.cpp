#include <Arduino.h>

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.write("Hello");
  delay(500);
  Serial.write("World.\n");
  delay(500);
}
