#include "funkce.h"
ESP8266WebServer server(80);

void setup_wifi() {
  pinMode(LED_BUILTIN, OUTPUT);
  // Pripojeni k WIFI
  WiFiManager wm;
  bool res;
  res = wm.autoConnect("Wemos Voicemeeter - Fallback", "HelpMePLS");
  if (!res) {
    debug("Nelze se připojit k WiFi");
    chyba_wifi;
  } else {
    debug("Úspěšně připojeno k WiFi");
  }
}
void setup() {
  Serial.begin(115200);
  if (Povolit_debug == true) {
    Serial.setDebugOutput(true);
  }
  WiFi.disconnect();
  setup_wifi();
  WiFi.hostname(my_hostname);
  ArduinoOTA.setHostname(my_hostname);
  ArduinoOTA.begin();
  WiFi.mode(WIFI_STA);
  //AppleMIDI setup
  String zprava = "rtpMIDI bezi na portu: ";
  zprava += String(AppleMIDI.getPort());
  zprava += ", user-friendly nazev je: ";
  zprava += AppleMIDI.getName();
  debug(zprava);
  MIDI.begin();
  server.on("/", handleRoot);
  server.on("/version", handleVersion);
  server.begin();
  debug("HTTP server byl spusten!");
  AppleMIDI.setHandleConnected([](const APPLEMIDI_NAMESPACE::ssrc_t& ssrc, const char* name) {
    String zprava = "Prave se do session pripojilo ID: ";
    zprava += ssrc;
    zprava += ", user-friendly jmeno: ";
    zprava += name;
    debug(zprava);
  });
  AppleMIDI.setHandleDisconnected([](const APPLEMIDI_NAMESPACE::ssrc_t& ssrc) {
    String zprava = "Prave se ze session odpojilo ID: ";
    zprava += ssrc;
    debug(zprava);
  });
  debug("SETUP probehl uspesne\n");
}

void handleRoot() {
  debug("GET /");
  server.send(200, "text/html", stranka);
  String Body = "Body bylo prijato: ";
  Body += server.arg("plain");
  Body += "\n";
  server.send(200, "text/plain", Body);
  debug(Body);
  rozdel_string(server.arg("plain"));
}
void handleVersion() {
  debug("GET /version");
  server.send(200, "text/html", sw_version);
}
void loop() {
  MIDI.read();
  zapnuto();
  server.handleClient();
  ArduinoOTA.handle();
}