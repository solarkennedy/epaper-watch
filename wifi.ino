
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

char ssid[32] = "";
char password[32] = "";
IPAddress myIP;       // IP address in your local wifi net



void loadCredentials() {
  EEPROM.begin(512);
  EEPROM.get(0, ssid);
  EEPROM.get(0 + sizeof(ssid), password);
  char ok[2 + 1];
  EEPROM.get(0 + sizeof(ssid) + sizeof(password), ok);
  EEPROM.end();
  if (String(ok) != String("OK")) {
    ssid[0] = 0;
    password[0] = 0;
  }
  Serial.println("Recovered credentials:");
  Serial.println(ssid);
  Serial.println(password);
}

void connectToWifi() {
  WiFi.mode(WIFI_STA);
  loadCredentials();
  Serial.print("Connected to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  // Connect to WiFi network
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.print("\r\nIP address: ");
  Serial.println(myIP = WiFi.localIP());
  Serial.println("");

}
