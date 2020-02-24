/*
 Name:		Bobby.ino
 Created:	5/24/2019 5:47:19 PM
 Author:	Fernando
*/

	// Declarations and Variables

	// Pins (Sensors)
	// Ultrasonic (Distance)
	//const int trigPin = ; // Ultra Sonic Sensor
	//const int echoPin = ; // Ultra Sonic Sensor

	// Carbon Monoxide Sensor (Gas)
	//const int Carbon = ; // Carbon Monoxide Sensor

	// Alarms (Speakers and Leds)
	//const int AlarmSpeaker = ;// Alarm Speaker

	// Sound Sensor
	//const int Sound = ;
	//int Soundval;

	// Pins (Motors)
	// Motor 1
int Motor1DR = 16; //DR1 grey
int Motor1PWM = 0; //PWM1 purple
int Motor1EN = 5;  //EN1 blue

	// Motor 2
int Motor2DR = 4; //DR2 green
int Motor2PWM = 2; //PWM2 yellow
int Motor2EN = 14;  //EN2 orange

	// Variables
	//long duration; // Ultra Sonic Sensor
	//int distance; // Ultra Sonic Sensor
	//int CarbonValue; // Carbon Monoxide Sensor
	//int CarbonLimit; // Carbon Monoxide Sensor


	void setup()
	{
		Serial.begin(9600); 
		

		// Set The Ultrasonic Sensor as Output/Input
		//pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
		//pinMode(echoPin, INPUT); // Sets the echoPin as an Input
		//for (int i = 1; i <= 6; i++)
		//{
		//	pinMode(i, OUTPUT); // Send Wave Signal
		//}
		//pinMode(3, OUTPUT); // Recieve Wave Signal
		//==============================================================================

		// Set Motor 1 as OutPut
		pinMode(Motor1DR, OUTPUT);
		pinMode(Motor1PWM, OUTPUT);
		pinMode(Motor1EN, OUTPUT);
		// Set Motor 2 as OutPut
		pinMode(Motor2DR, OUTPUT);
		pinMode(Motor2PWM, OUTPUT);
		pinMode(Motor2EN, OUTPUT);

		//==============================================================================

		//// Set Carbon Monoxide Sensor as InPut
		//pinMode(DOUTpin, INPUT); //sets the pin as an input to the arduino

		 // Set Sound Sensor as InPut
		//pinMode(Sound, INPUT); //sets the pin as an input to the arduino

		// Set Alarm Speaker as Output
		//pinMode(AlarmSpeaker, OUTPUT);//sets the pin as an output for the alarm speaker (Not in Use)

		//==============================================================================
	}


	void loop()
	{
		//ObstacleCheck(); // Start Watching Obstacles
		//CarbonSensor(); // Start Detecting For High Carbon Traces
		//BarkCheck(); // Start Listening


		Forward();
		delay(5000);
		Stop();
		delay(500);
		Reverse();
		delay(500);
		Left();
		delay(500);
		Right();
		delay(500);
	}



