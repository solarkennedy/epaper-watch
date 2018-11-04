#include <EEPROM.h>
#include <ezTime.h>
void handleTimeEvents() {
  events();
}


void setupClock() {
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
  setInterval(60);
  setDebug(DEBUG);

  connectToWifi();
  waitForSync();
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
}
