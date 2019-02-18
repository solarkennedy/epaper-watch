#include <EEPROM.h>
#include <ezTime.h>

void handleTimeEvents() {
  events();
}

void setupClockFromRTC() {
  delay(1000);
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println("Getting time from RTC memory...");
  uint32_t data;
  uint32_t offset = 0;
  ESP.rtcUserMemoryRead(offset, &data, sizeof(data));
  Serial.print("Got: ");
  Serial.println(data);
  setTime(data);
  Serial.println("IS8601 (from RTC): " + UTC.dateTime(ISO8601));
}


void syncTimeAndSleep() {
  uint32_t offset = 0;
  long sleep_interval_ms = 60 * 1000;
  long sleep_interval_us = sleep_interval_ms * 1000;
  uint32_t data = now() + sleep_interval_ms;
  if (data < 1550519320 || now() > 2147483647) {
     Serial.print(F("The clock time looks bogus: "));
     Serial.println(data);
     Serial.print(F("Refusing to set the time. Resetting the RTC to 0 just in case"));
     data = 0;
  }
  Serial.print(F("Saving the next wakeup time in seconds to the RTC: "));
  Serial.println(data);
  ESP.rtcUserMemoryWrite(offset, &data, sizeof(data));
  Serial.println(F("Going into deep sleep..."));
  ESP.deepSleep(sleep_interval_us, WAKE_RF_DISABLED);
}

void syncTimeFromWifi() {
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
  Serial.println("Getting time from WIFI...");
  setInterval(60);
  setDebug(DEBUG);
  if (! waitForSync(300)) {
    Serial.println("Failed to sync from NTP");
  }
  Serial.println("IS8601 (Synced):      " + UTC.dateTime(ISO8601));
}

uint32_t getCurrentTime() {
  return now();
}

int getCurrentMinute() {
  return hour() * 60 + minute();
}
