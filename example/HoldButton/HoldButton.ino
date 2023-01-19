#include "HoldButton.h"

HoldButton ButtonUp(2);
HoldButton ButtonDown(3,100);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int n = 0;
  if (ButtonUp.read())
  {
    n++;
    Serial.println(n);
  }
  else if (ButtonDown.read())
  {
    n--;
    Serial.println(n);
  }
}
