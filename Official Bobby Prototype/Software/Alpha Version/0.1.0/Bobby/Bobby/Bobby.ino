/*
 Name:		Bobby.ino  0.1.0 (Adding Data Sensors)
 Created:	10/28/2019
 Author:	Fernando
*/

//==========================================================================================
// Libraries
#include <SimpleDHT.h> // Air Temp & Humid
#define DHTTYPE DHT11  
//#include <Servo.h>

// Wi-Fi Connections 
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266mDNS.h>  // For OTA
#include <WiFiUdp.h>  // For OTA
#include <ArduinoOTA.h>  // For OTA

// Wi-Fi Log-in
char auth[] = "YjYsdJAfTuWYbnYRV0oQquZ5-uudesOJ";
char ssid[] = "NETGEAR29";
char pass[] = "jollycoconut616";

//Other
int Flag = 1;
char incomingByte;
//BlynkTimer timer;
SimpleTimer timer;
SimpleDHT11 dht11;
//Servo servo1;

//==========================================================================================
// Declarations and Variables

// Pins (Sensors)

// Temp & Humidity Sensors
#define pinDHT11 12 // Pin 

// Ultrasonic (Distance)
const int trigPin = 15; // Ultra Sonic Sensor
const int echoPin = 3; // Ultra Sonic Sensor

// Carbon Monoxide Sensor (Gas)
const int Carbon =A0; // Carbon Monoxide Sensor (Analog Pin 0)

// Alarms (Speakers and Leds)
//const int AlarmSpeaker = ;// Alarm Speaker

// Sound Sensor
const int Sound =12;
int Soundval;

// Motors
// Motor 1
int Motor1DR = 16; //DR1 grey
int Motor1PWM = 0; //PWM1 purple
int Motor1EN = 5;  //EN1 blue

// Motor 2
int Motor2DR = 4; //DR2 green
int Motor2PWM = 2; //PWM2 yellow
int Motor2EN = 14;  //EN2 orange

// Variables

long duration; // Ultra Sonic Sensor
int distance; // Ultra Sonic Sensor
int CarbonValue; // Carbon Monoxide Sensor
float temperature_F; // Temperature Sensor
float humidity_A; // Humidity Sensor

//==========================================================================================

void setup()
{
	Serial.begin(9600);


	// Connect Blynk
	Blynk.begin(auth, ssid, pass);

	// Temp & Humid Timer
	//timer.setInterval(2000, Temp_Humid_Moduel);

	// Set The Ultrasonic Sensor as Output/Input
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

	// Set Carbon Monoxide Sensor as InPut
	analogRead(Carbon);

	 // Set Sound Sensor as InPut
	//pinMode(Sound, INPUT); 

	// Set Alarm Speaker as Output
	//pinMode(AlarmSpeaker, OUTPUT);

	//==============================================================================


}







void loop()
{
	//timer.run();
	Blynk.run(); // Start Blynk Communication
	//CarbonSensor(); // Start Detecting For High Carbon Traces
	//Temp_Humid_Moduel(); // Start Check Temps and Humidity
	//BarkCheck(); // Start Listening


	//ObstacleCheck(); // Start Watching Obstacles (Automatic Mode)



}

