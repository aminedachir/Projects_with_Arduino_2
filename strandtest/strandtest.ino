#include <Adafruit_NeoPixel.h>
#define LED_PIN    5
void setup() {
}
void loop() {
  for (int i=0;i<160;i++){
    Adafruit_NeoPixel strip(i , LED_PIN);
    delay(500);
    strip.begin();           
    strip.show();            
    strip.setBrightness(255);  
    }
}
