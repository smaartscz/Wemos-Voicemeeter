#define sw_version "2023.01a"
#define my_hostname "Wemos_Voicemeeter"
//------------------Knihovny------------------------------------//
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <WiFiClient.h>
#include <WiFiUdp.h>
#include <AppleMIDI.h>
#include <Arduino.h>
#include <ArduinoOTA.h>
#include "stranka.h"
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager WiFi Configuration Magic
//------------------Promenne----------------------------------------//
int rdy = false;
//--------------------------------------------------------------//
bool Povolit_debug = true;   //Povolit debug?