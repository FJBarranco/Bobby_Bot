
void CarbonSensor()
// Check For Excess Carbon Monoxide Gases
{
	CarbonValue = analogRead(AOUTpin);//reads the analaog value from the CO sensor's AOUT pin
	CarbonLimit = digitalRead(DOUTpin);//reads the digital value from the CO sensor's DOUT pin
	Serial.print("CO value: ");
	Serial.println(CarbonValue);//prints the CO value
	//Serial.print("Limit: ");
	//Serial.print(CarbonLimit);//prints the limit reached as either LOW or HIGH (above or underneath

	{
		if (CarbonValue >= 220)
		{
			digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
		}
		else
		{
			digitalWrite(AlarmSpeaker, LOW);//if threshold not reached
		}

	}
	delay(100);
}