/*
 measure the analog voltage output from 10 K potentiometer connected to 
 analog channel A0 and print it on serial port; means use serial communication to send the data
 back to laptop/computer and watch it on serial monitor of Arduino IDE
 step 1: To get the integer equivalent value of the analog voltage that is applied to channel A0
 step 2: To convert the integer equivalent value into analog voltage
 */

int temp;
float temp1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // initialize serial communication at 9600 bps baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(A0); 
  // read the analog voltage applied on channel A0 and convert it into integer equivalent value
  Serial.print("The integer equivalent value is: ");
  Serial.println(temp); 
  // print the integer equivalent value of analog voltage applied on A0 channel on serial port
  // formula for getting the voltage value
  temp1 = (temp*5.0)/1023.0;
  Serial.print("The Volgate value is: ");
  Serial.print(temp1,2); 
  Serial.println(" V");
  delay(1000) ; // delay of 1 sec before the loop function repeat again
}
