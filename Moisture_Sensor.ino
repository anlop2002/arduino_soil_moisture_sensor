int soilHumiditySensor = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(soilHumiditySensor); //A0
  Serial.println(sensorValue);
  
 if (sensorValue >= 820)
 {
  Serial.println("High");
  }
else if (sensorValue >= 615  && sensorValue < 820)
 {
  Serial.println("mid-high");
}  
else if (sensorValue >= 410 && sensorValue < 615)
 {
  Serial.println("mid");
}    
else if (sensorValue >= 250 && sensorValue < 410)
 {
  Serial.println("mid-low");
}
else if (sensorValue >= 0 && sensorValue < 250)
 {
  Serial.println("low");
}
  delay(1000);        // delay 1 second between reads
}
