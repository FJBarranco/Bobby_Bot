/*
 Name:		Sensors.ino
 Created:	11/8/2019 1:44:28 PM
 Author:	Fernando
*/

String Doggo_Bot_Sensors_Version = "Version 0.1.2"; // (Version)

// Libraries
#include <SimpleDHT.h> // Air Temp & Humid
#define DHTTYPE DHT11  

// Wi-Fi Connections 
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266mDNS.h>  // For OTA
#include <WiFiUdp.h>  // For OTA
#include <ArduinoOTA.h>  // For OTA


char auth[] = "va38yo7ElM9wEaPGKWg_G6zC0JnDHWtz"; 
char ssid[] = "NETGEAR29";
char pass[] = "jollycoconut616";

//Other
BlynkTimer timer;
//SimpleTimer timer;
SimpleDHT11 dht11;

//==============================================================


// Pins (Sensors)
//Carbon Monoxide Sensor (Gas)
const int Carbon = A0; // Carbon Monoxide Sensor (Analog Pin 0)

// Temp & Humidity Sensors
#define pinDHT11 14 // Pin D5

//Virtual Pins (Testing)
//Bridge widget on virtual pin 9 (Temperature)
WidgetBridge bridge1(V9);


//============================================================================================================================================================
//Bridge (Testing)


static bool value = true;
void blynkAnotherDevice() // Here we will send HIGH or LOW once per second
{
	// Send value to another device
	if (value) {
		//bridge1.digitalWrite(9, HIGH);  // Digital Pin 9 on the second board will be set HIGH
		bridge1.virtualWrite(V9, 1); // Sends 1 value to BLYNK_WRITE(V5) handler on receiving side.

		/////////////////////////////////////////////////////////////////////////////////////////
		// Keep in mind that when performing virtualWrite with Bridge,
		// second board will need to process the incoming command.
		// It can be done by using this handler on the second board:
		//
		//    BLYNK_WRITE(V5){
		//    int pinData = param.asInt(); // pinData variable will store value that came via Bridge
		//    }
		//
		/////////////////////////////////////////////////////////////////////////////////////////
	}
	else
	{
		bridge1.digitalWrite(9, LOW); // Digital Pin 9 on the second board will be set LOW
		//bridge1.virtualWrite(V9, 0); // Sends 0 value to BLYNK_WRITE(V5) handler on receiving side.
	}
	// Toggle value
	value = !value;
}

BLYNK_CONNECTED()
{
	bridge1.setAuthToken("YjYsdJAfTuWYbnYRV0oQquZ5-uudesOJ"); 
}

//============================================================================================================================================================

void setup()
{
	Serial.begin(115200);

	// Connect Blynk
	Blynk.begin(auth, ssid, pass);

	//delay(100);
	//==============================================================================
	// Set Carbon Monoxide Sensor as Analog Input
	analogRead(Carbon);
	 
}



void loop()
{
//=========================================================================================
	Blynk.run();		 // Start Blynk Communication
//=========================================================================================
	Temp_Humid_Moduel(); // Start Temp_Humid Moduel
	CarbonSensor();		 // Start Carbon Sensor
//=========================================================================================
}
