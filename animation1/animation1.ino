#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h>
#endif
#define LED_PIN    5
#define LED_COUNT 17
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  strip.begin(); 
  strip.show(); 
  strip.setBrightness(50);
}
void loop() {
  colorWipe(strip.Color(255,   0,   0), 50);
  colorWipe(strip.Color(  0, 255,   0), 50); 
  colorWipe(strip.Color(  0,   0, 255), 50); 
}
void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
    delay(300);                           //  Pause for a moment
  }
}
