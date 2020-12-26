/******************************************************************************
Heart_Rate_Display.ino
Demo Program for Boneduino AD8232 Heart Rate Monitor Shield.
Kevin @ Duinopeak Electronics
6/27/2014
https://github.com/duinopeak/ArduinoBoard_Manager/tree/master/duinopeak-avr-1.1.0/libraries/boneduino/AD8232_Heart_Rate_Monitor

The AD8232 Heart Rate sensor is a low cost EKG/ECG sensor.  This example shows
how to create an ECG with real time display.  The display is using Processing.
This sketch is based heavily on the Graphing Tutorial provided in the Arduino
IDE. http://www.arduino.cc/en/Tutorial/Graph

Resources:
This program requires a Processing sketch to view the data in real time.

Development environment specifics:
	IDE: Arduino 1.8.9
	Hardware Platform: Boneduino 328p Basic 3.3V/8MHz
	AD8232 Heart Monitor Version: 1.0

This code is beerware. If you see me (or any other SparkFun employee) at the
local pub, and you've found our code helpful, please buy us a round!

Distributed as-is; no warranty is given.
******************************************************************************/

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(6, INPUT); // Setup for leads off detection LO +
  pinMode(5, INPUT); // Setup for leads off detection LO -
}

void loop() {
  
  if((digitalRead(5) == 1)||(digitalRead(6) == 1)){
    Serial.println('!');
  }
  else{
    // send the value of analog input 0:
      Serial.println(analogRead(A3));
  }
  //Wait for a bit to keep serial data from saturating
  delay(1);
}
