# Wemos-Voicemeeter
# Co to vlastně je?
Pomocí D1_mini s IR příjmačem, lze zaznamenávat IR kody a ty následně v HEX formátu odesílat na MQTT server

# Jak to spustit?
Stačí stáhnout repozitář, otevřít soubor "login_example.h" v něm vyplnit dané údaje a soubor přejmenovat na "login.h".
Poté se ujistit, zda jsou potřebné knihovny nainstalované([viz níže](https://github.com/smaartscz/IR-remote#knihovny)) a zkompilovat.
Program by se sám měl připojit k Wifi a MQTT serveru a vyčkat na IR kody.

# Knihovny
Program vyžaduje následující knihovny:

- [PubSubClient](https://github.com/knolleary/pubsubclient)
- [IRremoteESP8266](https://github.com/crankyoldgit/IRremoteESP8266)
- [ESP8266mDNS](https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266mDNS)
- [ESP8266WiFi](https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi)
- [ArduinoOTA](https://github.com/jandrassy/ArduinoOTA)
- [WifiManager](https://github.com/tzapu/WiFiManager)


Naštěstí všechny knihovny lze nainstalovat přímo v Arduino IDE.
