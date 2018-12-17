#include "SPI.h"
#include <Adafruit_GFX.h>
#include <ILI9488.h>

#define TFT_CS         47
#define TFT_DC         48
#define TFT_RST        46
#define TFT_BACKLIGHT  13

// Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC
ILI9488 tft = ILI9488(TFT_CS, TFT_DC, TFT_RST);
// If using the breakout, change pins as desired
//Adafruit_ILI9488 tft = Adafruit_ILI9488(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

void setup()
{
  pinMode(TFT_CS, OUTPUT);
  digitalWrite(TFT_CS, HIGH);
  Serial.begin(57600);
  Serial.println("ILI9488 Test!");

  analogWrite(TFT_BACKLIGHT, 255);
  tft.begin();
}

