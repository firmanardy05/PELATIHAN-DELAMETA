  //INISIALISI
  int R =PA0;
  int Y =PA1;
  int G =PA2;
  int sensorIR =PA3;
  int LDR      =PA4;
  int kunci1   =0;
  

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
  bacasensorLDR=map(bacasensorLDR,105,4095,255,0);

  //SERIAL
  Serial.print("SensorIR"); Serial.print(bacasensorIR);
  Serial.print(" ||  LDR"); Serial.print(bacasensorLDR);
  Serial.println();  //untuk enter

  //LOGIKA
  if (kunci1==0 and bacasensorIR==0){
    digitalWrite(R,LOW);
    delay(1000);
    kunci1=1;
  }else if(kunci1==1 and bacasensorIR==0){
    digitalWrite(R,HIGH);
    delay(1000);
    kunci1=0;
  }
    analogWrite(Y,bacasensorLDR);
  }
  
     
     
