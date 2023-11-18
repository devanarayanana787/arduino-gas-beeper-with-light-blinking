# arduino-gas-beeper-with-light-blinking
gas leakage detector with beep sound and bliking light for the safetly of lpg

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
    digitalWrite(BUZZER_PIN, 50);
    digitalWrite(light, HIGH);
    delay(1000);
    digitalWrite(light, LOW);

  }
  else
  {
    digitalWrite(BUZZER_PIN, 0);
    digitalWrite(light, LOW);  
  }
  delay(1000);
} 
