#include "Servo.h"

int base_servo_pin=7;
int upper_servo_pin=6;

Servo base;
Servo upper;

void arm_do(){
  upper.write(0);
  delay(500);
  base.write(67);
  delay(1000);
  base.write(180);
  delay(1000);
  base.write(67);
  delay(1000);
  upper.write(50);
  delay(1000);
}


void setup() {
  base.attach(base_servo_pin);
  upper.attach(upper_servo_pin);  
}




void loop() {
  //else

}
