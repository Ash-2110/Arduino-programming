// Define pin numbers
const int trigPin = 9;
const int echoPin = 10;

// Define variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Set the trigPin as an OUTPUT
  pinMode(echoPin, INPUT);  // Set the echoPin as an INPUT
  Serial.begin(9600);       // Start serial communication
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Set the trigPin HIGH for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Read the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculate the distance
  distance = duration * 0.034 / 2; // Speed of sound is 0.034 cm/us
   
  // Print the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(500); // Wait for half a second before the next measurement
}