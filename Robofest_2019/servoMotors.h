void upperServo_leave(){
  for(int i=180;i>70;i--){
    upper.write(i);
    delay(10);
    }
}

void upperServo_reach(){
  for (int j=70; j<180;j++){
     upper.write(j);
     delay(10);
    }
}

void baseServo_down(){
  for (int m=100; m>15;m--){
     base.write(m);
     delay(10);
    }
  }

void baseServo_up(){
  for(int k=15;k<40;k++){
    base.write(k);
    delay(60);
    }
  }

  
  /*
  for(int i=160;i>90;i--){
    base.write(i);
    delay(100);
    }
  for (int j=90; j<160;j++){
     base.write(j);
     delay(100);
    }
    */
