#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h>
#endif
#define LED_PIN    5
int brightness = 5;
float green=0;
float green_=0;
float red=255;
float blue=0;
int rg=2;
int doub =1;
int oub = 2;
int sb = 0;
#define LED_COUNT 16
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN,NEO_GRB + NEO_KHZ800);
void setup() {
  Serial.begin(9600);
  strip.begin(); 
  strip.show(); 
  strip.setBrightness(50);
  //animation_1(strip.Color(  255,   155, 255),200);
  //stick_stack(500);
  //rainbow_2(2);
  //__rainbow__(2);
  //animation_1(strip.Color(  0,   0, 0),200);
  //three_leds(strip.Color(  155,   155, 0),100);
  //delay(500);
  //three_leds(strip.Color(  0,   0, 0),400);
  //animation_3(500);
  //two_two(strip.Color(  255,   30, 0),600);
  //last_first(strip.Color(  255,   30, 0),1000);
  //setBrightness_(strip.Color(  255,   30, 0),500);
  //five_leds(strip.Color(  255,   30, 0),100);
  //rainbow_leds(300);
  //loofi(200);
  //chargeur(100);
  //train(50);
  //precedent(500);
  //moins(1000);
  //turtle(70);
  guitar(300);
}
void loop() {   
  //int a = random(0,255);
  //int b = random(0,255);
  //int c = random(0,255);
  //random_colors(strip.Color(  a,   b, c),100);
  //rainbow_leds(100);
}
void animation_1(uint32_t color,int wait) {
  for(int i=0; i<LED_COUNT; i++) { 
    int a = random(0,255);
    int b = random(0,255);
    int c = random(0,255);
    strip.setPixelColor(i, strip.Color(a,b,c));
    strip.show();                          
    delay(wait);
    if (i==LED_COUNT-1) {
      for (int i=0;i<LED_COUNT;i++) {
        strip.setPixelColor(i, strip.Color(0,0,0));
        strip.show();                          
        delay(wait);
        }
      }
  }
} 
void rainbow_2(int wait) {
  for(int i=0; i<=LED_COUNT; i++) {
    for(long firstPixelHue = 0; firstPixelHue < 5*65536; firstPixelHue += 556) {
      int pixelHue =i * 65536L / LED_COUNT;
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
      strip.show();
      //delay(wait);
      if (i==LED_COUNT) {
        for (int i=0;i<LED_COUNT;i++) {
          strip.setPixelColor(i,strip.Color(0,0,0));
          strip.show();
          delay(200);
        }
        }
    }
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
  for(int i=0; i<=LED_COUNT; i++) { 
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
  for (int i=0;i<LED_COUNT+1;i++) {
    strip.setPixelColor(i, color);
    strip.setBrightness(brightness);
    strip.show();                          
    delay(wait);
    brightness = brightness + 20;
}
}

void random_colors (uint32_t color,int wait) {
  for(int i=0; i<LED_COUNT; i++) { 
    int a = random(0,255);
    int b = random(0,255);
    int c = random(0,255);
    strip.setPixelColor(i, strip.Color(a,b,c));
    strip.show();                          
    delay(wait);
    if (i==LED_COUNT-1) {
      delay(200);
      for(int i=0; i<LED_COUNT; i++) {
        strip.setPixelColor(i, color);
        strip.show();                          
        delay(wait);
        }
    }
  }
  }
  /*
void __rainbow__(uint8_t wait) {
  uint16_t i,j;
  for(j=0;j<255;j++) {
    for(i=0;i<=LED_COUNT;i++) {
      j+=15;
      strip.setPixelColor(i,Wheel((i*1+j)&255));
      strip.show();
      delay(100);
      if (i==LED_COUNT) {
        for (int i=0;i<LED_COUNT;i++) {
          strip.setPixelColor(i,strip.Color(0,0,0));
          strip.show();
          delay(200);
      j=255;
        }
        }
      }
      //strip.show();
      //delay(wait);
    }
}
uint32_t Wheel(byte WheelPos) {
  if(WheelPos <85) {
    return strip.Color(WheelPos * 3, 255-WheelPos*3,0);
  }
  else if(WheelPos <170) {
    WheelPos -=85;
    return strip.Color(255 - WheelPos * 3, 0,WheelPos*3);
  }
  else {
    WheelPos -=170;
    return strip.Color(0,WheelPos * 3, 255-WheelPos*3);
  }
  }
*/ 
void stick_stack(int wait) {
  for(int i=0; i<LED_COUNT/2; i++) { 
    int a = random(0,255);
    int b = random(0,255);
    int c = random(0,255);
    strip.setPixelColor(i, strip.Color(a,b,c));
    strip.show();                          
    delay(wait);
    if (i==LED_COUNT/2-1) {
      for (int i=0;i<LED_COUNT;i++) {
        int a = random(0,255);
        int b = random(0,255);
        int c = random(0,255);
        //strip.setPixelColor(i+1,color);
        strip.setPixelColor(i,strip.Color(0,0,0));
        strip.setPixelColor(i+LED_COUNT/2,strip.Color(a,b,c));
        strip.show();                          
        delay(wait);
        }
      }
  }
  }
  /*
void stick_stack1(int wait) {
  //for(int i=0; i<LED_COUNT/2; i++) { 
  uint16_t i,j;
  for(j=0;j<255;j++) {
    for(i=0;i<=LED_COUNT/2;i++) {
      j+=15;
      strip.setPixelColor(i,Wheel((i*1+j)&255));
      strip.show();
      delay(100);
    if (i==LED_COUNT/2-1) {
      for (int i=0;i<LED_COUNT;i++) {
        int a = random(0,255);
        int b = random(0,255);
        int c = random(0,255);
        //strip.setPixelColor(i+1,color);
        strip.setPixelColor(i,strip.Color(0,0,0));
        strip.setPixelColor(i+LED_COUNT/2,strip.Color(a,b,c));
        strip.show();                          
        delay(wait);
        }
      }
  }
  }
}
*/
void rainbow_leds (int wait) {
  for(int i=0; i<=LED_COUNT; i++) {
    float avg = LED_COUNT / 5;
    float avg_led = 255/avg;
    if(green_ < 255) { 
      Serial.print("avg");
      Serial.println(avg_led);
      strip.setPixelColor(i,strip.Color(green,red,blue));
      green=green+avg_led;
      green_=green_+avg_led;
    }
    else if (green == 255 and red > 0) {
      Serial.print("avg");
      Serial.println(avg_led);
      strip.setPixelColor(i,strip.Color(green,red,blue));
      red=red-avg_led;
      }
    else if (blue<250) {
      Serial.print("avg");
      Serial.println(avg_led);
      strip.setPixelColor(i,strip.Color(green,red,blue));
      blue=blue+avg_led;
    }
   
    else if (blue == 255 and green > 0) {
      Serial.print("avg");
      Serial.println(avg_led);
      //Serial.print("green");
      //Serial.println(green);
      strip.setPixelColor(i,strip.Color(green,red,blue));
      green=green-avg_led;
      }
    else if (green == 0) {
      strip.setPixelColor(i,strip.Color(green,red,blue));
      red=red+85;
      }
    if (i==LED_COUNT) {
      delay(500);
      for (int i=0;i<LED_COUNT;i++) {
        strip.setPixelColor(i, strip.Color(0,0,0));
        strip.show();                          
        delay(wait);
        }
      }
    strip.show();                          
    delay(wait);
    }
}
void loofi (int wait) {
  for(int i=0; i<=LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(200,200,200));
    strip.show();                          
    delay(wait);
    if (i==LED_COUNT/2) {
      for (int i=0;i<LED_COUNT;i++) {
        strip.setPixelColor(i, strip.Color(0,0,0));
        strip.show();                          
        delay(wait);
        }
      }
     else if (i==LED_COUNT) {
      for (int i=LED_COUNT/2+1;i<LED_COUNT;i++) {
        strip.setPixelColor(i, strip.Color(0,0,0));
        strip.show();                          
        delay(wait);
        }}
      }
  }
void chargeur(int wait) {
  for (int j=0;j<=LED_COUNT;j++) {
    for(int i=LED_COUNT; i>=0; i--) { 
      if (i>=0+j) {
        strip.setPixelColor(i, strip.Color(255,255,255));
        strip.setPixelColor(i-1, strip.Color(255,255,255));
        strip.setPixelColor(i-2, strip.Color(255,255,255));
        strip.setPixelColor(i+1,strip.Color(0,0,0));
        strip.show();                          
        delay(wait);
    if (j==LED_COUNT) {
      for (int i=0;i<LED_COUNT;i++) {
      strip.setPixelColor(i,strip.Color(0,0,0));
      strip.show();
      delay(wait);
          }
      }
  }
  }
}
}
void train(int wait) {
  for(int j=0; j<=LED_COUNT; j++) {
      //for(int h=0; h<=LED_COUNT; h++) {  
    for(int i=0; i<=LED_COUNT; i++) { 
      strip.setPixelColor(sb,strip.Color(0,0,0));
      strip.setPixelColor(doub, strip.Color(255,255,255));
      strip.setPixelColor(oub, strip.Color(255,255,255));
      doub+=3;
      oub+=3;
      sb+=3;
      strip.show();                          
      delay(wait);
      if (i==LED_COUNT) {
        doub =1;
        oub = 2;
        sb = 0;
        for(int i=0; i<=LED_COUNT; i++) { 
          strip.setPixelColor(oub-1,strip.Color(0,0,0));
          strip.setPixelColor(oub+1, strip.Color(255,255,255));
          strip.show();
          doub+=3;
          oub+=3;
        }
    }
  }
    doub +=1;
    oub += 1;
    sb += 1;
  }
}

void precedent(int wait) {
  int j = LED_COUNT;
  for (int i=0;i<=LED_COUNT/2;i++) {
    strip.setPixelColor(i, strip.Color(255,255,255));
    strip.setPixelColor(j, strip.Color(255,255,255));
    strip.show();
    delay(wait);
    j--;
    if (i == LED_COUNT/2 && j == LED_COUNT/2-1) {
      delay(500);
      for (int i=LED_COUNT/2;i>=0;i++) {
        strip.setPixelColor(i, strip.Color(0,0,0));
        strip.setPixelColor(j, strip.Color(0,0,0));
        strip.show();
        delay(wait);
        j--;
      }
    }
  }
}
void moins(int wait) {
  int j = LED_COUNT-1;
  for (int i=0;i<=LED_COUNT;i++) {
    strip.setPixelColor(i, strip.Color(255,255,255));
    strip.setPixelColor(i+1, strip.Color(255,255,255));
    strip.setPixelColor(j, strip.Color(255,255,255));
    strip.setPixelColor(j-1, strip.Color(255,255,255));
    strip.setPixelColor(i-1, strip.Color(0,0,0));
    strip.setPixelColor(j+1, strip.Color(0,0,0));
    strip.show();
    delay(wait);
    j--;
    }
  }
void turtle(int wait) {
  for (int j=-1;j<=LED_COUNT;j++) {
    for (int i=j;i<=LED_COUNT;i++) {
      strip.setPixelColor(i, strip.Color(255,255,255));
      strip.setPixelColor(i-1, strip.Color(0,0,0));
      strip.show();
      delay(wait/2);
    strip.setPixelColor(j, strip.Color(255,255,255));
    strip.setPixelColor(j-1, strip.Color(255,255,255));
    strip.show();
    delay(wait);
    }
    if (j==LED_COUNT) {
      for (int i=0;i<LED_COUNT;i++) {
        strip.setPixelColor(i, strip.Color(0,0,0));
        strip.show();                          
        delay(wait);
        }
      }
  }
}
void guitar(int wait) {
  for (int i=0;i<=LED_COUNT/2;i++) {
    strip.setPixelColor(i,strip.Color(125,125,125));
    strip.show();
    delay(wait);
    }
  }
