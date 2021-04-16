int ledPin=2;
int sensorPin = 35; 
int sensorValue = 0; 
int val;
void setup()
{
Serial.begin(115200);
pinMode(ledPin,OUTPUT); 
pinMode(sensorPin,INPUT);
}
void loop()
{
sensorValue = analogRead(sensorPin); 
//digitalWrite(ledPin, HIGH);
//delay(10);
//digitalWrite(ledPin, LOW);
//delay(sensorValue); 
Serial.println(sensorValue, DEC); 
}
