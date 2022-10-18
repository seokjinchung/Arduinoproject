/*
 * SerialReceive sketch
 * Blink the LED at a rate proportional to the received digit value
*/
// switch문 
int blinkDelay = 0; // blink delay stored in this variable
void setup()
{
 Serial.begin(9600); // Initialize serial port to send and receive at 9600 baud
 pinMode(13, OUTPUT); // set this pin as output
}
void loop()
{
 if (Serial.available()) // Check to see if at least one character is available
 {
 char ch = (char) Serial.read();

 switch(ch)
 {
    case 48:
        blinkDelay = (ch - '0');
        blinkDelay = blinkDelay * 100;
    break;
    case 49:
        blinkDelay = (ch - '0');
        blinkDelay = blinkDelay * 100;
    break;
    case 50:
        blinkDelay = (ch - '0');
        blinkDelay = blinkDelay * 100;
    break;
    case 51:
        blinkDelay = (ch - '0');
blinkDelay = blinkDelay * 100;
    break;
     case 52:
        blinkDelay = (ch - '0');
blinkDelay = blinkDelay * 100;
    break;
     case 53:
        blinkDelay = (ch - '0')
blinkDelay = blinkDelay * 100;
    break;
     case 54:
        blinkDelay = (ch - '0');
blinkDelay = blinkDelay * 100;
    break;
     case 55:
        blinkDelay = (ch - '0');
blinkDelay = blinkDelay * 100;
    break;
     case 56:
     blinkDelay = (ch - '0');
blinkDelay = blinkDelay * 100;
    break;
     case 57:
     blinkDelay = (ch - '0');
blinkDelay = blinkDelay * 100;
    break;

 default:
    break;
 }
 // if문 
//  if( isDigit(ch) ) // is this an ASCII digit between 0 and 9?
//  {
//  blinkDelay = (ch - '0'); // ASCII value converted to numeric value
//  blinkDelay = blinkDelay * 100; // actual delay is 100 ms *" received digit
//  }
 }
 
 blink();
}
// blink the LED with the on and off times determined by blinkDelay


void blink()
{
 digitalWrite(13, 1);
 delay(blinkDelay); // delay depends on blinkDelay value
 digitalWrite(13, 0);
 delay(blinkDelay);
}