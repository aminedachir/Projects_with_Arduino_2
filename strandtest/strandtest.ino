#include <Adafruit_NeoPixel.h>
#define LED_PIN    5
int a = 250;
int b = 250;
int c = 50;
void setup() {
}
void loop() {
  for (int i=0;i<16;i++){
    Adafruit_NeoPixel strip(i , LED_PIN);
    //colorWipe(strip.Color(a,  b,   0), 50); 
    delay(1000);
    strip.begin();           
    strip.show();            
    strip.setBrightness(255);
    //colorWipe(strip.Color(a,  b,   0), 50);  
    }
}
void colorWipe(uint32_t color, int wait) {}
