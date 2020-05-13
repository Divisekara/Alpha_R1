
int trig=28;
int echo=29;

float t=0;
float d=0;

void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop(){ 
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  d=t*0.034/2;

  Serial.print(d);
  Serial.println(" ");
  
}
 
