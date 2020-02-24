/*
 Name:		Bobby_Bot
 Created:	12/5/2019 3:19:21 PM
 Author:	Fernando
*/



//=======================================================
String Doggo_Bot_Version = "Version 0.2.1"; // (Version)
//=======================================================
//Libraries
//#include <Servo.h> // Servo Library (Not Used Yet)
#include <SimpleDHT.h> // Air Temp & Humid
#define DHTTYPE DHT11  
//=======================================================
// Wi-Fi Connections 
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266mDNS.h>  // For OTA
#include <WiFiUdp.h>  // For OTA
#include <ArduinoOTA.h>  // For OTA

char auth[] = "uncbP8GQq_gmQ-qwwWJmkaBuQhofvsan";
char ssid[] = "NETGEAR29";
char pass[] = "jollycoconut616";
//=======================================================
//Other
//Servo servo1; // Class call for servo1 (Not Used Yet)
BlynkTimer timer;
int Flag = 1;
char incomingByte;
ADC_MODE(ADC_VCC);
SimpleDHT11 dht11;

//=======================================================
// Motors
	// Motor 1
int Motor1_In1 = 14; //In 1
int Motor1_In2 = 12; //In 2 

	// Motor 2
int Motor2_In3 = 13; //In 3
int Motor2_In4 = 15; //In 4
//=======================================================
//Sensors
	// Ultrasonic (Distance)
const int trigPin = 0; // Sends Signal
const int echoPin = 4; // Recieves Signal

// Temp & Humidity Sensors
#define pinDHT11 16 // Recieve Signal

//Carbon Monoxide Sensor (Gas)
const int Carbon_Sensor = 10; // Carbon Monoxide Sensor (Digital Pin 10)

// Barking Input Signal
int Sound_Signal = 9;
//=======================================================
// Variables
long duration; // Ultra Sonic Sensor
int distance; // Ultra Sonic Sensor
int Carbon_Val; // Carbon Monoxide Sensor
float temperature_F; // Temperature Sensor
float humidity_A; // Humidity Sensor
int Sound_sig; // Sound Signal
//========================================================

void setup()
{
		//=============================================
		Serial.begin(115200);
		Blynk.begin(auth, ssid, pass);
		//=============================================
		// Set Motor 1 as OutPut
		pinMode(Motor1_In1, OUTPUT);
		pinMode(Motor2_In4, OUTPUT);
		//=============================================
		pinMode(Motor1_In2, OUTPUT);
		// Set Motor 2 as OutPut
		pinMode(Motor2_In3, OUTPUT);
		pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
		pinMode(echoPin, INPUT); // Sets the echoPin as an Input
		//=============================================
		// Set Barking Sensor as InPut
		pinMode(Sound_sig, INPUT);
		//=============================================
		// Set Carbon Sensor as Analog Input
		pinMode(Carbon_Sensor, INPUT);
		//=============================================
		//Blynk.virtualWrite(V0, "http://172.16.0.19:81/stream"); //Stream URL
}

void loop()
{
	//=========================================================================================================
										//**Developer Options**//
	//=========================================================================================================
	Blynk.run();		 // Establish Connection Via Wifi to Servers
	//=========================================================================================================
	Auto_Mode();		 // Once Auto Mode Selected, Begin Roam
	//=========================================================================================================
	//CarbonSensor();		 // Start Checking Carbon Monoxide Levels
	//Temp_Humid_Moduel(); // Start Checking Temperature and Humidity
	//=========================================================================================================
	//Ultrasonic_Sensor(); // Start Checking For Obstacles
	//Bark_Sensor();		 // Start Checking For Barking (Waiting On Analog Signal Sensor for better quality)
	//=========================================================================================================
}