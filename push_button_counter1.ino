#include <LiquidCrystal.h>

// RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tempPin = A0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperature:");
}

void loop() {
  int sensorValue = analogRead(tempPin);

  // Convert analog value to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert voltage to temperature (TMP36)
  float temperatureC = (voltage - 0.5) * 100;

  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print(" C   ");

  delay(1000);
}
