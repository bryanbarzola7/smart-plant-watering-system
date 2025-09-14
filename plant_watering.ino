const int sensorPin = A0;
const int pumpPin = 8;
const int ledPin = 13; // built-in LED indicator
int threshold = 600;

void setup() {
  pinMode(pumpPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(sensorPin);
  Serial.print("Soil moisture: ");
  Serial.println(moisture);
  
  if (moisture < threshold) {
    digitalWrite(pumpPin, HIGH);  // turn pump on
    digitalWrite(ledPin, HIGH);   // LED on to indicate dry soil
  } else {
    digitalWrite(pumpPin, LOW);   // turn pump off
    digitalWrite(ledPin, LOW);    // LED off
  }
  delay(1000);
}
