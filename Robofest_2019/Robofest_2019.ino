#include "Servo.h"

Servo base;
Servo upper;

int total = 0;
int task = 2;
int rights = 0;
int color;


#include "pins.h"
#include "ir_panel.h"
#include "void_setup.h"
#include "moves.h"
#include "pid.h"
#include "square.h"
#include "servoMotors.h"
#include "ultrasonic.h"
#include "color.h"


void setup() {  
  outputs();
  forward1();

  //every task is in a while loop.
  while (task == 0) {
    total = 0;
    ir_input();
    pid_run();
    if (total > 6) {
      task = 1;
    }
  }

  int subtask = 0;
  while (task == 1) {
    if (subtask == 0) {
      brake1();
      forward2();
      turnRight45();
      brake1();
      subtask = 1;
    }
    
    else if (subtask == 1) {
      ir_input();
      base_pwm=-120;
      pid_run2();
    }
  }
  
  rights = 0;
  while (task == 2){
    ultrasonic_measure();
    if (distance < 10) {
      brake1();
      task = 3;
      fineDistance();
      baseServo_down();
      upperServo_reach();
      baseServo_up();
      delay(1000);
      color_sensor_out();
      forward1();
      break;
    }
    else {
      ir_input();
      base_pwm=-120;
      pid_run();
    }
  }

  while(task==3){
    ir_input();
    base_pwm=-165;
    pid_run4();
    }

  while(task==4){
    ir_input();
    pid_run3();
    if (total>5){
      brake1();
      backward1();
      brake1();
      baseServo_down();
      upperServo_leave();
      break;
      }
    }
 
}

void loop() {
  brake1();
  }
