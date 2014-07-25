// include the library code:
#include <LiquidCrystal.h>

/* The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 */
// initialize the library with the numbers of the interface pins
//YoLunchLiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int JAP_BTN =    2;
const int THAI_BTN =   7;
const int VIET_BTN =  13;

void setup()
{
  // Start the hardware serial port
  Serial.begin(9600);
  
  // initialize the pushbutton pin as an input:
  pinMode(JAP_BTN , INPUT);
  pinMode(THAI_BTN, INPUT);
  pinMode(VIET_BTN, INPUT);
  
}

void loop()
{
  // read the state of the pushbutton value:
  if( digitalRead(JAP_BTN) ==  HIGH ) {
    Serial.println("6d75ec65-b3c9-2012-56f3-600495c2a747"); 
    delay(600);
  }
  if( digitalRead(THAI_BTN) ==  HIGH ) {
    Serial.println("184aecbf-b424-7fa6-9a20-69b7fa5025c9"); 
    delay(600);
  }
  if( digitalRead(VIET_BTN) ==  HIGH ) {
    Serial.println("8f5bbbd0-01c8-5926-51e5-a3a0767582f4"); 
    delay(600);
  }
}
 

