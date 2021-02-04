int x = 1;

void setup()
{
    Serial.begin(9600);
    while (x < 5) {
        Serial.print("Cycle no ");
        Serial.println(x);
        x = x + 1;
    }
}

void loop()
{

}
