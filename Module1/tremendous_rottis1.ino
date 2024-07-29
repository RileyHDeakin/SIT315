// C++ code
//
int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  //read the value from the light sensor on pin A0
  sensorValue = analogRead(A0);
  //print light sensor value to monitor
  Serial.print("Sensor brightness detected: ");
  Serial.println(sensorValue);
  //map sensor values min and max to cooresponing values for the LED brightnes 
  int ledBrightness = map(sensorValue, 0, 1023, 0, 255);
  //write the calculated LED brightness to the pin 0
  analogWrite(9, ledBrightness);
  //Print LED brightness to monitor
  Serial.print("LED brightness: ");
  Serial.println(ledBrightness);
  delay(100);
}