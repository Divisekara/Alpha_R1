int Renc=0;
void count1(){
    Renc+=1;
  }


void outputs () {

  motors.init();

  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
  pinMode(S6, INPUT);
  pinMode(S7, INPUT);
  pinMode(S8, INPUT);

  pinMode(led_red,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(led_blue,OUTPUT);

  base.attach(base_servo);
  upper.attach(upper_servo);

  upper.write(70);
  base.write(130);

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);


  Serial.begin(9600);

  pinMode(S0_, OUTPUT);
  pinMode(S1_, OUTPUT);
  pinMode(S2_, OUTPUT);
  pinMode(S3_, OUTPUT);
  
  pinMode(sensorOut, INPUT);
  
  digitalWrite(S0_,HIGH);
  digitalWrite(S1_,LOW);


  digitalWrite(led_red,LOW);
  digitalWrite(led_green,LOW);
  digitalWrite(led_blue,LOW);

  pinMode(20, INPUT);
  attachInterrupt(digitalPinToInterrupt(21), count1, RISING);

}
