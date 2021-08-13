#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h>
#endif
#define LED_PIN    5
int a=3;
#define LED_COUNT 15
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  strip.begin(); 
  strip.show(); 
  strip.setBrightness(255);
  //animation_1(strip.Color(  255,   255, 255),400);
  //animation_2(7.5);
  //animation_1(strip.Color(  0,   0, 0),400);
  animation_3(strip.Color(  255,   255, 255),400);
  animation_3(strip.Color(  0,   0, 0),400);
  //animation_3(500);
}
void loop() {   
}
void animation_1(uint32_t color,int wait) {
  for(int i=0; i<strip.numPixels(); i++) { 
    strip.setPixelColor(i, color);
    strip.show();                          
    delay(wait);
  }
} 
void animation_2(int wait) {
  for(long firstPixelHue = 0; firstPixelHue < 5*65536; firstPixelHue += 256) {
    for(int i=0; i<strip.numPixels(); i++) {
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show();
    delay(wait); 
  }
}
void animation_3(uint32_t color,int wait) {
  for(int i=0; i<3; i++) { 
    strip.setPixelColor(i, color);
    strip.show();                          
    delay(wait);
  }
  for(int i=3; i<6; i++) { 
    strip.setPixelColor(i, color);
    strip.show();                          
    delay(wait);
  }
}
