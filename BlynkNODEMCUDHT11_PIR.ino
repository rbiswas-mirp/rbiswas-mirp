#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include "DHT.h"           // including the library of DHT11 temperature and humidity sensor
#include <SimpleTimer.h>   //including the library of SimpleTimer
#define DHTTYPE DHT22      // DHT 11

#define dht_dpin D3
#define ledPin D7 
#define pirPin D1 // Input for HC-S501
int pirValue; // Place to store read PIR Value
DHT dht(dht_dpin, DHTTYPE); 
SimpleTimer timer;
char auth[] = "d1bbd1a3116340ffb8323cc6678a9434";            // You should get Auth Token in the Blynk App.
                                           // Go to the Project Settings (nut icon).

char ssid[] = "NODEMCU";    // Your WiFi credentials.
char pass[] = "navyseal";  // Set password to "" for open networks.
float t;                                   // Declare the variables 
float h;



void setup()
{
    Serial.begin(115200);// Debug console
    delay(10);
    Blynk.begin(auth, ssid, pass);
    dht.begin();
    pinMode(ledPin, OUTPUT);
    pinMode(pirPin, INPUT);
    digitalWrite(ledPin, LOW);
    timer.setInterval(2000, sendUptime);
}

void sendUptime()
{
  
  float h = dht.readHumidity();
  float t = dht.readTemperature(); 
  Serial.println("Humidity and temperature\n\n");
  Serial.print("Current humidity = ");
  Serial.print(h);
  Serial.print("%  ");
  Serial.print("temperature = ");
  Serial.print(t); 
  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);
  
}

void loop()
{ getPirValue();
  Blynk.run();
  timer.run();
}

void getPirValue(void)
{
  pirValue = digitalRead(pirPin);
  if (pirValue) 
  { 
    Serial.println("==> Motion detected");
    Blynk.notify("T==> Motion detected");  
  }
  digitalWrite(ledPin, pirValue);
}

