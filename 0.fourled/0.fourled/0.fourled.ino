int R=2;
int Y=3;
int G=4;
void setup() {

for (int i=2; i<=4; i++){
pinMode(i,OUTPUT);
}
}
void loop() {
for (int i=2; i<=4; i++){
digitalWrite(i,HIGH);
delay(100);
digitalWrite(i,LOW);
delay(100);
}
}
