



void EPD_Next()
{
  Serial.println("NEXT");

  // Instruction code for for writting data into
  // e-Paper's memory
  int code = EPD_dispMass[EPD_dispIndex].next;

  // If the instruction code isn't '-1', then...
  if (code != -1)
  {
    // Do the selection of the next data channel
    EPD_SendCommand(code);
    delay(2);
  }
  // Setup the function for loading choosen channel's data
  EPD_dispLoad = EPD_dispMass[EPD_dispIndex].chRd;
}

void EPD_Show()
{
  Serial.println("SHOW");
  // Show results and Sleep
  EPD_dispMass[EPD_dispIndex].show();
}
