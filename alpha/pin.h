int base_servo_pin=7;
int upper_servo_pin=6;

int renc1=2;
int renc2=3;

int lenc1=18;
int lenc2=19;

int right_count_1=0;
int left_count_1=0;
int right_count_2=0;
int left_count_2=0;

int sensorPin1 = A0;
int sensorValue1 = 0;

int sensorPin2 = A1;
int sensorValue2 = 0;

int sensorPin3 = A2;
int sensorValue3 = 0;

int sensorPin4 = A3;
int sensorValue4 = 0;

int sensorPin5 = A4;
int sensorValue5 = 0;

int sensorPin6 = A5;
int sensorValue6 = 0;

int sensorPin7 = A6;
int sensorValue7 = 0;

int sensorPin8 = A7;
int sensorValue8 = 0;

int sensorPin9 = A8;
int sensorValue9 = 0;

int sensorPin10 = A9;
int sensorValue10 = 0;

int sensorPin11 = A10;
int sensorValue11 = 0;

int sensorPin12 = A11;
int sensorValue12 = 0;

int sensorPin13 = A12;
int sensorValue13 = 0;

int sensorPin14 = A13;
int sensorValue14 = 0;

int sensorPin15 = A14;
int sensorValue15 = 0;

int sensorPin16 = 15;
int sensorValue16 = 0;

#define left_pwm 13
#define left_dir_one 12
#define left_dir_two 11

#define right_pwm 10
#define right_dir_one 9
#define right_dir_two 8

int power = 0;
int right_speed = 0;
int left_speed = 0;
int base_pwm = 110;
int right_base=100;
int left_base=120;
int total;


int adc(int n) {
  if (n < 600) {
    return 0;
  }
  else {
    return 1; //IR panel analog to digital translation.
  }
}
