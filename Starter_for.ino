/* This sketch will be used to create a cycle where a light fades up
from completely off to completely on over the course of two seconds*/

// Initialize variables
int y;

void setup()
{
    // Set up the LED pin
    pinMode (6,);
    
    // Fade LED from 0 to full power over one second
    for (y = 0; y < 256; ){
        analogWrite (, y);
        delay ();
    }
    
    // Fade LED from full power to 0 over one second
    for (y = 255; y >= 0; y = y - 1){
        analogWrite (, y);
        delay ();
    }

}

void loop()
{

}
