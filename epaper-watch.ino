

void setup(void) {

  Serial.begin(115200);
  delay(50);
  setupClock();

}


void loop(void) {
  handleTimeEvents();
}
