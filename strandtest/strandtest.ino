#include <Adafruit_NeoPixel.h>
#define LED_PIN    5
void setup() {
}
void loop() {
  for (int i=0;i<16;i++){
    Adafruit_NeoPixel strip(i , LED_PIN);
    delay(500);
    strip.begin();           
    strip.show();            
    strip.setBrightness(255);
    //colorWipe(strip.Color(a,  b,   0), 50);  
    }
}
void colorWipe(uint32_t color, int wait) {}
