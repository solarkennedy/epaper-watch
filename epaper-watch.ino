String quote;

void setup(void) {
  setupSerial();
  setupClockFromRTC();
  if (getCurrentTime() < 1000) {
    Serial.println(F("Time is way out of sync."));
    Serial.println(F("Getting time from NTP first..."));
    connectToWifi();
    syncTimeFromWifi();
  } else {
    int m = getCurrentMinute();
    setQuoteForMinute(m);
    Serial.print(F("The quote for this minute ("));
    Serial.print(m);
    Serial.println(F(") is:"));
    Serial.println(quote);
    setupEpaper();
  }

  syncTimeAndSleep();
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
