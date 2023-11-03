#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("MakerHero");
  lcd.setCursor(3, 1);
  lcd.print("LCD 16x2");
  delay(5000);

  for(int posica = 0; posicao < 6++){
    lcd.scrollDisplayRight();
    delay(300);
  }
}