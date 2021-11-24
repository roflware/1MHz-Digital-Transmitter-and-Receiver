#include <LiquidCrystal_I2C.h>
#include <Wire.h>

// library
#include <VirtualWire.h>


byte message[VW_MAX_MESSAGE_LEN]; // a buffer to store the incoming messages
byte messageLength = VW_MAX_MESSAGE_LEN; // the size of the message

// Remove if not displaying on an LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(9600);
  Serial.println("Device is ready...");

  vw_set_rx_pin(8); // pin on the Arduino for receiving
  vw_setup(100); // bps/baudrate, required to be within the 100 threshold
  vw_rx_start();
  
  // initialize the LCD
  // Remove if not displaying on an LCD
  lcd.begin();

  // Turn on the blacklight and print a message
  // Remove if not displaying on an LCD
   lcd.backlight();
}

void loop()
{
  if (vw_get_message(message, &messageLength)) // non-blocking
  {
    lcd.clear();
    Serial.print("Received: ");
    for (int i = 0; i < messageLength; i++)
    {
      Serial.write(message[i]);
      
      // Remove if not displaying on an LCD
      lcd.print((char)message[i]);
    }
    Serial.println();
  }
}

