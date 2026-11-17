
#include "SwitchHAL.h"



Switch sw(5);

void setup() {
  sw.begin();
}

void loop() {
  sw.on();
  delay(3000);
  sw.off();
  delay(3000);
}
