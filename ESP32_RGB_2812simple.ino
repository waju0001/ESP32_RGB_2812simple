/* 200118
 * Juergen Walter
 * RGBLED 
 * Green 0...100%
 * Red 0...100%
 * Blue 0...100%
 */
#include <Adafruit_NeoPixel.h>              //Version 1.3.4

#define PIN      15   // DIN Data in of RGBLED
#define NUMPIXELS 1   // how many RGBLED are there


Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // initializes NeoPixel object
}

void loop() {
char i=0;         // green
char j=0;         // red
char k=0;         // blue
for(i=0; i<255; i++)  {    
    pixels.setPixelColor(0, pixels.Color(i,j,k));
    pixels.show();   // updated pixel colors to the hardware.
    delay(20); // Pause before next pass through loop
      }
i=0;
for (j=0; j<255; j++) {
    pixels.setPixelColor(0, pixels.Color(i,j,k));
    pixels.show();   // updated pixel colors to the hardware.
    delay(20); // Pause before next pass through loop
      }
j=0;
for (k=0; k<255; k++)  {
    pixels.setPixelColor(0, pixels.Color(i,j,k));
    pixels.show();   // updated pixel colors to the hardware.
    delay(20); // Pause before next pass through loop
      }
k=0;
}
