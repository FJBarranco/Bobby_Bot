
void HardwareCheck() // (Needs Revision)
// Hardware Error Logic
{
	if (distance = 0) // Check For Errors
	{
		//Stop(); // Stop
		digitalWrite(AlarmSpeaker, HIGH); //Alarm Sound
		delay(5500);
		digitalWrite(AlarmSpeaker, LOW); //Alarm Sound
		delay(5500);
	}

	if (CarbonValue >= 0) // Check For Errors
	{
		digitalWrite(AlarmSpeaker, HIGH); //Alarm Sound
		delay(9500);
		digitalWrite(AlarmSpeaker, LOW); //Alarm Sound
		delay(9500);
	}

}