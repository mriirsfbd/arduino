void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT); // pin 2 is configured as input pin
  Serial.begin(9600); // initialize serial communication at 9600 bps baud rate
  pinMode(13,OUTPUT); // configure pin 13 as output pin

}

void loop() {
  // put your main code here, to run repeatedly:

  // monitor the state of pin 2

  if(digitalRead(2)==HIGH)
  {
    // motion sensor has been activated
    digitalWrite(13,HIGH); //led turned ON
    Serial.println("Motion Detected"); // print this message on serial port
    while(digitalRead(2)==HIGH); // stay here till the state of pin 2 remains HIGH
  }
  else{
    digitalWrite(13,LOW); // led turned OFF
  }
}
