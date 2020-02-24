void Bark_Sensor()

// Check For Barking 
{
	Sound_val = analogRead(Sound_Sensor);

	Serial.print("Sound: ");
	Serial.println(Sound_val);

	 //Send Signal to app
	if (Sound_val >600)
	{
		digitalWrite(Out_Sound, HIGH);
	}

	else
	{
		digitalWrite(Out_Sound, LOW);
	}
	delay(100);
}