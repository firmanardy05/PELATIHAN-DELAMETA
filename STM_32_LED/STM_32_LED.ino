  //INISIALISI
  int R =PA2;
  int Y =PA3;
  int G =PA4; 
  int tombol1=PA5;
  int tombol2=PA6;
  int tombol3=PA7;
  
  void setup() {   
  Serial.begin(9600);
  pinMode(PA2,OUTPUT);
  pinMode(PA3,OUTPUT);
  pinMode(PA4,OUTPUT);
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
 Serial.print("   T1 :");Serial.print(bacatombol1); 
 Serial.print("|| T2 :");Serial.print(bacatombol2);
 Serial.print("|| T3 :");Serial.print(bacatombol3);
 Serial.println();
  
  //LOGIKA
  if(bacatombol1==1){   
  digitalWrite(PA2,HIGH);
  delay(250);
 }else{
  digitalWrite(PA2,LOW);
 }

 if(bacatombol2==1){   
  digitalWrite(PA3,HIGH);
  delay(250);
 }else{
  digitalWrite(PA3,LOW);
 }

 if(bacatombol3==1){  
  digitalWrite(PA4,HIGH);
  delay(250);
 }else{
  digitalWrite(PA4,LOW);
}
}
