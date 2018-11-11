void setup(void) {
  setupSerial();
  setupClock();
  //setupEpaper();
  int current_minute = getCurrentMinute();
  print_minute(current_minute);
  connectToWifi();
  syncTimeFromWifi();
  syncTimeAndSleep();
}


void loop(void) {
}

void setupSerial() {
  Serial.begin(115200);
  Serial.setTimeout(2000);
  while (!Serial) { }
  Serial.println();  Serial.println();  Serial.println();  Serial.println();  Serial.println();
  Serial.println();
}
