/*
 Name:		Second_Micro_Controller.ino
 Created:	1/6/2020 10:22:19 PM
 Author:	Fernando
*/
// This Micro Controller will handles voltage divisions 
//and Analog Input to send over as a digital signal to 
//the main board. 


//=============================================
//Sensors
// Barking Input Sensor
int Sound_Sensor = A0;
//=============================================
// Variables
int Sound_val; // Sound Sensor 
//=============================================
//Output Signal
 //Built in LED Pin (LED_BUILTIN)
int Out_Sound = 14;
//=============================================

void setup()
{
	//=============================================
	Serial.begin(9600);
	//=============================================
	//Set Sound Output Signal For Main Board
	pinMode(Out_Sound, OUTPUT);
	//=============================================
	Serial.print("Ready");
}

void loop() 
{
	Bark_Sensor(); // Start Checking For Bark Sounds
}
