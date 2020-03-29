//#define WATCH
//#define DEV

const char compile_date[] = __DATE__ " " __TIME__;
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
#ifdef DEV
  if (quote == "") {
    setQuoteToCurrentTime();
  }
#endif

  Serial.print(F("The quote for this minute ("));
  Serial.print(m);
  Serial.println(F(") is:"));
  Serial.println(quote);
  Serial.println(attribution);
  if (quote != "") {
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
#ifdef WATCH
  if (getMinuteOfTheHour() == 0) {
#else
  if (getMinuteOfTheHour() % 5 == 0) {
#endif
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
  Serial.printf("Sketch compiled %s\n", compile_date);
}

void loop(void) {
}
