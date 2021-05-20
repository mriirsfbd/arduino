// C++ code
//
int value = 100;
void setup()
{
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
}

void loop()
{
  analogWrite(11,value);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
}
