#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  delay(1000);

  int b = digitalRead(A3);
  int a = digitalRead(A4);
  int c = digitalRead(A5);

  if (b == HIGH) {
    lcd.print("Tank is full");
  } else {
    lcd.print("Low");
  }
}
