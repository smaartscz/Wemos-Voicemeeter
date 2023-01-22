#include "login.h"
#define sw_version "2023.01ALPHA"
#define my_hostname "Wemos Voicemeeter"
//------------------Knihovny------------------------------------//
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <WiFiUdp.h>
#include <AppleMIDI.h>
#include <Arduino.h>
#include <ArduinoOTA.h>
//------------------MIDI----------------------------------------//
#define MIDI_CC         91  
#define MIDI_CHANNEL    1  
//------------------Promenne----------------------------------------//
int rdy = false;
//--------------------------------------------------------------//
bool Povolit_debug = true;   //Povolit debug?
