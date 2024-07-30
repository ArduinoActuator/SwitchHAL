
#ifndef __SWITCH_HAL_H__


#include <stdint.h>
#include <Arduino.h>

enum SwitchType {
  SWITCH_TYPE_PULL_UP = 1,
  SWITCH_TYPE_PULL_DOWN
};

enum SwitchFunctionReturnValue {
  FUNCTION_UNSUPPORTED = 1,
  FUNCTION_SUCCESS,
  FUNCTION_FAIL
};

class Switch {
public:
  Switch(uint8_t pin, SwitchType type = SWITCH_TYPE_PULL_UP);
  void begin(void);
  void on(void);
  void off(void);
protected:
  uint8_t _pin;
  SwitchType _type;
};

#endif /* __SWITCH_HAL_H__ */
