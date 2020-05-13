#define ir_pin_one 22
#define ir_pin_two 21

void setup () {
  
  pinMode(ir_pin_one, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(ir_pin_two), count_coins, RISING);
Serial.begin(9600);

pinMode(14,OUTPUT);
digitalWrite(14,HIGH);
}

int coins = 0;

void count_coins() {
  coins += 1;
}

void measure_coins() {
/* while (coins > 10) {

    Serial.print(coins);
*/
}


void loop() {
  measure_coins();
  Serial.println(coins);
}

