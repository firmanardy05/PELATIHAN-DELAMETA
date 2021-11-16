//INISIALISI
int R = PA0;
int YE = PA1;
int G = PA2;
int tombol1 =PA3;
int tombol2 =PA4;
int tombol3 =PA5;
int kunci1  =0;



void setup() {
Serial.begin(9600);
pinMode(R,OUTPUT); 
pinMode(YE,OUTPUT);
pinMode(G,OUTPUT);
pinMode(tombol1,INPUT);
pinMode(tombol2,INPUT);
pinMode(tombol3,INPUT);
}

void loop() { 
 //BACA DATA
int bacatombol1=digitalRead(tombol1); 
int bacatombol2=digitalRead(tombol2);
int bacatombol3=digitalRead(tombol3);

 //SERIAL
Serial.print("T1 :");Serial.print(bacatombol1);
Serial.print("T2 :");Serial.print(bacatombol2);
Serial.print("T3 :");Serial.print(bacatombol3);
Serial.println(); //enter

   
//LOGIKA
  if(bacatombol1 == 1 and kunci1 ==0){   
  digitalWrite(R,HIGH);
  delay(500);
  kunci1=1;
 }else if(bacatombol1 ==1 and kunci1 ==1){
  digitalWrite(R,LOW);
 }

 if(bacatombol2 == 1 and kunci1 ==0){   
  digitalWrite(YE,HIGH);
  delay(500);
  kunci1=1;
 }else if(bacatombol1==1 and kunci1==1){
  digitalWrite(YE,LOW);
 }

 if(bacatombol3 == 1 and kunci1==0){  
  digitalWrite(G,HIGH);
  delay(500);
  kunci1=1;
 }else if(bacatombol1==1 and kunci1==1){
  digitalWrite(G,LOW);
}
}
