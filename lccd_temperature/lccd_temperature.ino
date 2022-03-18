#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
const int lm=A0;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.clear();
lcd.setCursor(0,0);
lcd.print("temperature is ");
int val=analogRead(lm);
float temp=(float)val*(5/10.24);
lcd.setCursor(0,1);
lcd.print(temp);
delay(500);
}
