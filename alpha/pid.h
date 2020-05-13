int error = 0;
float kp = 4.5;
float kd = 1.5;
int previous_error;

void pid(){

  if(sensorValue16==0 || sensorValue15==0){
    //Serial.println("turn_left");
    go_forward(500);
    delay(500);
    turn_left_90();
    delay(500);
    }

  else if(sensorValue1==0){
    //Serial.println("turn_right");
    go_forward(700);
    delay(500);
    turn_right_90();
    delay(500);
  }

  else{
    error = sensorValue2 * 6 + sensorValue3 * 5 + sensorValue4 * 4 + sensorValue5 * 3 + sensorValue6 * 2 + sensorValue7 *  1 + sensorValue8 * 0 + sensorValue9 * 0 + sensorValue10 * (-1) + sensorValue11 * (-2) + sensorValue12 * (-3) + sensorValue13 * (-4) + sensorValue14 * (-5) + sensorValue15 * (-6);
  //Serial.println(error);
    //Serial.println("pid");
    power = error * kp + (error - previous_error) * kd;
    previous_error = error;
  
    left_speed = left_base - power;
    right_speed = right_base + power;
  
    if (left_speed<0){left_speed=0;}
    if (right_speed<0){right_speed=0;}
    
    forward();
    Serial.print(left_speed);
    Serial.print(" ");
    Serial.print(right_speed);
    Serial.println("");
    
    analogWrite(left_pwm, left_speed);
    analogWrite(right_pwm, right_speed);
  }

}


void pid2() {
    error = sensorValue2 * 6 + sensorValue3 * 5 + sensorValue4 * 4 + sensorValue5 * 3 + sensorValue6 * 2 + sensorValue7 *  1 + sensorValue8 * 0 + sensorValue9 * 0 + sensorValue10 * (-1) + sensorValue11 * (-2) + sensorValue12 * (-3) + sensorValue13 * (-4) + sensorValue14 * (-5) + sensorValue15 * (-6);
  //Serial.println(error);
    //Serial.println("pid");
    power = error * kp + (error - previous_error) * kd;
    previous_error = error;
  
    left_speed = 100 - power;
    right_speed = 60 + power;
  
    if (left_speed<0){left_speed=0;}
    if (right_speed<0){right_speed=0;}
    
    forward();
    Serial.print(left_speed);
    Serial.print(" ");
    Serial.print(right_speed);
    Serial.println("");
    
    analogWrite(left_pwm, left_speed);
    analogWrite(right_pwm, right_speed);

  
}
