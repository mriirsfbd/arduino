/*
 Demonstration of Serial.readBytesUntill() function
 */
char temp[15];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // initialize serial communication
  pinMode(13,OUTPUT); // configure pin 13 as output

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.readBytesUntil('#',temp,15); // receive the serial data and store in temp until # is received
//Serial.println(temp);
if(strcmp(temp,"Umesh Dutta")==0) // match the received data with predefined string
{
  //turn ON the LED idf match is found
  digitalWrite(13,HIGH);
}
else
{
  //turn OFF the LED in case received data does not match the predefined string 
  digitalWrite(13,LOW);
}
}
