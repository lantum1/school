#include <LiquidCrystal.h>

LiquidCrystal lcd(4, 5, 10, 11, 12, 13);

byte human1[8] = {
  B00110,
  B00110,
  B00100,
  B01110,
  B10101,
  B01010,
  B10001,
};

byte human2[8] = {
  B00110,
  B00110,
  B00100,
  B01110,
  B01110,
  B10001,
  B10001,
};

void setup() {

  //lcd.setCursor(0, 5);
  lcd.createChar(0, human1);
  lcd.begin(16, 2);
  lcd.write(byte(0));
  //delay(500);
  lcd.createChar(1, human2);
  lcd.write(byte(1));
  delay(500);
  lcd.begin(16, 2);
}

void loop() {
  lcd.write(byte(0));

}
