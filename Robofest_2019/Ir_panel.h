void ir_input() {
  V1 = adc(analogRead(S1)); //left sensor
  V2 = adc(analogRead(S2));
  V3 = adc(analogRead(S3));
  V4 = adc(analogRead(S4));
  V5 = adc(analogRead(S5));
  V6 = adc(analogRead(S6));
  V7 = adc(analogRead(S7));
  V8 = adc(analogRead(S8)); //rirght sensoer

  left = digitalRead(l);
  right = digitalRead(r);
  //Serial.println(right);

  //if(right==0){rights+=1;}  
  
  Serial.print(V1); //left sensor
  Serial.print(V2);
  Serial.print(V3);
  Serial.print(V4);
  Serial.print(V5);
  Serial.print(V6);
  Serial.print(V7);
  Serial.println(V8); // right sensor
  


  //Serial.print(left);
  //Serial.println(right);

  total = V1 + V2 + V3 + V4 + V5 + V6 + V7 + V8;
  //Serial.println(total);

}
