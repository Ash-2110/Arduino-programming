#define TRIG_PIN 9       // Define the TRIG pin for the ultrasonic sensor
#define ECHO_PIN 10      // Define the ECHO pin for the ultrasonic sensor
#define BUZZER_PIN 4    // Define the BUZZER pin

void setup() {
    Serial.begin(9600); // Start serial communication at 9600 baud rate
    pinMode(TRIG_PIN, OUTPUT); // Set TRIG pin as output
    pinMode(ECHO_PIN, INPUT); // Set ECHO pin as input
    pinMode(BUZZER_PIN, OUTPUT); // Set BUZZER pin as output
}

void loop() {
    long duration, distance;

    // Clear the TRIG pin by setting it low
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    // Trigger the sensor by setting the TRIG pin high for 10 microseconds
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Read the ECHO pin to get the duration of the sound wave travel time in microseconds
    duration = pulseIn(ECHO_PIN, HIGH);

    // Calculate the distance (in cm)
    distance = duration * 0.034 / 2;

    // Print distance to serial monitor
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Check if the distance is less than or equal to 100 cm
    if (distance <= 100) {
        digitalWrite(BUZZER_PIN, HIGH); // Turn on buzzer if object is within range
    } else {
        digitalWrite(BUZZER_PIN, LOW); // Turn off buzzer if object is out of range
    }

    delay(500); // Wait for half a second before the next measurement
}