#include "nastaveni.h"
#include "funkce.h"
#include "website.h"

void setup() {
  Serial.begin(115200);
  if (Povolit_debug = true) {
    Serial.setDebugOutput(true);
  }
  WiFi.disconnect();
  setup_wifi();
  WiFi.hostname(my_hostname);
  ArduinoOTA.setHostname(my_hostname);
  ArduinoOTA.begin();
  WiFi.mode(WIFI_STA);
  debug("SETUP probehl uspesne\n");
}

void setup_wifi() {
  // Pripojeni k WIFI
  debug("");
  debug("Pripojovani k ");
  debug(wifi_ssid);
  WiFi.begin(wifi_ssid, wifi_password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    chyba_wifi();
  }
  debug("");
  debug("Uspesne pripojeno k wifi ");
  debug("IP adresa: ");
  if (Povolit_debug == true)
    Serial.println(WiFi.localIP());
}


void loop() {
  long now = millis();
  if (rdy == true) {  //zmenit stav LED pokud je vsechno ready
    zapnuto();
  }

  
 }

