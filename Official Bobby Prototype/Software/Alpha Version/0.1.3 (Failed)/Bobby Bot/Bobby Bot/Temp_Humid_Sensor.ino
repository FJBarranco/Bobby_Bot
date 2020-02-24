BLYNK_WRITE(V9)
{
	int pinData = param.asInt(); // pinData variable will store value that came via Bridge
}


void Temp_Humid_Moduel()
{

	
	//====================================== Temp & Humid Moduel =============================================================================

	byte temperature = 0;

	int temperature_F;  // Fahrenheit Memory
	int temperature_1F; // Fahrenheit Memory
	int temperature_2F; // Fahrenheit Memory
	int temperature_3F; // Fahrenheit Memory
	int humidity_A; // Humidity Adjustment


	byte humidity = 0;
	byte data[40] = { 0 };
	if (dht11.read(pinDHT11, &temperature, &humidity, data))

		temperature_3F = (int)temperature;     // Convert Byte to integer for Conversion
	temperature_1F = temperature * 9;	   // Fahrenheit Conversion From Celcius Step 1
	temperature_2F = temperature_1F / 5;   // Fahrenheit Conversion From Celcius Step 2
	temperature_F = temperature_2F + 30;   // Fahrenheit Conversion From Celcius Step 3
	humidity_A = (int)humidity - 9;

	//======== Air Temp and Humid Display ========================

	//Debug Use Only

	Serial.print("Air Temperature: ");
	Serial.print((int)temperature_F); Serial.print(" *F, ");
	Serial.print("Air Humidity: ");
	Serial.print((int)humidity_A); Serial.println(" %");

	//Blynk.virtualWrite(V9, temperature_F);
	//Blynk.virtualWrite(V10, humidity_A);


	delay(1000);




	 //Temperature Alarms

	if (temperature_F >= 85)
	{
		Blynk.virtualWrite(V0, 255);
	}

	if (temperature_F < 85 && temperature_F > 45)
	{
		Blynk.virtualWrite(V0, 0);
	}

	if (temperature_F <= 45)
	{
		Blynk.virtualWrite(V1, 255);
	}

	if (temperature_F > 45 && temperature_F < 85)
	{
		Blynk.virtualWrite(V1, 0);
	}


	// Humidity Alarms

	if (humidity_A >= 70)
	{
			Blynk.virtualWrite(V2, 255);
	}

	if (humidity_A < 70 && humidity_A > 30)
	{
			Blynk.virtualWrite(V2, 0);
	}

	if (humidity_A <= 30)
	{
			Blynk.virtualWrite(V3, 255);
	}

	if (humidity_A > 30 && humidity_A < 70)
	{
			Blynk.virtualWrite(V3, 0);
	}

}