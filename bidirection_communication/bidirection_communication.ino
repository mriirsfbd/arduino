/*
 This is the example of serial data reception
 In this case laptop/computer is sending the data serially to Arduino via USB port
 Arduino will receive the data serially and we will use the serial data byte received
 for controlling the onboard LED
 If 'A' is received serially then LED will be turned ON, Acknowledgement will be sent back "LED is ON"
 If 'B' is received serially then LED will be turned OFF, Acknowledgement will be sent back "LED is OFF"
 */
char temp; // variable to receive the serial data byte
int myLed = 13; // myLed refers to digital pin 13 of Arduino
void setup() {
  // put your setup code here, to run once:
  // initialize serial communication at 9600bps baud rate
  Serial.begin(9600);
  //configure pin 13 as output pin
  pinMode(myLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  while(!Serial.available()); // stay here in case no serial data is received
  if(Serial.available()>0)
  {
    temp = Serial.read(); // read the data byte received and store in variable temp
    if(temp=='A')
    {
      // turn On the LED
      digitalWrite(myLed,HIGH);
      Serial.println("LED is ON");
    }
    if(temp=='B')
    {
      //turn OFF the LED
      digitalWrite(myLed,LOW);
      Serial.println("LED is OFF");
    }
  }

}
