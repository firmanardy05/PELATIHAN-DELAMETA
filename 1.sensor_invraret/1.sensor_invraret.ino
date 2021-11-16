//inisialisi
//UNTUK TOMBOL
int tombol1=2;
int tombol2=3;
int tombol3=4;
int kunci1;

//UNTUK LED
int R=5;
int Y=6;
int G=7;
int status;


void setup() {
Serial.begin(9600);
pinMode(tombol1,INPUT);
pinMode(R,OUTPUT);
}


void loop() {  
//LOGIKA
int bacaTombol1=digitalRead(tombol1); 

//Serial.println("kondisi Tombol:"+ String (bacaTombol1)+" | "+ String (kunci1));
//Serial.println("kondisi Tombol:"+ String (bacaTombol2)+" | "+ String (kunci1));
//Serial.println("kondisi Tombol:"+ String (bacaTombol3)+" | "+ String (kunci1));

//START TOMBOL1
if(bacaTombol1==0 and status==0);{
  delay(500);
  Serial.println("LED ON");
  digitalWrite(R,HIGH);
  status=1;
  }
if(bacaTombol1==0 && status==1){
  delay(500);
  Serial.println("LED OFF");
  digitalWrite(R,LOW);
  status=0;
}
//STOP TOMBOL1


}
