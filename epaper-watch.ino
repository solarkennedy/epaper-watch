
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include "epd.h"        // e-Paper driver
#include <EEPROM.h>
#include <ezTime.h>


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

void setup(void) {

  Serial.begin(115200);
  delay(50);

  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));


  // SPI initialization
  pinMode(CS_PIN  , OUTPUT);
  pinMode(RST_PIN , OUTPUT);
  pinMode(DC_PIN  , OUTPUT);
  pinMode(BUSY_PIN,  INPUT);
  SPI.begin();

  if timeIsUnset() {
    connectToWifi();
    waitForSync();
  }

}

void loop(void) {
}

void EPD_Init()
{
  EPD_dispIndex = 6;
  // Print log message: initialization of e-Paper (e-Paper's type)
  Serial.printf("EPD %s\r\n", EPD_dispMass[EPD_dispIndex].title);

  // Initialization
  EPD_dispInit();
}

void EPD_Load()
{
}

void EPD_Next()
{
  Serial.println("NEXT");

  // Instruction code for for writting data into
  // e-Paper's memory
  int code = EPD_dispMass[EPD_dispIndex].next;

  // If the instruction code isn't '-1', then...
  if (code != -1)
  {
    // Do the selection of the next data channel
    EPD_SendCommand(code);
    delay(2);
  }
  // Setup the function for loading choosen channel's data
  EPD_dispLoad = EPD_dispMass[EPD_dispIndex].chRd;

}

void EPD_Show()
{
  Serial.println("SHOW");
  // Show results and Sleep
  EPD_dispMass[EPD_dispIndex].show();
}

void handleNotFound() {
  Serial.print("Unknown URI: ");
}
