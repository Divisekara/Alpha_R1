int color;
int frequency;

#define S0_ 31
#define S1_ 33
#define S2_ 35
#define S3_ 37
#define sensorOut 39            //Colour detection sensor pins.

int redFrequency = 0;
int greenFrequency = 0;
int blueFrequency = 0;

#include "color.h"

void setup() {
  pinMode(S0_, OUTPUT);
  pinMode(S1_, OUTPUT);
  pinMode(S2_, OUTPUT);
  pinMode(S3_, OUTPUT);
  
  pinMode(sensorOut, INPUT);

  digitalWrite(S0_,HIGH);
  digitalWrite(S1_,LOW);

  Serial.begin(9600);
}

void loop() {
  color_sensor_out();
  
}
