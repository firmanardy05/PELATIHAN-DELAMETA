int R=2;
int Y=3;
int G=4;
void setup() {

for (int i=2; i<=4; i++){
pinMode(i,OUTPUT);
}
}
void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(R,HIGH);
digitalWrite(Y,LOW);
digitalWrite(G,LOW);
delay(1000);
digitalWrite(R,LOW);
digitalWrite(Y,HIGH);
digitalWrite(G,LOW);
delay(1000);
digitalWrite(R,LOW);
digitalWrite(Y,LOW);
digitalWrite(G,HIGH);
delay(1000);
}
