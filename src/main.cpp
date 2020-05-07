#include <Arduino.h>
#include <Preferences.h>
#include "SomfyRTS.h"

SomfyRTS myRTS(32);

void setup() {
  Serial.begin(115200);

  
  Serial.println("Enter something in the terminal to pair your device");
  while (!Serial.available()){}
  
  Serial.println("Pairing...");
  myRTS.prog(0);
  Serial.println("Done");
  
}

void loop() {

  myRTS.moveup(0);
  delay(3000);
  myRTS.movedown(0);
  delay(3000);

}