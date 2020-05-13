#include "Servo.h"
#include "pin.h"
#include "arm.h"
#include "settings.h"
#include "moves.h"
#include  "ir_panel.h"
#include  "pid.h"

int task=10;
void setup(){  
  sets();
  go_forward(500);
  brake();
  delay(400);
  
  while(task==1){
    ir();
    if(sensorValue1==1 || sensorValue16==1){
      pid();
    }
    
    else if(total<6){
      Serial.println("TURN RIGHT 45");
      brake();
      go_forward(400);
      delay(1000);
      turn_right_45();
      delay(1000);
      task=2;
      }
    }
    
  while (task==2){
    ir();
    if(total<6){
      brake();
      go_forward(400);
      delay(1000);
      turn_right_45();
      delay(1000);
      task=3;
    }
    
    else if(sensorValue1==1 || sensorValue16==1){
      pid2();
    }
  }
  while (task==3){
    ir();
    pid();
    }
    do_arm();
}


void loop() {
  ir();
  //pid();
}
