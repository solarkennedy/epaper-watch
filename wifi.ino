#include <ESP8266WiFi.h>

char ssid[32] = "";
char password[32] = "";
IPAddress myIP;

void saveCredentials() {
  EEPROM.begin(512);
  EEPROM.put(0, ssid);
  EEPROM.put(0+sizeof(ssid), password);
  char ok[2+1] = "OK";
  EEPROM.put(0+sizeof(ssid)+sizeof(password), ok);
  EEPROM.commit();
  EEPROM.end();
}

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
  Serial.println("Recovered credentials: ");
  Serial.print(ssid);
  Serial.print(" / ");
  Serial.println(password);
}

bool connectToWifi() {
  WiFi.mode(WIFI_STA);
  //saveCredentials();
  loadCredentials();
  Serial.print("Connected to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  // Connect to WiFi network
  Serial.print("Connecting");
  int counter = 0;
  while (WiFi.status() != WL_CONNECTED)
  {
    if (counter == wifi_timeout) {
      Serial.println();
      Serial.print(F("Timed out after "));
      Serial.print(wifi_timeout);
      Serial.println(F(" seconds. Moving on."));
      return false;
    }
    delay(1000);
    Serial.print(".");
    if (counter % 60 == 0) {
      Serial.println();
    }
    counter = counter + 1;
  }
  Serial.print("\r\nIP address: ");
  Serial.println(myIP = WiFi.localIP());
  Serial.println("");
  return true;
}
