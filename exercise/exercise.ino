int led = 10;
int x;
int y;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  Serial.println("How many blinks :");
  while (Serial.available() == 0) {;}
  x = Serial.parseInt();
}

void loop() {
  for (int i=0;i<x;i++){
    digitalWrite(led,1);
    delay(1000);
    digitalWrite(led,0);
    delay(1000);
    }
   delay(5000);
  
  
}
