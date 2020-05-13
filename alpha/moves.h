void turn_left(){
  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, HIGH);
  digitalWrite(left_dir_two, LOW);
  analogWrite(left_pwm,base_pwm);
  analogWrite(right_pwm,base_pwm);
}

void turn_right(){
  digitalWrite(right_dir_one, HIGH);
  digitalWrite(right_dir_two, LOW);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);
  analogWrite(left_pwm,base_pwm);
  analogWrite(right_pwm,base_pwm);
  }

void forward(){
  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);
  }

void brake(){
  digitalWrite(right_dir_one, HIGH);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, HIGH);
  digitalWrite(left_dir_two, HIGH);
  analogWrite(left_pwm,0);
  analogWrite(right_pwm,0);
  }

void turn_left_90(){
  left_count_1=0;
  while(left_count_1<1000){
    turn_left();
    Serial.println("");
    }
   brake();
  }

void turn_left_45(){
  left_count_1=0;
  while(left_count_1<450){
    turn_left();
    Serial.println("");
    }
   brake();
  }

void turn_right_90(){
  right_count_1=0;
  while(right_count_1<850){
    turn_right();
    Serial.println("");
    }
   brake();
  }

void turn_right_45(){
  right_count_1=0;
  while(right_count_1<400){
    turn_right();
    Serial.println("");
    }
   brake();
  }

void go_forward(int distance){
  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);
  
  right_count_1=0;
  while(right_count_1<distance){
    analogWrite(left_pwm,100);
    analogWrite(right_pwm,100);
    Serial.println("");
    }
  brake();
  }


void turn_back(){
  right_count_1=0;
  while(right_count_1<1800){
    turn_right();
    Serial.println("");
    }
   brake();
  }
  
