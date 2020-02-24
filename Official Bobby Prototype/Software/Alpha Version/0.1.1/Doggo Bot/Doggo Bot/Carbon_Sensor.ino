void CarbonSensor()
// Check For Excess Carbon Monoxide Gases
{

	//================================================================================================
	// For Debugging Use Only 

	//Serial.print("CO value: ");
	//Serial.println(CarbonValue);//prints the CO value


	// Value Operators
	// Check Data and determine the amount of Carbon Monoxide Amounts

	//if (CarbonValue > 500 && CarbonValue < 550) // Some Smoke (Low)
	//{
	//	//digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
	//	Serial.print(" ");
	//	Serial.print("Some Smoke (Low)");
	//}

	//if (CarbonValue > 550 && CarbonValue < 600) // Moderate Smoke (Medium)
	//{
	//	//digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
	//	Serial.print(" ");
	//	Serial.print("Moderate Smoke (Medium)");
	//}
	//================================================================================================


	CarbonValue = analogRead(Carbon);//reads the analaog value from the CO sensor's AOUT pin
	Blynk.virtualWrite(V13, CarbonValue);

	// WARNING! - Carbon Levels Have not been Tested For Correct Readings. (Prototype Only)

	if (CarbonValue > 600 && CarbonValue < 800) // More Smoke (High)
	{
		//digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
		/*Serial.print(" ");
		Serial.print("More Smoke (High)");*/

		Blynk.virtualWrite(V4, 255); 

	}

	if (CarbonValue > 800) // Fire (Extreme)
	{
		/*Serial.print(" ");
		Serial.print("Fire (Extreme)");*/

		Blynk.virtualWrite(V5, 255); 

	}

	else // Normal
	{
		Blynk.virtualWrite(V4, 0); 
		Blynk.virtualWrite(V5, 0); 
	}

	//delay(5000);
}

