
const int sensorPin = 3; // NO

unsigned long startTime;
unsigned long elapsedTime;

void setup()
{
  pinMode(sensorPin, INPUT_PULLUP);
  Serial.begin(9600);
  startTime = millis();
}

void loop()
{
  int sensorState = digitalRead(sensorPin);
  if (sensorState == LOW)
  {
    elapsedTime = millis() - startTime;
    Serial.println(elapsedTime);
    startTime = millis();
    delay(3000);
  }

  delay(100);
}
