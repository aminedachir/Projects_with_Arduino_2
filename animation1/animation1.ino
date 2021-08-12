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
  animation1(strip.Color(  255,   255, 255));
  animation1(strip.Color(  0,   0, 0));
}
void loop() {
  //animation1(strip.Color(200,   150,   0));
  //animation1(strip.Color(  0, 255,   100)); 
  //animation1(strip.Color(  0, 255,   0));
  //animation1(strip.Color(  0,   0, 255));  
}
void animation1(uint32_t color) {
  for(int i=0; i<strip.numPixels(); i++) { 
    strip.setPixelColor(i, color);        
    strip.show();                          
    delay(250);
    if (i==17) {strip.begin();strip.show();strip.setBrightness(0);}
  }
} 
//void animation2
