void Bark_Sensor()

// Check For Barking 
{
	Sound_sig = digitalRead(Sound_Signal);

	//Serial.print("Sound: ");
	//Serial.println(Sound_sig);
	
	// Send Signal to app
	if (Sound_sig == HIGH)
	{
		Blynk.virtualWrite(V6, 255); 
	}

	else 
	{
		Blynk.virtualWrite(V6, 0);
	}
	
}