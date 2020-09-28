



void setup() {
  Serial.begin(9600);
  delay(50);

}

void loop() {
  distance = sonar.ping_cm();
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(1000);
  
}
