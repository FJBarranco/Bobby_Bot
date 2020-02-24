//void CarbonSensor()
//// Check For Excess Carbon Monoxide Gases
//{
//	CarbonValue = analogRead(Carbon);//reads the analaog value from the CO sensor's AOUT pin
//	//Serial.print("CO value: ");
//	//Serial.println(CarbonValue);//prints the CO value
//
//
//
//	{
//		if (CarbonValue  > 130 && CarbonValue < 155) // Some Smoke (Low)
//		{
//			digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
//			Serial.print(" ");
//			Serial.print("Some Smoke (Low)");
//		}
//
//		if (CarbonValue  > 155 && CarbonValue < 180) // Moderate Smoke (Medium)
//		{
//			digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
//			Serial.print(" ");
//			Serial.print("Moderate Smoke (Medium)");
//		}
//
//		if (CarbonValue  > 180 && CarbonValue < 220) // More Smoke (High)
//		{
//			digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
//			Serial.print(" ");
//			Serial.print("More Smoke (High)");
//		}
//
//		if (CarbonValue  > 220) // Fire (Extreme)
//		{
//			digitalWrite(AlarmSpeaker, HIGH);//if limit has been reached
//			Serial.print(" ");
//			Serial.print("Fire (Extreme)");
//		}
//
//		else // Normal
//		{
//			digitalWrite(AlarmSpeaker, LOW);//if threshold not reached
//		}
//
//	}
//
//	delay(100);
//}