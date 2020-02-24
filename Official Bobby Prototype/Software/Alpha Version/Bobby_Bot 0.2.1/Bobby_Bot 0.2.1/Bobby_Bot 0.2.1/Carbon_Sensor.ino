void CarbonSensor()
// Check For Carbon Monoxide Gases
{
	//================================================================================================
	/*Carbon_Val = digitalRead(Carbon_Sensor);
	Serial.print("CO2: ");
	Serial.println(Carbon_Val);
	delay(100);*/
	//================================================================================================

	//================================================================================================
	// WARNING! - Carbon Levels Have not been Tested For Correct Readings. (Prototype Only)
	//================================================================================================
	if (Carbon_Val == LOW)
	{
		//Serial.println("Air-Quality: CO2 high");
		Blynk.virtualWrite(V4, 255);
	}

	if (Carbon_Val == HIGH)
	{
		//Serial.println("Air-Quality: CO2 normal");
		Blynk.virtualWrite(V4, 0);
	}
	//================================================================================================
}


