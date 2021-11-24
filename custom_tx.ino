#include <VirtualWire.h>

void setup() 
{
  Serial.begin(9600); 

  // virtual wire
  vw_set_tx_pin(8); // pin on the Arduino for receiving
  vw_setup(100); // bps/baudrate, required to be within the 100 threshold
}

void loop()
{
  sendString("A", true); // modify to whatever string here within reason for a baudrate of ~100bps 
  delay(1000); 
}

void sendString(String message, bool wait)
{
  byte messageLength = message.length() + 1; 

  // convert string to char array
  char charBuffer[messageLength]; 
  message.toCharArray(charBuffer, messageLength);

  vw_send((uint8_t *)charBuffer, messageLength); 

  if (wait) vw_wait_tx(); 

  Serial.println("Sent: " + message); 
}
