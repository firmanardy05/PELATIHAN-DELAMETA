//inisalisasi
int R =2;
int Y =3;
int G =4;
int FLAME =A1;
//int Buzzer=

void setup() {
Serial.begin(9600);
pinMode(R,OUTPUT);
pinMode(Y,OUTPUT);
pinMode(G,OUTPUT);
pinMode(FLAME,INPUT);
//pinMode(Buzzer,OUTPUT);


}

void loop() {
//BACA DATA
int bacaFLAME=analogRead(bacaFLAME);
   bacaFLAME=map(bacaFLAME,1024,0,0,255);
    
//Serial.print("Nilai LDR : ");
Serial.print(bacaFLAME);
Serial.println();

//LOGIKA
if (bacaFLAME<=20){
  Serial.print("AMAN...");
  delay(1000);
  digitalWrite(R,LOW);
  digitalWrite(Y,LOW);
  digitalWrite(G,HIGH);
}else if (bacaFLAME>=21 and bacaFLAME<=200){
  Serial.print("WARNING...");
  delay(2000);
  digitalWrite(R,LOW);
  digitalWrite(Y,HIGH);
  digitalWrite(G,LOW);
} else {
  Serial.print("BAHAYA...!!!");
  delay(2000);
  digitalWrite(R,HIGH);
  digitalWrite(Y,LOW);
  digitalWrite(G,LOW);
  
 
  } 
}  
  
