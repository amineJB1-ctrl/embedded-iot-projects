#include <LiquidCrystal_I2C.h>
#include <DHT.h>

const int LSensor = A0;

#define DHTPIN 12
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27 , 20 , 4);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  float temp = dht.readTemperature();
  int hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Error reading DHT");
    return;
  }

  int light = 1023 - analogRead(LSensor);
  light = light * 0.097;

  lcd.setCursor(0,0);
  lcd.print("temperature:");
  lcd.setCursor(13,0);
  lcd.print(temp);
  lcd.setCursor(17,0);
  lcd.print("C");

  lcd.setCursor(0,1);
  lcd.print("humidity:");
  lcd.setCursor(10,1);
  lcd.print(hum);
  lcd.setCursor(13,1);
  lcd.print("%");

  lcd.setCursor(0,2);
  lcd.print("light:");
  lcd.setCursor(7,2);
  lcd.print(light);
  lcd.setCursor(10,2);
  lcd.print("%");

  Serial.print("Temp=");
  Serial.print(temp);
  Serial.print(" Hum=");
  Serial.print(hum);
  Serial.print(" Light=");
  Serial.println(light);

  if(light < 30){
    lcd.backlight();
  }
  else{
    lcd.noBacklight();
  }

  delay(1000);
  lcd.clear();
}
