#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);//设置LCD要显示的列数、行数，即2行16列
  lcd.print("hello, world!");//输出Hello World
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);//设置光标定位到第0列，第1行（从0开始）
  lcd.print(millis() / 1000);
}
