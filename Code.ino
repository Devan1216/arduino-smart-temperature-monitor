#include <DHT.h>
#include <LiquidCrystal.h>

#define DHTPIN A0
#define DHTTYPE DHT11

#define RED_LED 8
#define GREEN_LED 9

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  dht.begin();
  lcd.begin(16, 2);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  float humidity = dht.readHumidity();
  float temperatureC = dht.readTemperature();

  float temperatureF = (temperatureC * 9 / 5) + 32;

  lcd.clear();

  if (temperatureF > 75) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperatureF);
    lcd.print("F");

    lcd.setCursor(0, 1);
    lcd.print("Turn AC On");
  }
  else if (temperatureF < 65) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperatureF);
    lcd.print("F");

    lcd.setCursor(0, 1);
    lcd.print("Turn Heat On");
  }
  else {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);

    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperatureF);
    lcd.print("F");

    lcd.setCursor(0, 1);
    lcd.print("Status: OK");    
  }

  delay(1000);
}
