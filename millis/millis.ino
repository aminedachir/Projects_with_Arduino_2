unsigned long T1,T2;
bool s = 0;
void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  T1 = millis();
  if (T1>T2+500){
    s = !s;
    T2 = T1;   
    digitalWrite(13,s); 
  }
}
