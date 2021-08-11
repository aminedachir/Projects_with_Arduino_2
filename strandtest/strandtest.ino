#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> 
#endif
#define LED_PIN    5
#define LED_COUNT 60
int a = 50;
int b = 50;
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
  for (int i=0;i<10;i++){
    colorWipe(strip.Color(a,  b,   0), 50);  
    a = a + 5;
    b = b + 10;
    }
  delay(100);
  a = 0;
  b = 0;
  for (int i=0;i<10;i++){
    colorWipe(strip.Color(0,  b,   0), 50);
    b = b + 5;
    }
  delay(500);
  b = 0;
}
void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, color);         
    strip.show();                          
    delay(10);                           
  }
}
