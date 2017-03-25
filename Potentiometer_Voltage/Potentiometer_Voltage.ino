void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(A0);
  float voltage=sensorValue*(5.0/1023.0);
  Serial.print(voltage);
  Serial.print("  v");
  Serial.println("");
  delay(500);
}
