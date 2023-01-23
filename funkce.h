void chyba_wifi() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
}

void zapnuto() {
  digitalWrite(LED_BUILTIN, HIGH);
}

void debug(String debug) {
  if (Povolit_debug == true)
    Serial.println("");
  Serial.print("[Debug] ");
  Serial.print(debug);
}

void handleRoot() {
  Serial.println("GET /");
  server.send(200, "text/html", stranka);
  String Body = "Body bylo prijato:\n";
  Body += server.arg("plain");
  Body += "\n";
	server.send(200, "text/plain", Body);
	debug(Body);
}