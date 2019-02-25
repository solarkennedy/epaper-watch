String quote;
String attribution;


void setup(void) {
  setupSerial();
  setupClockFromRTC();
  if (getCurrentTime() < 1000) {
    Serial.println(F("Time is way out of sync."));
    Serial.println(F("Getting time from NTP first..."));
    if (connectToWifi()) syncTimeFromWifi();
  }

  int m = getCurrentMinute();
  setQuoteForMinute(m);
  if (quote == "") {
    setQuoteToCurrentTime();
  }
  Serial.print(F("The quote for this minute ("));
  Serial.print(m);
  Serial.println(F(") is:"));
  Serial.println(quote);
  Serial.println(attribution);
  setupEpaper();
  syncIfItIsAGoodTime();
  saveTimeAndSleep();
}

void syncIfItIsAGoodTime() {
  if (getMinuteOfTheHour() == 0) {
    Serial.println(F("Now is the right time to opportunistically sync ntp"));
    if (connectToWifi()) syncTimeFromWifi();
  }
}

void setupSerial() {
  Serial.begin(115200);
  Serial.setTimeout(2000);
  while (!Serial) { }
  Serial.println();  Serial.println();  Serial.println();  Serial.println();  Serial.println();
  Serial.println();
}

void loop(void) {
}
