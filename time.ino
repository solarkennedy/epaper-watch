#include <EEPROM.h>
#include <ezTime.h>

void handleTimeEvents() {
  events();
}


void setupClockFromRTC() {
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
  Serial.println("Getting time from RTC memory...");
  uint32_t data;
  uint32_t offset = 0;
  ESP.rtcUserMemoryRead(offset, &data, sizeof(data));
  Serial.print("Got: ");
  Serial.println(data);
  setTime(data);
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
}


void syncTimeAndSleep() {
  uint32_t offset = 0;
  long sleep_interval_ms = 60 * 1000;
  long sleep_interval_us = sleep_interval_ms * 1000;
  uint32_t data = now() + sleep_interval_ms;
  ESP.rtcUserMemoryWrite(offset, &data, sizeof(data));
  ESP.deepSleep(sleep_interval_us, WAKE_RF_DISABLED);
  //ESP.deepSleepInstant(sleep_interval_us, WAKE_RF_DISABLED);
}


void syncTimeFromWifi() {
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
  Serial.println("Getting time from WIFI...");
  setInterval(60);
  setDebug(DEBUG);
  waitForSync();
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
}

int getCurrentMinute() {
  return minute();
}
