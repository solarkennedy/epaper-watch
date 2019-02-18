
void setup(void) {
  setupSerial();
  setupClockFromRTC();
  if (getCurrentTime() < 1000) {
    Serial.println("Time is way out of sync.");
    Serial.println("Getting time from NTP first...");
  } else {
    print_minute(getCurrentMinute());
    setupEpaper(getCurrentTime());
  }
  connectToWifi();
  syncTimeFromWifi();
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
