/*
 Name:		Bobby_Bot.ino
 Created:	11/20/2019 3:05:41 PM
 Author:	Fernando
*/

String Doggo_Bot_Version = "Version 0.1.3"; // (Version)

// Other Libraries
#include <SimpleDHT.h> // Air Temp & Humid
#define DHTTYPE DHT11  
#include <Servo.h>

// Wi-Fi Libraries
#define BLYNK_PRINT Serial
#include <BlynkSimpleShieldEsp8266.h>
#include <ESP8266_Lib.h>
#define EspSerial Serial1
#define ESP8266_BAUD 115200
//#include <ESP8266WiFi.h>
//#include <ESP8266mDNS.h>  // For OTA
//#include <ArduinoOTA.h>  // For OTA
//#include <WiFiUdp.h>  // For OTA
//#include <WiFiUdp.h>  // For OTA
//#include <BlynkSimpleEsp8266.h>

char auth[] = "uncbP8GQq_gmQ-qwwWJmkaBuQhofvsan";
char ssid[] = "NETGEAR29";
char pass[] = "jollycoconut616";

//Other
ESP8266 wifi(&EspSerial);
BlynkTimer timer;
int Flag = 1;
char incomingByte;
//ADC_MODE(ADC_VCC);
//SimpleTimer timer;
SimpleDHT11 dht11;
Servo servo1;

//==============================================================

// Variables
long duration; // Ultra Sonic Sensor
int distance; // Ultra Sonic Sensor
int CarbonValue; // Carbon Monoxide Sensor
float temperature_F; // Temperature Sensor
float humidity_A; // Humidity Sensor

// Pins (Sensors)
//Carbon Monoxide Sensor (Gas)
const int Carbon = A0; // Carbon Monoxide Sensor (Analog Pin 0)

// Temp & Humidity Sensors
#define pinDHT11 3 // Pin RX GPIO 3


// Pins (Motors)
	// Motor 1
int Motor1DR = 16; //DR1 grey
int Motor1PWM = 0; //PWM1 purple
int Motor1EN = 5;  //EN1 blue

	// Motor 2
int Motor2DR = 4; //DR2 green
int Motor2PWM = 2; //PWM2 yellow
int Motor2EN = 14;  //EN2 orange

// Ultrasonic (Distance)
const int trigPin = 12; // Ultra Sonic Sensor - Sends Signal
const int echoPin = 13; // Ultra Sonic Sensor - Recieves Signal


void setup()
{
	Serial.begin(9600);
	EspSerial.begin(ESP8266_BAUD);

	// Connect Blynk

	Blynk.begin(auth, wifi, ssid, pass);

	delay(100);
	//==============================================================================

	servo1.attach(15);

	// Ultrasonic Sensor
	pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
	pinMode(echoPin, INPUT); // Sets the echoPin as an Input


	// Set Carbon Monoxide Sensor as InPut
	//analogRead(Carbon);

	// Set Motor 1 as OutPut
	pinMode(Motor1DR, OUTPUT);
	pinMode(Motor1PWM, OUTPUT);
	pinMode(Motor1EN, OUTPUT);
	// Set Motor 2 as OutPut
	pinMode(Motor2DR, OUTPUT);
	pinMode(Motor2PWM, OUTPUT);
	pinMode(Motor2EN, OUTPUT);

	// Set The Ultrasonic Sensor as Output/Input
	pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
	pinMode(echoPin, INPUT); // Sets the echoPin as an Input

	delay(100);

	// Sensor Adjust
	servo1.write(90); // Straighten Servo_1
	Obstacle_Radar();    // Rotate Servo_1

}

//==============================================================================


void loop()
{
	Blynk.run();		 // Start Blynk Communication

	//========================================================================

	//Check For What Mode Has Been Selected

	//-------------------
	//Mode_Check();   //-
	//-------------------
	
	//Auto_Mode();       // Start Auto Mode
	//Manual_Mode();     // Start Manual Mode (Not Setup Yet)

	//========================================================================

	// Environment Sensors

	//CarbonSensor();
	//Temp_Humid_Moduel(); // Start Temp and Humid Sensors

}