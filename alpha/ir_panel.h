
void ir(){
  sensorValue1 = adc(analogRead(sensorPin1)); //right side
  sensorValue2 = adc(analogRead(sensorPin2));
  sensorValue3 = adc(analogRead(sensorPin3));
  sensorValue4 = adc(analogRead(sensorPin4));
  sensorValue5 = adc(analogRead(sensorPin5));
  sensorValue6 = adc(analogRead(sensorPin6));
  sensorValue7 = adc(analogRead(sensorPin7));
  sensorValue8 = adc(analogRead(sensorPin8));
  sensorValue9 = adc(analogRead(sensorPin9));
  sensorValue10 = adc(analogRead(sensorPin10));
  sensorValue11 = adc(analogRead(sensorPin11));
  sensorValue12 = adc(analogRead(sensorPin12));
  sensorValue13 = adc(analogRead(sensorPin13));
  sensorValue14 = adc(analogRead(sensorPin14));
  sensorValue15 = adc(analogRead(sensorPin15));
  sensorValue16 = adc(analogRead(sensorPin16)); //left side

  total= sensorValue5 + sensorValue6 + sensorValue7 + sensorValue8 + sensorValue9 + sensorValue10 + sensorValue11 + sensorValue12;
  //Serial.println(total);
  /*
  Serial.print(sensorValue1);
  Serial.print(" ");
  Serial.print(sensorValue2);
  Serial.print(" ");
  Serial.print(sensorValue3);
  Serial.print(" ");
  Serial.print(sensorValue4);
  Serial.print(" ");
  Serial.print(sensorValue5);
  Serial.print(" ");
  Serial.print(sensorValue6);
  Serial.print(" ");
  Serial.print(sensorValue7);
  Serial.print(" ");
  Serial.print(sensorValue8);
  Serial.print(" ");
  Serial.print(sensorValue9);
  Serial.print(" ");
  Serial.print(sensorValue10);
  Serial.print(" ");
  Serial.print(sensorValue11);
  Serial.print(" ");
  Serial.print(sensorValue12);
  Serial.print(" ");
  Serial.print(sensorValue13);
  Serial.print(" ");
  Serial.print(sensorValue14);
  Serial.print(" ");
  Serial.print(sensorValue15);
  Serial.print(" ");
  Serial.print(sensorValue16);
  Serial.print(" ");
  Serial.println("");
  */
  
}
