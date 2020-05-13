
#include "DualVNH5019MotorShield.h"
DualVNH5019MotorShield motors;

const int trig = 26;
const int echo = 27;

long duration;
float distance;

int led_red=31;
int led_green=33;
int led_blue=35;

int right_base=130;
int left_base=150;

int right_speed=0;
int left_speed=0;

int base_servo=53;
int upper_servo=51;


int frequency;

int right;
int left;

int base_pwm = -130;

int V1, V2, V3, V4, V5, V6, V7, V8;

#define S1 A8
#define S2 A9
#define S3 A10
#define S4 A11
#define S5 A12
#define S6 A13
#define S7 A14
#define S8 A15              //IR panel pins.

#define l A6
#define r A7

#define S0_ 44
#define S1_ 45
#define S2_ 43
#define S3_ 42
#define sensorOut 41             //Colour detection sensor pins.


int redFrequency = 0;
int greenFrequency = 0;
int blueFrequency = 0;



int adc(int n) {
  if (n < 300) {
    return 0;
  }
  else {
    return 1; //IR panel analog to digital translation.
  }
}
