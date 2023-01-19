#include <Arduino.h> 

class HoldButton
{
    int t_pin;
    int t_delay;
    
    public :
    HoldButton::HoldButton(int _pin, int _delay=300, int mode=INPUT_PULLUP);
    HoldButton::read();
};
