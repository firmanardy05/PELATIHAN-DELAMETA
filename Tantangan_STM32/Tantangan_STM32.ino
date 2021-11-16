  //INISIALISI
  int R         =PA0;
  int Y         =PA1;
  int G         =PA2;
  int sensorIR  =PA3;
  int LDR       =PA4; 
  int kunci1    =0;

void setup() {
  Serial.begin(9600);
  pinMode(R,OUTPUT);
  pinMode(Y,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(sensorIR,INPUT);
  pinMode(LDR,INPUT);
  
}

void loop() {
  //BACA DATA
  int bacasensorIR=digitalRead(sensorIR);
  int bacasensorLDR=analogRead(LDR);
  bacasensorLDR=map(bacasensorLDR,4095,0,255,0);
  
 

  //SERIAL
  Serial.print("SensorIR"); Serial.print(bacasensorIR);
  Serial.print(" ||  LDR"); Serial.print(bacasensorLDR);
  Serial.println();  

  //LOGIKA  
   if(bacasensorIR==0 && kunci1==0){
    kunci1=1;
    delay(200);
   
  }else if(bacasensorIR==1 && kunci1==1) {
    
    if (bacasensorLDR<100){        
     digitalWrite(R,HIGH);
     digitalWrite(Y,LOW);
     digitalWrite(G,LOW);
     delay(100);  
  }
  else if(bacasensorLDR>100 && bacasensorLDR<200){    
     digitalWrite(R,LOW);
     digitalWrite(Y,HIGH);
     digitalWrite(G,LOW);
     delay(100);
     
  }
  else {
     digitalWrite(R,LOW);    
     digitalWrite(Y,LOW);
     digitalWrite(G,LOW);
     delay(100);
  }
}
else if(bacasensorIR==0 && kunci1==1){
        kunci1=0;
        digitalWrite(R,LOW);
        digitalWrite(Y,LOW);
        digitalWrite(G,LOW);
        delay(200);
}
}
