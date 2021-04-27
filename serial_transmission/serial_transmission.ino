/*
 This application is demonstration of serial data communication
 between Arduino and a laptop
 how arduino and laptop are connected? Via USB port
 */
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // this statement will initialize serial communication at 9600 bps 
// baud rate is commonly referred to as speed of data communication unit is bps
// number of signal changes per sec in mcu bit rate and baud rate are considered same
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello Manav Rachna"); // print this string message on serial port
  delay(1000); // delay of 1 sec
}
