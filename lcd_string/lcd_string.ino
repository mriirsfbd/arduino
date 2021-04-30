/*
  16x2 LCD interfacing with Arduino
  Rs- 12th Pin, EN - 11th Pin
  DB4 to DB7 are connected to Pin 7 to Pin 10
*/

// include the library of LCD

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7); // define lcd object of type LiquidCrystal and give pin mapping

//rs - 12, en - 11, DB4- 10, DB5- 9, DB6 - 8, DB7 - 7

void setup() {
  // put your setup code here, to run once:
  // initialize the 16x2 LCD
  lcd.begin(16, 2); //initialize a 16x2 LCD display
  lcd.print("Dr. Umesh Dutta"); // print this message on LCD
  lcd.setCursor(0,1); // cursor on initial position of line 2
  lcd.print("MANAV RACHNA");
  // after 2 seconds lcd should clear
  delay(2000); // delay of 2 seconds
  lcd.clear(); // command to clear the LCD display
  // place the cursor on 1st line initial position
  lcd.setCursor(0,0); // line 1 initial position
  //print "India" on LCD
  lcd.print("India");
}

void loop() {
  // put your main code here, to run repeatedly:
}
