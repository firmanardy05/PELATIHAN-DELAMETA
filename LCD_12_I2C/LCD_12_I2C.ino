#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() { 
 Serial.begin(115200); 

}
void loop() {
 
 lcd.clear(); 
 lcd.setCursor(4,0); lcd.print("WELCOME");
 lcd.setCursor(0,1); lcd.print("FIRMAN ARDY PRAS");   
 delay(1000); 
 lcd.setCursor(4,0); lcd.print("PES MOBILE");
 lcd.setCursor(0,1); lcd.print("FIRMAN ARDY PRAS");
 
}
