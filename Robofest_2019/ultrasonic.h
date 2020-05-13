void ultrasonic_measure() {

  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;

  Serial.println(distance);
  Serial.print("CM");
}

void fineDistance(){
  while(distance>7){
    ultrasonic_measure();
    ir_input();
    if(distance<7){
      brake1();
      break;
      }
    else{
      pid_run3();
      }
    }
  }
