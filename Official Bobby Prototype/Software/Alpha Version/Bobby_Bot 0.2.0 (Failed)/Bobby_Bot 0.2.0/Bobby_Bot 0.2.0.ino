/*
 Name:		Bobby_Bot_0.ino
 Created:	12/5/2019 3:19:21 PM
 Author:	Fernando
*/

String Doggo_Bot_Version = "Version 0.2.0"; // (Version)

//=============================================
//Libraries
//#include <Servo.h> // Servo Library
//#include <SimpleDHT.h> // Air Temp & Humid
//#define DHTTYPE DHT11  

//=============================================
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

//=============================================
//Other
//Servo servo1; // Class call for servo1 
//BlynkTimer timer;
//int Flag = 1;
//char incomingByte;
//ADC_MODE(ADC_VCC);
//SimpleTimer timer;
//SimpleDHT11 dht11;

//=============================================
// Variables
//long duration; // Ultra Sonic Sensor
//int distance; // Ultra Sonic Sensor
//=============================================

// Motors
	// Motor 1
//int Motor1_In1 = 14; //In 1
//int Motor1_In2 = 12; //In 2 
 
	// Motor 2
//int Motor2_In3 = 13; //In 3
//int Motor2_In4 = 15; //In 4

//=============================================
//Sensors
	// Ultrasonic (Distance)
//const int trigPin = 0; // Sends Signal
//const int echoPin = 4; // Recieves Signal
//=============================================


//=============================================

void setup()
{
	Serial.begin(115200);
	Blynk.begin(auth, ssid, pass);
	//=============================================
	//servo1.attach(4); // Servo Library Call
	//=============================================
	// Manual Control Output
	// Set Motor 1 as OutPut
	/*pinMode(Motor1_In1, OUTPUT);
	pinMode(Motor1_In2, OUTPUT);*/
	// Set Motor 2 as OutPut
	//pinMode(Motor2_In3, OUTPUT);
	//pinMode(Motor2_In4, OUTPUT);

	//=============================================
	// Sensor Adjust & Calibartion
	/*delay(100);
	servo1_Left();
	delay(1000);
	servo1_Right();
	delay(1000);
	servo1_Forward();*/
	//=============================================
	delay(500);
}


void loop()
{
	Blynk.run();
	//Manual_Mode();
	//Auto_Mode();

	//Test
	//Forward();
	delay(500);
}


