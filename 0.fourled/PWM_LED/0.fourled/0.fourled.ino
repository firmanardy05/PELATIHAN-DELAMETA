int R=2;
int Y=3;
int G=4;
void setup() {
Serial.begin(9600);
for (int i=2; i<=6; i++){
pinMode(i,OUTPUT);
}
}
void loop() {
 for(float i=0; i<=255;i++){
  analogWrite(3,i);
  //float volt=map(i,0,255,0,5);
  float volt=(5.0/255.0);
  float hasil = i*volt;
 //Serial.println("Nilai :" + String(hasil) + " volt");
 Serial.println(hasil);
  delay(5);
 }

for(float i=255; i<=0;i++){
  analogWrite(3,i);
  //float volt=map(i,0,255,0,5);
  float volt=(5.0/255.0);
  float hasil = i*volt;
 // Serial.println("Nilai :" + String(hasil) + " volt");
 Serial.println(hasil);
  delay(5);
}
}
