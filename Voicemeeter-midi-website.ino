#include "nastaveni.h"
#include "funkce.h"
APPLEMIDI_CREATE_DEFAULTSESSION_INSTANCE();
//WiFiClient espClient;
ESP8266WebServer server(80);


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
  debug(WiFi.localIP().toString());

}  
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
  //AppleMIDI setup
  debug(F("Momentalni konfigurace rtpMIDI je:"));
  debug(String(AppleMIDI.getPort())); 
  debug(AppleMIDI.getName()); 
  MIDI.begin();
  server.on("/", handleRoot);
  server.begin();
  debug("HTTP server byl spusten!");
 AppleMIDI.setHandleConnected([](const APPLEMIDI_NAMESPACE::ssrc_t & ssrc, const char* name) {
    Serial.println(F("Connected to session"));
    Serial.println(ssrc); 
    Serial.println(name); 

  });
    AppleMIDI.setHandleDisconnected([](const APPLEMIDI_NAMESPACE::ssrc_t & ssrc) {
    Serial.println(F("Disconnected"));
    Serial.println(ssrc); 
  });
  debug("SETUP probehl uspesne\n");
}



void loop() {
  MIDI.read();
zapnuto();

  server.handleClient();

  //   MIDI.sendControlChange((byte)MIDI_CC,(byte)1,MIDI_CHANNEL);
  //   MIDI.sendControlChange((byte)MIDI_CC,(byte)0,MIDI_CHANNEL);
  // }
 }

