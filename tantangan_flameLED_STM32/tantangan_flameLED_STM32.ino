#include<NewPing.h>
int R =PA0;
int Y =PA1;
int G =PA2;
int triger =PA3;
int echo   =PA4;
int Flame  =PA6;
int kunci  =0;
int batas  =400; //maksimal 400cm
NewPing cm(triger,echo,batas);

void setup() {
Serial.begin(9600);
pinMode(R,OUTPUT);
pinMode(Y,OUTPUT);
pinMode(G,OUTPUT);
pinMode(Flame,INPUT);

}

void loop() {
  // BACA DATA
  int bacaFlame=digitalRead(Flame);
      //bacaFlame=map(bacaFlame,4095,180,0,255);
  int bacaJarak=cm.ping_cm();

 // SERIAL
  Serial.print("DataFlame  :");
  Serial.print(bacaFlame);
  Serial.println(); //untuk enter
  Serial.print(" || data jarak :");
  Serial.print(bacaJarak);
  Serial.println(); //untuk enter

 
 // LOGIKA
  if(bacaFlame==0 && kunci==0){
    kunci=1;
    delay(1000);
    }else if(bacaFlame==0 && kunci==1){
    kunci=0;
    delay(1000);
    Serial.print(" NILAI FLAME");
    Serial.print(bacaFlame);
    Serial.println();
    Serial.print(" NILAI KUNCI");
    Serial.print(kunci);
    Serial.println();
    }
     
  if(kunci == 1){   
  if(bacaJarak>=100){
    digitalWrite(R,1);
    delay(100);
    digitalWrite(R,0);
    digitalWrite(Y,1);
    delay(100);
    digitalWrite(Y,0);
    digitalWrite(G,1);
    delay(100);
    digitalWrite(G,0);
    digitalWrite(Y,1);
    delay(100);
    digitalWrite(Y,0);
    digitalWrite(R,1);
    delay(100);
    digitalWrite(R,0);
    delay(100);

    }else if(bacaJarak<=50 && bacaJarak>=10){
      digitalWrite(R,1);
      digitalWrite(Y,1);
      digitalWrite(G,1);
      delay(1000);
      digitalWrite(R,0);
      digitalWrite(Y,0);
      digitalWrite(G,0);  
      delay(1000);
    }else if (bacaJarak<10){
      digitalWrite(R,1);
      digitalWrite(Y,1);
      digitalWrite(G,1);
      delay(100);
      digitalWrite(R,0);
      digitalWrite(Y,0);
      digitalWrite(G,0);
    }
    if (kunci==0){  
      digitalWrite(R,0);
      digitalWrite(Y,0);
      digitalWrite(G,0);
    }
}    

}
