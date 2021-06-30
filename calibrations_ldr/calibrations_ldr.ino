int min_ldr = 1023;
int max_ldr = 0;
int x=0,z=0;
void setup() {
  pinMode(12,OUTPUT);
  while(millis() < 5000){
    max_ldr = max(max_ldr, analogRead(A0);
    min_ldr = min(min_ldr, analogRead(A0);
    z = max_ldr+min_ldr;
    z = z/2;
  }
}

void loop() {
  x = analogRead(A0);
  if (x>z) {digitalWrite(12,LOW);}
  else {digitalWrite(12,HIGH);}

}
