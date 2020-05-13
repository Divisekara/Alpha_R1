void color_sensor_out()
{
  // Setting RED (R) filtered photodiodes to be read
  digitalWrite(S2_,LOW);
  digitalWrite(S3_,LOW);
  
  // Reading the output frequency

  redFrequency = pulseIn(sensorOut, LOW);
  
   // Printing the RED (R) value
  //Serial.print("R = ");
  //Serial.print(redFrequency);
  //delay(100);
  
  // Setting GREEN (G) filtered photodiodes to be read
  digitalWrite(S2_,HIGH);
  digitalWrite(S3_,HIGH);
  
  // Reading the output frequency
  greenFrequency = pulseIn(sensorOut, LOW);
  
  // Printing the GREEN (G) value  
  //Serial.print(" G = ");
  //Serial.print(greenFrequency);
  //delay(100);
 
  // Setting BLUE (B) filtered photodiodes to be read
  digitalWrite(S2_,LOW);
  digitalWrite(S3_,HIGH);
  
  // Reading the output frequency
  blueFrequency = pulseIn(sensorOut, LOW);
  
  // Printing the BLUE (B) value 
  //Serial.print(" B = ");
  //Serial.print(blueFrequency);
  //delay(100);
  if(redFrequency<60){
    //light_red();
    color=3;
    digitalWrite(led_red,HIGH);
    //Serial.println("  red");
    
    }
  else if(blueFrequency<60){
    //light_blue();
    color=1;
    digitalWrite(led_blue,HIGH);
    //Serial.println("  blue");
    }
  else{
    // light_green();
    color=2;
    digitalWrite(led_green,HIGH);
    //Serial.println("  green");
    }
}
