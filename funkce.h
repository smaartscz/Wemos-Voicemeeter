#include "nastaveni.h"
#include "MIDImap.h"
void chyba_wifi() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
}
void signalizaceMIDI() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
}
void zapnuto() {
  digitalWrite(LED_BUILTIN, HIGH);
}

void debug(String debug) {
  if (Povolit_debug == true) {
    String debugmsg = "\n[DEBUG] ";
    debugmsg += debug;
    Serial.print(debugmsg);
  }
}
void rozdel_string(String body) {
  body += "%";
  debug(body);
  while (body.length() > 0) {
    int delic = body.indexOf("=");
    String typ = body.substring(0, delic);
    String nazev = body.substring(delic + 1, body.indexOf("%"));
    poslat_midi(typ, nazev);
    debug(typ);
    debug(nazev);
    body = "";
  }
}