int led1 = D7; // The on-board LED
int led2 = A5; // The Red LED

// Variable Assignments for the Photoresistor
int photoresistor = A0;
int analog_value;

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(photoresistor, INPUT);
}

void loop()
{
    // Turn ON the LEDs
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);


    // Read and Publish the Information from the Photoresistor
    analog_value = analogRead(photoresistor);
    String light = String(analog_value);
    Particle.publish("light",light, PRIVATE);

    delay(3000);

    // Turn OFF the LED
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(27000);
}