void setup() {
  Serial.begin(9600);
  Serial.println("external examples online");
}

void loop() {
  delay(1000);
  Serial.println("serial tick");
}
