/* 
 LED Blinking Program: LED available on board on pin 13 of Arduino Uno board
 Written by Dr. Umesh Dutta
 Dated: 20th April 2021, 2:37 p.m
*/
void setup()
{
  // this function runs once
  //all initializations are done in setup() function
  //configure pin 13 as output pin
  pinMode(13,OUTPUT); // this will make pin 13 as output pin
}

void loop()
{
  // runs forever till arduino is powered
  // we execute the functionality part of the application
  // Blink the led every 1 second
  // turn on the led
  digitalWrite(13,HIGH);
  // give some delay which means that led will remain in on state for some time
  delay(1000); // delay of 1000 msec = 1 sec
  // turn off the led
  digitalWrite(13,LOW); // led turned off
  // give some delay so that led remains in the off state for some time
  delay(1000); // delay of 1000 msec = 1 sec 
}
