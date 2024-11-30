int x;
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("enter a number : ");
  while (Serial.available() == 0) {;}
  int x = Serial.parseInt();
  int sec = x%60;
  int mint = x/60;
  int hr = x/3600;
  Serial.print("\n hr = ");
  Serial.print(hr);
  Serial.print("\t mint = ");
  Serial.print(mint);
  Serial.print("\t sec = ");
  Serial.print(sec);
  
}
