/*
Name:		Bobby.ino
Created:	5/24/2019 5:47:19 PM
Author:	Fernando
*/

// Wifi Controls

// Your WiFi credentials.
// Set password to "" for open networks. 
// (Not Used Yet)

// Declarations and Variables

// Pins (Sensors)
// Ultrasonic (Distance)
const int trigPin = 8; // Ultra Sonic Sensor
const int echoPin = 9; // Ultra Sonic Sensor

// Carbon Monoxide Sensor (Gas)
const int AOUTpin = 0; // Carbon Monoxide Sensor
const int DOUTpin = 10; // Carbon Monoxide Sensor

// Alarms (Speakers and Leds)
const int AlarmSpeaker = 11;// Alarm Speaker

// Pins (Motors)
// Motor 1
int Motor1DR = 2; //DR1
int Motor1PWM = 3; //PWM1
int Motor1EN = 4;  //EN1

// Motor 2
int Motor2DR = 5; //DR1
int Motor2PWM = 6; //PWM1
int Motor2EN = 7;  //EN1

// Variables
long duration; // Ultra Sonic Sensor
int distance; // Ultra Sonic Sensor
int CarbonValue; // Carbon Monoxide Sensor
int CarbonLimit; // Carbon Monoxide Sensor

void setup()

{
	Serial.begin(9600);
	pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
	pinMode(echoPin, INPUT); // Sets the echoPin as an Input
	for (int i = 1; i <= 6; i++)
	{
		pinMode(i, OUTPUT); // Send Wave Signal
	}
	pinMode(3, OUTPUT); // Recieve Wave Signal

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

	pinMode(DOUTpin, INPUT); //sets the pin as an input to the arduino
	pinMode(AlarmSpeaker, OUTPUT);//sets the pin as an output for the alarm speaker

//==============================================================================
}


void loop()
{

	ObstacleCheck(); // Start Watching Obstacles
	CarbonSensor(); // Start Detecting For High Carbon Traces
	Roaming(); // Start Roaming
}


