#include <EEPROM.h>
#include <ezTime.h>
Timezone MyTZ;
const char local_tz[] = "America/Los_Angeles";

void handleTimeEvents() {
  events();
}

void setupClockFromRTC() {
  Serial.println("Getting time from RTC memory...");
  uint32_t data;
  uint32_t offset = 0;
  ESP.rtcUserMemoryRead(offset, &data, sizeof(data));
  Serial.print("Got: ");
  Serial.println(data);
  if (data == 0) {
    Serial.println(F("Clock is not set. Refusing to set the time from RTC"));
  } else {
    setTime(data);
  }
  Serial.println("UTC       (from RTC): " + UTC.dateTime(ISO8601));
  if (!MyTZ.setCache(1024)) MyTZ.setLocation(local_tz);
  Serial.println("LocalTime (from RTC): " + MyTZ.dateTime(ISO8601));
}


void printSystemUptime() {
  Serial.print(F("Uptime: "));
  Serial.print(millis());
  Serial.println(F(" milliseconds."));
}

bool isTimeDataBogus(uint32_t data) {
  if (data < 1550519320 || data > 1866652033) {
    return true;
  } else {
    return false;
  }
}

void saveTimeAndSleep() {
  Serial.println(F("saveTimeAndSleep..."));
  uint32_t offset = 0;
  long sleep_interval_s = 60;
  long sleep_interval_us = sleep_interval_s * 1000000;
  uint32_t data = now() + sleep_interval_s;
  if (isTimeDataBogus(data)) {
    Serial.print(F("The clock time looks bogus: "));
    Serial.println(data);
    Serial.print(F("Refusing to set the time. Resetting the RTC to 0 just in case"));
    data = 0;
  }
  Serial.print(F("Saving the next wakeup time in seconds to the RTC: "));
  Serial.println(data);
  ESP.rtcUserMemoryWrite(offset, &data, sizeof(data));
  Serial.print(F("Going into deep sleep for "));
  Serial.print(sleep_interval_s);
  Serial.print(F(" seconds. Uptime: "));
  Serial.print(millis());
  Serial.println(F(" milliseconds."));
  dSleep(sleep_interval_us);
}

void dSleep(long us) {
#ifdef WATCH
    ESP.deepSleep(us, WAKE_RF_DISABLED);
#else
    Serial.println("No reset pin + interrupt hardware on this model. Sleeping like normal and resetting");
    delay(us / 1000);
    ESP.reset();
#endif
}

void syncTimeFromWifi() {
  Serial.println("IS8601:      " + UTC.dateTime(ISO8601));
  Serial.println("Getting time from WIFI...");
  if (!MyTZ.setCache(1024)) MyTZ.setLocation("America/Los_Angeles");
  setInterval(0);
  setDebug(DEBUG);
  // TODO: Timeout here somehow
  updateNTP();
}

uint32_t getCurrentTime() {
  return MyTZ.now();
}

int getCurrentMinute() {
  return MyTZ.hour() * 60 + MyTZ.minute();
}

int getMinuteOfTheHour() {
  return MyTZ.minute();
}

void setQuoteToCurrentTime() {
  quote = "The time is: * " + MyTZ.dateTime(ISO8601) + " * \n";
  attribution = "Set from the local time";
}
