int x;
int y;
void setup() {
  Serial.begin(9600);
}

void loop() {
  x = random(1,7);
  y = random(1,7);
  Serial.println(x+y);
  delay(3000);
}
