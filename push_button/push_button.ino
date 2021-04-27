void setup() {
  // put your setup code here, to run once:

  // i will connect push button on pin 2, pin 2 has to be configured as input pin

  pinMode(2,INPUT); 

  // you have to make the initial state of pin 2 as logic HIGH

  digitalWrite(2,HIGH);
  
  // configuring pin 13 as output pin
  pinMode(13,OUTPUT);

  // initial state of pin 13 should be low so that initially LED remains in OFF state

  digitalWrite(13,LOW); // LED remains in OFF state initially

}

void loop() {
  // put your main code here, to run repeatedly:

  // you need to monitor the state of pin 2

  if(digitalRead(2)==LOW)
  {
    // it means that the state of pin 2 has changed and it means that push button has been pressed
    // turn on the on board LED
    digitalWrite(13,HIGH); // turn ON the LED, 13th pin will be made HIGH (5V)
  }

  // else means that the state of pin 2 is logic HIGH
  else{
    // under this condition we have to make sure that LED remains in OFF state
    // this also means that push button has not been pressed by the user
    digitalWrite(13,LOW); // 13th pin state remains at LOW level, LED remains in the OFF state
  }
}
