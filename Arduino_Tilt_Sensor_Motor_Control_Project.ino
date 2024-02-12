int tilt=A0;
int motor=3;
void setup()
{
  pinMode(tilt, INPUT);
  pinMode(motor, OUTPUT);
}
void loop()
{
  analogWrite(motor,analogRead(tilt));
}
