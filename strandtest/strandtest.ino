#include <Adafruit_NeoPixel.h>
#define LED_PIN    5
int a = 250;
int b = 0;
int c = 0;
void setup() {
}
void loop() {
  for (int i=0;i<50;i++){
    delay(500);
    Adafruit_NeoPixel strip(i , LED_PIN);
    strip.begin();           
    strip.show();            
    strip.setBrightness(255);
    colorWipe(strip.Color(a,  b,   0), 50);  
    a = a - 25;
    if (a==25) {b = b + 25;}
    }
  delay(2000);
}
void colorWipe(uint32_t color, int wait) {}
