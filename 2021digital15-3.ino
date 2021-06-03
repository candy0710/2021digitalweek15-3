/*
  Melody
 */
#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

int buttonPin[8] = {2, 3, 4, 5, 6, 7, 8 ,9};

int previousState[8]= {1}, presentState[8]= {1};

void setup() {
  for(int i = 0; i < 8; i++)  pinMode(buttonPin[i], INPUT_PULLUP);
}

void loop() {
  
  for(int i=0; i<8; i++){	 
  	presentState[i] = digitalRead(buttonPin[i]);
  }
  
  if(presentState[0] == 0 ){
    tone(10, NOTE_C3,500);
     previousState[0]=1;
  }

  else if(presentState[1] ==0){
    tone(10, NOTE_D3,500);
    previousState[1]=1;
  }
    
  else if(presentState[2] == 0){
    tone(10, NOTE_E3,500);
    previousState[2]=1;
  }
    
  else if(presentState[3] == 0){
    tone(10, NOTE_F3,500);
    previousState[3]=1;
  }
    
  else if(presentState[4] == 0){
    tone(10, NOTE_G3);
    previousState[4]=1;
  }
    
  else if(presentState[5] == 0){
    tone(10, NOTE_A3,500);
    previousState[5]=1;
  }
  
  else if(presentState[6] == 0){
    tone(10, NOTE_B3,500);
    previousState[6]=1;
   }
  
  else if(presentState[7] == 0){
    tone(10, NOTE_C4,500);
    previousState[7]=1;
  }
  
  for(int i;i<8;i++){
    if(presentState[i]==1&&previousState[i]==1){
    noTone(10);
      previousState[i]=0;
    }
  }
}