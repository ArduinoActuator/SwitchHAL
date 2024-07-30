#include "SwitchHAL.h"


Switch::Switch(uint8_t pin, SwitchType type):
  _pin(pin),
  _type(type)
{}

void Switch::begin(void) {
  pinMode(_pin, OUTPUT);
  off();
}

void Switch::on(void) {
  if (_type == SWITCH_TYPE_PULL_UP) {
    digitalWrite(_pin, HIGH);
  } else {
    digitalWrite(_pin, LOW);
  }
}

void Switch::off(void) {
  if (_type == SWITCH_TYPE_PULL_UP) {
    digitalWrite(_pin, LOW);
  } else {
    digitalWrite(_pin, HIGH);
  }
}