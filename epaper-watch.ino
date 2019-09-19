//#define WATCH
//#define DEBUG

String quote;
String attribution;


void setup(void) {
  setupSerial();
  setupClockFromRTC();
  if (isTimeDataBogus(getCurrentTime())) {
    Serial.println(F("Time is way out of sync."));
    Serial.println(F("Getting time from NTP first..."));
    if (connectToWifi(-1)) syncTimeFromWifi();
  }

  int m = getCurrentMinute();
  setQuoteForMinute(m);
#ifdef DEBUG
  if (quote == "") {
    setQuoteToCurrentTime();
  }
#endif

  if (quote != "") {
    Serial.print(F("The quote for this minute ("));
    Serial.print(m);
    Serial.println(F(") is:"));
    Serial.println(quote);
    Serial.println(attribution);
    setupEpaper();
  }

  if (isTimeDataBogus(getCurrentTime())) {
    Serial.println(F("Time is way out of sync."));
    Serial.println(F("Getting time from NTP first..."));
    if (connectToWifi(-1)) syncTimeFromWifi();
  } else {
    syncIfItIsAGoodTime();
  }
  saveTimeAndSleep();
}

void syncIfItIsAGoodTime() {
  Serial.println(F("syncIfItIsAGoodTime..."));
  if (getMinuteOfTheHour() == 0) {
    Serial.println(F("Now is the right time to opportunistically sync ntp"));
    if (connectToWifi(-1)) syncTimeFromWifi();
  }
}

void setupSerial() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.printf("ESP8266 Chip id = %08X\n", ESP.getChipId());
}

void loop(void) {
}
