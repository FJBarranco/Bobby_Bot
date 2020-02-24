void Ultrasonic_Sensor()


// Check For On Coming Obstacles 
{

	// Clear trigPin
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);

	// Set trigPin on HIGH state for 10 micro seconds
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);

	// Read echoPin, returns the sound wave travel time in microseconds
	duration = pulseIn(echoPin, HIGH);

	// Calculating the distance
	distance = duration * 0.034 / 2;

	//Prints the distance on the Serial Monitor (Debug Only)
   //Serial.print(" ");
   //Serial.print("Distance: ");
   //Serial.println(distance);
   //delay(500);
	Blynk.virtualWrite(V12, distance);
}