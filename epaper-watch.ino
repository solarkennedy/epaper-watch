
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <EEPROM.h>
#include <ezTime.h>
#include <SPI.h>

char ssid[32] = "";
char password[32] = "";
IPAddress myIP;       // IP address in your local wifi net


void setup(void) {

  Serial.begin(115200);
  delay(50);
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
  setInterval(60);
  setDebug(INFO);

  if (timeIsUnset() == true) {
    connectToWifi();
    waitForSync();
  }
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));

}


void loop(void) {
    events();
}
