#include <ESP8266WiFi.h>

char ssid[32] = "";
char password[32] = "";
IPAddress myIP;

void saveCredentials() {
  EEPROM.begin(512);
  EEPROM.put(0, ssid);
  EEPROM.put(0 + sizeof(ssid), password);
  char ok[2 + 1] = "OK";
  EEPROM.put(0 + sizeof(ssid) + sizeof(password), ok);
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

bool connectToWifi(int timeout) {
  WiFi.mode(WIFI_STA);
  // saveCredentials();
  loadCredentials();
  Serial.print("Conneting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  // Connect to WiFi network
  int counter = 1;
  while (WiFi.status() != WL_CONNECTED)
  {
    if (counter == timeout) {
      Serial.println();
      Serial.print(F("Timed out after "));
      Serial.print(timeout);
      Serial.println(F(" seconds. Moving on."));
      return false;
    }
    delay(1000);
    Serial.print(".");
    if (counter % 60 == 0) {
      Serial.println();
      Serial.print(F("Status: "));
      Serial.println(wl_status_to_string(WiFi.status()));
    }
    counter = counter + 1;
  }
  Serial.print("\r\nIP address: ");
  Serial.println(myIP = WiFi.localIP());
  Serial.println("");
  delay(1000);
  return true;
}


const char* wl_status_to_string(int status) {
  switch (status) {
    case WL_NO_SHIELD: return "WL_NO_SHIELD";
    case WL_IDLE_STATUS: return "WL_IDLE_STATUS";
    case WL_NO_SSID_AVAIL: return "WL_NO_SSID_AVAIL";
    case WL_SCAN_COMPLETED: return "WL_SCAN_COMPLETED";
    case WL_CONNECTED: return "WL_CONNECTED";
    case WL_CONNECT_FAILED: return "WL_CONNECT_FAILED";
    case WL_CONNECTION_LOST: return "WL_CONNECTION_LOST";
    case WL_DISCONNECTED: return "WL_DISCONNECTED";
  }
}
