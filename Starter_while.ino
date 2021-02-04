/* This sketch will be used to create a cycle where three lights turn
on in sequence and the Serial monitor displays the status of those 
lights. */

// Initialize variables

int x = 1;

void setup()
{
    // Start Serial Moniter and set up pins
    Serial.begin(9600);
    pinMode ();
    pinMode ();
    pinMode ();
    
    while (x < ) {
        // Display the cycle number in the Serial Monitor
        Serial.print("Cycle no ");
        Serial.println(x);
        
        // Turn on each LED in sequence
        digitalWrite ((x + 7), );
        delay (2000)
        x = x + 1;
    }
}

void loop()
{

}
