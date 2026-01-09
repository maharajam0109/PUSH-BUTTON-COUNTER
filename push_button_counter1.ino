#include <LiquidCrystal.h>

// RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tempPin = A0;
int buttonPin = 8;

int count = 0;
int lastButtonState = HIGH;

void setup() {
  lcd.begin(16, 2);

  pinMode(buttonPin, INPUT_PULLUP);  // button to GND

  lcd.setCursor(0, 0);
  lcd.print("Temp & Counter");
}

void loop() {
  // -------- TEMPERATURE PART --------
  int sensorValue = analogRead(tempPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100;

  // -------- BUTTON PART --------
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH) {
    count++;              // increment counter
    delay(200);           // debounce
  }
  lastButtonState = buttonState;

  // -------- LCD DISPLAY --------
  lcd.setCursor(0, 1);
  lcd.print("T:");
  lcd.print(temperatureC);
  lcd.print("C ");

  lcd.print("C:");
  lcd.print(count);
  lcd.print("  ");

  delay(300);
}
