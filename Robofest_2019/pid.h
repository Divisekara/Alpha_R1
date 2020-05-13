
int error = 0;
int previous_error = 0;
int power = 0;

float kp = 1.6;
float kd = 1.6;

void pid_run() {
  if (right == 1 && left == 1 && total==0) {
    forward1();
    turnBack();
    brake1();
  }

  else if (right == 1 && left == 1 && total!=0) {
    error = V1 * 30 + V2 * 20 + V3 * 10 + V4 * 0 + V5 * 0 + V6 * (-10) + V7 * (-20) + V8 * (-30);

    power = error * kp + (error - previous_error) * kd;
    previous_error = error;

    //Serial.println(power);

    left_speed = base_pwm + power;
    right_speed = base_pwm - power;

    motors.setM1Speed(left_speed);
    motors.setM2Speed(right_speed);
  }
  else if (right == 0) { //turn right condition
    forward1();
    turnRight();
    brake1();
  }
  else if (right == 1 && left == 0) { //turn left condition or go straight condition
    brake1();
    forward2();
    ir_input();
    if (total > 1) {
      forward2();
      brake1();
    }
    else {
      forward1();
      turnLeft();
      brake1();
      }
    }
  }


//for the squared path
void pid_run2() {
  if (right == 1 && left == 1 && total==0) {
    turnBack();
  }

  else if (right == 1 && left == 1 && total!=0) {
    error = V1 * 30 + V2 * 20 + V3 * 10 + V4 * 0 + V5 * 0 + V6 * (-10) + V7 * (-20) + V8 * (-30);

    power = error * kp + (error - previous_error) * kd;
    previous_error = error;

    //Serial.println(power);

    left_speed = base_pwm + power;
    right_speed = base_pwm - power;

    motors.setM1Speed(left_speed);
    motors.setM2Speed(right_speed);
  }
  else if(rights==1){
    forward2();
    turnRight45();
    brake1();
    task=2;
    }
  else if (right == 0) { //turn right condition
    forward2();
    turnRight();
    brake1();
    rights=1;
  }
  else if (right == 1 && left == 0) { //turn left condition or go straight condition
    brake1();
    forward1();
    ir_input();
    if (total > 1) {
      forward1();
      brake1();
    }
    else {
      turnLeft();
      brake1();
      }
    }
  }


void pid_run3() {

    error = V1 * 30 + V2 * 20 + V3 * 10 + V4 * 0 + V5 * 0 + V6 * (-10) + V7 * (-20) + V8 * (-30);

    power = error * 0.5 + (error - previous_error) * 0.3;
    previous_error = error;

    //Serial.println(power);

    left_speed = -70 + power;
    right_speed = -70 - power;

    motors.setM1Speed(left_speed);
    motors.setM2Speed(right_speed);
  }


void pid_run4() {

  if (right == 1 && left == 1 && total!=0) {
    error = V1 * 30 + V2 * 20 + V3 * 10 + V4 * 0 + V5 * 0 + V6 * (-10) + V7 * (-20) + V8 * (-30);

    power = error * kp + (error - previous_error) * kd;
    previous_error = error;

    //Serial.println(power);

    left_speed = base_pwm + power;
    right_speed = base_pwm - power;

    motors.setM1Speed(left_speed);
    motors.setM2Speed(right_speed);
  }
 else{
  if(color==3){
    turnRight();
    brake1();
    }
 else if(color==2){
  turnLeft();
  brake1();
  }
 else{
  forward1();
  }
  task==4;
  
  
  }
  /*
  else if (right == 0) { //turn right condition
    turnRight();
  }
  else if (right == 1 && left == 0) { //turn left condition or go straight condition
    brake1();
    forward1();
    ir_input();
    if (total ==8) {
      if(color==3){turnRight();}
      else if(color==2){forward1();}
      else if(color==1){turnLeft();}
      task==4;
    }
    else {
      turnLeft();
      }
    }
    */
  }
