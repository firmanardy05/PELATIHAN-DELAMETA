//Inisialisasi pembuatan variable
#define A1 5 // Motor A pins
#define A2 10
#define B1 3 // Motor B pins
#define B2 6
int incomingByte = 0; // for incoming serial data
int input = 0;
void setup() {
 //Menentukan Fungsionalitas dari PIN pada Microcontroller
 Serial.begin(115200); //baudrate yang digunakan untuk komunikasi microcontroller dengan komputer
 pinMode(A1, OUTPUT);
 pinMode(A2, OUTPUT);
 pinMode(B1, OUTPUT);
 pinMode(B2, OUTPUT);
 digitalWrite(A1, LOW);
 digitalWrite(A2, LOW);
 digitalWrite(B1, LOW);
 digitalWrite(B2, LOW);
 
 Serial.println("Silahkan Pilih salah satu:");
 Serial.println("1.forward");
 Serial.println("2.backward");
 Serial.println("3.stop"); 
}
void loop() {
 //Program yang akan dijalankan berulang-ulang
 if (Serial.available() > 0) {
 // read the incoming byte:
 incomingByte = Serial.read();
 input = incomingByte - 48; //convert ASCII code of numbers to 1,2,3
 switch (input) { 
 case 1: // if input=1 ....... motors turn forward
 forward();
 break;
 case 2: // if input=2 ....... motors turn backward
 backward();
 break;
 case 3: // if input=1 ....... motors turn stop
 Stop();
 break;
 }
 delay(200);
 input=0;
}
}
void forward() { //function of forward 
 analogWrite(A1, 255);
 analogWrite(A2, 0);
 analogWrite(B1, 255);
 analogWrite(B2, 0);
}
void backward() { //function of backward
 analogWrite(A1, 0);
 analogWrite(A2, 210);
 analogWrite(B1, 0);
 analogWrite(B2, 210);
}
void Stop() { //function of stop
 digitalWrite(A1, LOW);
 digitalWrite(A2, LOW);
 digitalWrite(B1, LOW);
 digitalWrite(B2, LOW);
}
