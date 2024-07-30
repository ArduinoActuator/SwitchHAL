
#include "SwitchHAL.h"



Switch sw(5);

void setup() {
  sw.begin();
}

void loop() {
  sw.on();
  delay(10000);
  sw.off();
  delay(10000);
}
