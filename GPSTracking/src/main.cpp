#include <Arduino.h>

// Interfacing Arduino with NEO-6M GPS module
 
#include <TinyGPS++.h>           // Include TinyGPS++ library
#include <SoftwareSerial.h>      // Include software serial library

TinyGPSPlus gps;
 
#define S_RX    4                // Define software serial RX pin
#define S_TX    3                // Define software serial TX pin
 
SoftwareSerial gpsSoftSerial(S_RX, S_TX);    // Configure SoftSerial library
SoftwareSerial gsmSoftSerial(0, 1);    // Configure SoftSerial library

// most important https://www.electroniclinic.com/car-accident-location-tracking-using-gsm-gps-and-arduino/
// https://www.youtube.com/watch?v=tumEQioxT6I&feature=youtu.be&t=262

// https://www.electronicwings.com/arduino/http-client-using-sim900a-gprs-and-arduino-uno
// https://arduino.stackexchange.com/questions/34901/http-post-request-in-json-format-using-sim900-module
// https://github.com/jefflab/GSMSHIELD
// https://github.com/Seeed-Studio/GPRS_SIM900/tree/master/examples
// https://www.instructables.com/id/GSM-SIM900A-With-Arduino/
// http://www.raviyp.com/sim900-gprs-http-at-commands/

void setup(void) {
  Serial.begin(9600);
  gpsSoftSerial.begin(9600);  
}
 
void loop() {
 
  while (gpsSoftSerial.available() > 0) {
 
    if (gps.encode(gpsSoftSerial.read())) {

 
    }
 
  }
 
}