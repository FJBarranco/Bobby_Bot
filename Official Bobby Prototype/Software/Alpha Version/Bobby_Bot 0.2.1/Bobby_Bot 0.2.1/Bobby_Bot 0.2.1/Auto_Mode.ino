//Move and Avoid Objects

void Auto_Mode()
{
	//=========================================================================================================
	CarbonSensor();		 // Start Checking Carbon Monoxide Levels
	Temp_Humid_Moduel(); // Start Checking Temperature and Humidity
	//==============================================================================
	Ultrasonic_Sensor(); // Continue Monitoring Area
	Bark_Sensor();		 // Start Checking For Barking (Waiting On Analog Signal Sensor for better quality)
	//==============================================================================

	//Movement Algorythem 
	//Needs to be redone and be mostly idle.


}