#include <EEPROM.h>
#include <ezTime.h>

extern "C" {
#include "user_interface.h" // this is for the RTC memory read/write functions
}
#define RTCMEMORYSTART 66
#define RTCMEMORYLEN 125


typedef struct {
  int magicNumber;
  int valueCounter;
} rtcManagementStruc;

rtcManagementStruc rtcManagement;


void getWakeupReason() {

  rst_info *rsti;
  rsti = ESP.getResetInfoPtr();

  switch (rsti->reason) {
    case 5:
      Serial.println(" from RTC-RESET (ResetInfo.reason = 5)");
      break;
    case 6:
      Serial.println(" from POWER-UP (ResetInfo.reason = 6)");
      break;
  }
  Serial.println("I'm awake.");
  system_rtc_mem_read(64, &rtcManagement, 8);

}


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
