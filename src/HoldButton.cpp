#include "HoldButton.h"

HoldButton::HoldButton(int _pin, int _delay, int mode)
{
  t_pin = _pin;
  t_delay = _delay;
  pinMode(_pin,mode);
}

int HoldButton::read()
{
  static long last = millis();
  int result = 0;
  if (digitalRead(t_pin) == 0)
  {
    if (millis() - last > t_delay)
    {
      result = 1;
      last = millis();
    }
  }
  return result;
}
