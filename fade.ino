
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 0;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  Serial.println(sensorValue);

  if (sensorValue == 0){
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
  }

  else if (sensorValue > 0 && sensorValue <= 341){
   analogWrite(5, 20);
   digitalWrite(6, LOW);
   digitalWrite(9, LOW);
  }

  else if (sensorValue > 342 && sensorValue <= 682){
   analogWrite(5, 300);
   digitalWrite(6, HIGH);
   digitalWrite(9, LOW);
  }

  else if (sensorValue > 683 && sensorValue <= 1032){
   analogWrite(5, 1000);
   digitalWrite(6, HIGH);
   digitalWrite(9, HIGH);
  }
}
