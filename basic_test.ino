/* Active Buzzer [D026] : http://rdiot.tistory.com/260 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004
int BUZZER = 8;

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");

  pinMode(BUZZER,OUTPUT);
  delay(1000);

  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("D026 Active Buzzer");

  digitalWrite(BUZZER,HIGH);
  lcd.setCursor(0,1);
  lcd.print("buzzer HIGH");
  delay(1000);

  digitalWrite(BUZZER,LOW);
  lcd.setCursor(0,1);
  lcd.print("buzzer LOW ");
  delay(1000);
}
