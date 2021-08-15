#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h>
#endif
#define LED_PIN    5
int brightness;
#define LED_COUNT 50
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN,NEO_GRB + NEO_KHZ800);
void setup() {
  strip.begin(); 
  strip.show(); 
  strip.setBrightness(255);
  //animation_1(strip.Color(  255,   155, 255),200);
  //animation_2(2);
  //animation_1(strip.Color(  0,   0, 0),200);
  //three_leds(strip.Color(  155,   155, 0),100);
  //delay(500);
  //three_leds(strip.Color(  0,   0, 0),400);
  //animation_3(500);
  two_two(strip.Color(  255,   30, 0),600);
  //last_first(strip.Color(  255,   30, 0),1000);
}
void loop() {   
}
void animation_1(uint32_t color,int wait) {
  for(int i=0; i<LED_COUNT; i++) { 
    int a = random(0,255);
    int b = random(0,255);
    int c = random(0,255);
    strip.setPixelColor(i, strip.Color(a,b,c));
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
void three_leds(uint32_t color,int wait) {
  for(int i=0; i<LED_COUNT; i++) { 
    int a = random(0,255);
    int b = random(0,255);
    int c = random(0,255);
    strip.setPixelColor(i, strip.Color(a,a,c));
    strip.setPixelColor(i+1, strip.Color(a,b,0));
    strip.setPixelColor(i+2, strip.Color(a,0,c));
    strip.setPixelColor(i-1,strip.Color(0,0,0));
    strip.show();                          
    delay(wait);
  }
}
void two_two(uint32_t color,int wait) {
  for(int i=0; i<LED_COUNT; i++) { 
    int a = random(0,255);
    int b = random(0,255);
    int c = random(0,255);
    strip.setPixelColor(i,strip.Color(a,b,c));
    strip.setPixelColor(i+2, strip.Color(a,b,c));
    strip.setPixelColor(i-1,strip.Color(0,0,0));
    strip.setPixelColor(i+1,strip.Color(0,0,0));
    strip.show();                          
    delay(wait);
  } 
}
void last_first(uint32_t color,int wait) {
  for(int i=0; i<LED_COUNT; i++) { 
    int a = random(0,255);
    int b = random(0,255);
    int c = random(0,255);
    strip.setPixelColor(i,strip.Color(a,b,c));
    strip.setPixelColor(i+1, strip.Color(a,b,0));
    strip.setPixelColor(i+2, strip.Color(a,b,c));
    strip.setPixelColor(i,strip.Color(0,0,0));
    strip.setPixelColor(i-1,strip.Color(0,0,0));
    strip.show();                          
    delay(wait);
  } 
}
void setBrightness_(uint32_t color,int wait) {
  for (int i=0;i<LED_COUNT;i++) {
    strip.setPixelColor(i, color));
    strip.setBrightness(brightness)
    strip.show();                          
    delay(wait);
    }
  }
