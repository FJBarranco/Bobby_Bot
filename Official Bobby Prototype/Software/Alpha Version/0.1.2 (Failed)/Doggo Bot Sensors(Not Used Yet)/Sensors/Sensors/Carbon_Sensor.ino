void CarbonSensor()
// Check For Excess Carbon Monoxide Gases
{
	int CarbonValue; // Carbon Monoxide Sensor

	//reads the analaog value
	CarbonValue = analogRead(Carbon);

	// App Virtual Pin
	Blynk.virtualWrite(V13, CarbonValue);

	//================================================================================================
	// For Debugging Use Only 

	Serial.print("PPM (CM): ");
	Serial.println(CarbonValue);//prints the CO value


	// Value Operators
	// Check Data and determine the amount of Carbon Monoxide Amounts

	//if (CarbonValue > 700 && CarbonValue < 750) // Some Smoke (Low)
	//{
	//	//digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
	//	Serial.print(" ");
	//	Serial.print("Some Smoke (Low)");
	//}

	//if (CarbonValue > 750 && CarbonValue < 850) // Moderate Smoke (Medium)
	//{
	//	//digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
	//	Serial.print(" ");
	//	Serial.print("Moderate Smoke (Medium)");
	//}
	//================================================================================================


	// WARNING! - Carbon Levels Have not been Tested For Correct Readings. (Prototype Only)

	//if (CarbonValue > 850 && CarbonValue < 900) // More Smoke (High)
	//{
	//	//digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
	//	/*Serial.print(" ");
	//	Serial.print("More Smoke (High)");*/

	//	Blynk.virtualWrite(V4, 255); 

	//}

	//if (CarbonValue > 900) // Fire (Extreme)
	//{
	//	/*Serial.print(" ");
	//	Serial.print("Fire (Extreme)");*/

	//	Blynk.virtualWrite(V5, 255); 

	//}

	//else // Normal
	//{
	//	Blynk.virtualWrite(V4, 0); 
	//	Blynk.virtualWrite(V5, 0); 
	//}

delay(5000);
}

