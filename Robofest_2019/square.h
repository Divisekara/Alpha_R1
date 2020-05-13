void square_run(){
  int subtask=0;
    if(subtask==0){forward1();turnRight45();subtask=1;}
    
    else if(subtask==1){
      while(true){
        ir_input();
        pid_run();
        if(right==0){
          turnRight();
          subtask=2;
          break;
          }
        }
      }
      
      else if(subtask==2){
        while(true){
          ir_input();
          pid_run();
          if(right==0){
            turnLeft45();
            break;
            }
          }
        }
  
  }
