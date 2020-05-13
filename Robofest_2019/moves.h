void brake() {
  while(true){
    motors.setM1Brake(400);
    motors.setM2Brake(400);
  }
}  

void brake1(){
  motors.setM1Brake(400);
  motors.setM2Brake(400);
  delay(250);
  }

void forward1(){
  brake1();
  Renc=0;
  while(Renc<180){
    motors.setM2Speed(-200);
    motors.setM1Speed(-200);
    Serial.println(Renc);
  }
  brake1();
  }

void backward1(){
  brake1();
  Renc=0;
  while(Renc<180){
    motors.setM2Speed(200);
    motors.setM1Speed(200);
    Serial.println(Renc);
  }
  brake1();
  }

void forward2(){
  brake1();
  Renc=0;
  while(Renc<110){
    motors.setM2Speed(-200);
    motors.setM1Speed(-200);
    Serial.println(Renc);
  }
  brake1();
  }


void turnRight () {
  Renc=0;
  while(Renc<170){
    motors.setM2Speed(200);
    motors.setM1Speed(-200);
    Serial.println(Renc);
  }
}


void turnLeft() {
  Renc=0;
  while(Renc<200){
    motors.setM2Speed(-200);
    motors.setM1Speed(200);
    Serial.println(Renc);
  }
}


void turnBack(){
  Renc=0;
  while(Renc<350){
    motors.setM2Speed(200);
    motors.setM1Speed(-200);
    Serial.println(Renc);
  }
  }

void turnLeft45(){
  Renc=0;
  while(Renc<90){
    motors.setM2Speed(-200);
    motors.setM1Speed(200);
    Serial.println(Renc);
  }
  }
  
void turnRight45(){
  Renc=0;
  while(Renc<90){
    motors.setM2Speed(-200);
    motors.setM1Speed(200);
    Serial.println(Renc);
  }}
