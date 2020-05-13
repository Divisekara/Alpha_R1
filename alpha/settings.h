
void count_(){
  right_count_1+=1;
  left_count_1+=1;
  right_count_2+=1;
  left_count_2+=1;
}


void sets(){
  Serial.begin(9600);
  pinMode(left_pwm, OUTPUT);
  pinMode(left_dir_one, OUTPUT);
  pinMode(left_dir_two, OUTPUT);

  pinMode(right_pwm, OUTPUT);
  pinMode(right_dir_one, OUTPUT);
  pinMode(right_dir_two, OUTPUT);

  pinMode(14,OUTPUT);
  digitalWrite(14,HIGH);

  attachInterrupt(digitalPinToInterrupt(renc1),count_,RISING);
  attachInterrupt(digitalPinToInterrupt(renc2),count_,RISING);
  attachInterrupt(digitalPinToInterrupt(lenc1),count_,RISING);
  attachInterrupt(digitalPinToInterrupt(lenc2),count_,RISING);

  base.attach(base_servo_pin);
  upper.attach(upper_servo_pin);
  upper.write(0);
  base.write(67);
  }
