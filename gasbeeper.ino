#define BUZZER_PIN 3
#define light 5

void setup() 
{
  pinMode(BUZZER_PIN, OUTPUT);
  //Serial.begin(9600);
}

void loop() 
{
  int sensorValue = analogRead(A0);
  if (sensorValue > 300)
  {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(light, HIGH);
    delay(1000);
    digitalWrite(light, LOW);

  }
  else
  {
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(light, LOW);  
  }
  delay(1000);
} 
