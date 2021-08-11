#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> 
#endif
#define LED_PIN    5
#define LED_COUNT 60
int a = 0;
int b = 0;
int c = 0;
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  strip.begin();           
  strip.show();            
  strip.setBrightness(255); 
}
void loop() {
  colorWipe(strip.Color(a,  0,   0), 50);  
  a = a + 25;
  if (a == 250) {colorWipe(strip.Color(0,b,0),50);b=b+25;}
}
void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, color);         
    strip.show();                          
    delay(10);                           
  }
}
