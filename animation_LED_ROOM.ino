#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(310, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  strip.begin();
  strip.setBrightness(150);
  strip.show(); 
}
void loop() {
  colorWipe(strip.Color(255, 0, 0), 50); // Red
  colorWipe(strip.Color(0, 255, 0), 50); // Green
  colorWipe(strip.Color(0, 0, 255), 50); // Blue
  colorWipe(strip.Color(200, 0, 55), 50); //mov
  colorWipe(strip.Color(180, 75, 0), 50); // sfar
  colorWipe(strip.Color(0, 55, 200), 50); // blue sial
  colorWipe(strip.Color(100, 0, 155), 50);
  theaterChase(strip.Color(255, 255, 255), 50); // White
  theaterChase(strip.Color(255, 0, 0), 50); // Red
  theaterChase(strip.Color(0, 0, 255), 50); // Blue
  theaterChase(strip.Color(255, 0, 255), 50);
  theaterChase(strip.Color(0, 255, 255), 50);
  theaterChase(strip.Color(0, 255, 0), 50);//green
  theaterChase(strip.Color(127, 127, 127), 50); // White
  theaterChase(strip.Color(127, 0, 0), 50); // Red
  theaterChase(strip.Color(0, 0, 127), 50);
  theaterChase(strip.Color(127, 0, 127), 50);
  theaterChase(strip.Color(0, 127, 127), 50);
  theaterChase(strip.Color(0, 127, 0), 50);
  theaterChase(strip.Color(55, 55, 55), 50); // White
  theaterChase(strip.Color(55, 0, 0), 50); // Red
  theaterChase(strip.Color(0, 0, 55), 50);
  theaterChase(strip.Color(55, 0, 55), 50);
  theaterChase(strip.Color(0, 55, 55), 50);
  theaterChase(strip.Color(0, 55, 0), 50);

  theaterChase(strip.Color(0, 0, 0), 50);

  rainbow(2);
  rainbowCycle(20);
  theaterChaseRainbow(5);
  theaterChaseRainbow(50);

  colorWipe(strip.Color(255, 0, 0), 0); // Red
  colorWipe(strip.Color(0, 0, 0), 0);
  colorWipe(strip.Color(0, 255, 0), 0); // Green
  colorWipe(strip.Color(0, 0, 0), 0);
  colorWipe(strip.Color(0, 0, 255), 0); 
  colorWipe(strip.Color(0, 0, 0), 0);
  colorWipe(strip.Color(200, 0, 55), 0); 
  colorWipe(strip.Color(0, 0, 0), 0);
  colorWipe(strip.Color(180, 75, 0), 0); // sfar
  colorWipe(strip.Color(0, 0, 0), 0);
  colorWipe(strip.Color(0, 55, 200), 0);
  colorWipe(strip.Color(0, 0, 0), 0);
  for(int i=0;i<100;i++){
    police(50);
  }
}
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}
void police(uint8_t wait){
  colorWipe_1(strip.Color(0, 0, 255), wait);
  colorWipe_1(strip.Color(0, 0, 0), wait);
  colorWipe_1(strip.Color(255, 0, 0), wait);
}
void colorWipe_1(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
  }
  strip.show();
  delay(wait);
}
void rainbow(uint8_t wait) {
  uint16_t i, j;
  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;
  for(j=0; j<256*5; j++) { 
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);  
      }
      strip.show();
      delay(wait);
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);     
      }
    }
  }
}
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, Wheel( (i+j) % 255));    
      }
      strip.show();
      delay(wait);
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        
      }
    }
  }
}
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}