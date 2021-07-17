unsigned long T1 = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  T1 = millis();
  Serial.println(T1);

}
