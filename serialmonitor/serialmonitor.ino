int x;
int led = 10;
void setup() {
  pinMode(10,OUTPUT);
  Serial.begin(9600);
  Serial.print("Enter Value of Delay in ms:");
  while (Serial.available() == 0){;}
  x = Serial.parseInt();
}
void loop() {
  digitalWrite(led,1);
  delay(x);
  digitalWrite(led,0);
  delay(x);
}
