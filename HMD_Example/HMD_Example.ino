#include "Arduino.h"
#include "HMD.h"

void setup() {
  // put your setup code here, to run once: 
    HMD.SETUP(IN1,IN2,IN3,IN4); //Motor sürücüsünün bağladığınız giriş pinlerini sırasıyla(IN1,IN2,IN3,IN4) yazınız.
                               //You must write the connected motor driver's input pins in order to IN1 , IN2 , IN3 , IN4.
}

void loop() {
  // put your main code here, to run repeatedly:
    HMD.forward();
    delay(2000);
    HMD.backward();
    delay(2000);
    HMD.left();
    delay(2000);
    HMD.right();
    delay(2000);
}
