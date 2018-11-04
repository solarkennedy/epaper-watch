

void setup(void) {
  Serial.begin(115200);
  Serial.setTimeout(2000);
  while (!Serial) { }
  setupClock();
  getWakeupReason();
  Serial.println("Going into deep sleep for 20 seconds");
  ESP.deepSleep(20e6);
}


void loop(void) {
  handleTimeEvents();
  Serial.println("Going into deep sleep for for the second time for 40 seconds");
  ESP.deepSleep(40e6);
}
