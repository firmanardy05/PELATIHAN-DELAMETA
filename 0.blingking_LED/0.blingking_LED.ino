int R=2;
int Y=3;
int G=4;
void setup() {


pinMode(R,OUTPUT);
pinMode(Y,OUTPUT);
pinMode(G,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(R,HIGH);
digitalWrite(Y,LOW);
digitalWrite(G,LOW);
delay(50);
digitalWrite(R,LOW);
digitalWrite(Y,HIGH);
digitalWrite(G,LOW);
delay(50);
digitalWrite(R,LOW);
digitalWrite(Y,LOW);
digitalWrite(G,HIGH);
delay(50);
digitalWrite(R,LOW);
digitalWrite(Y,LOW);
digitalWrite(G,HIGH);
delay(50);
digitalWrite(R,LOW);
digitalWrite(Y,HIGH);
digitalWrite(G,LOW);
delay(50);
digitalWrite(R,HIGH);
digitalWrite(Y,LOW);
digitalWrite(G,LOW);
delay(50);
}
