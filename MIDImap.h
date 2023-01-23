APPLEMIDI_CREATE_DEFAULTSESSION_INSTANCE();
void poslat_midi(String typ, String nazev) {
  //MIDI for controlling soundboard
  if (typ == "soundboard") {
    if (nazev == "delej") {
      MIDI.sendControlChange((byte)93, (byte)1, 1);
      MIDI.sendControlChange((byte)93, (byte)0, 1);
    }
    if (nazev == "drzhubu") {
      MIDI.sendControlChange((byte)93, (byte)1, 2);
      MIDI.sendControlChange((byte)93, (byte)0, 2);
    }
    if (nazev == "samozrejme") {
      MIDI.sendControlChange((byte)93, (byte)1, 3);
      MIDI.sendControlChange((byte)93, (byte)0, 3);
    }
    if (nazev == "noice") {
      MIDI.sendControlChange((byte)93, (byte)1, 4);
      MIDI.sendControlChange((byte)93, (byte)0, 4);
    }
    if (nazev == "benno") {
      MIDI.sendControlChange((byte)93, (byte)1, 5);
      MIDI.sendControlChange((byte)93, (byte)0, 5);
    }
    if (nazev == "notaktone") {
      MIDI.sendControlChange((byte)93, (byte)1, 6);
      MIDI.sendControlChange((byte)93, (byte)0, 6);
    }
    if (nazev == "jednadvetri") {
      MIDI.sendControlChange((byte)93, (byte)1, 7);
      MIDI.sendControlChange((byte)93, (byte)0, 7);
    }
    if (nazev == "bruh") {
      MIDI.sendControlChange((byte)93, (byte)1, 8);
      MIDI.sendControlChange((byte)93, (byte)0, 8);
    }
    if (nazev == "panicbutton") {
      MIDI.sendControlChange((byte)93, (byte)1, 9);
      MIDI.sendControlChange((byte)93, (byte)0, 9);
    }
    if (nazev == "tyzmrde") {
      MIDI.sendControlChange((byte)93, (byte)1, 10);
      MIDI.sendControlChange((byte)93, (byte)0, 10);
    }
    if (nazev == "lizani") {
      MIDI.sendControlChange((byte)93, (byte)1, 11);
      MIDI.sendControlChange((byte)93, (byte)0, 11);
    }
    if (nazev == "nerikejmizmrde") {
      MIDI.sendControlChange((byte)93, (byte)1, 12);
      MIDI.sendControlChange((byte)93, (byte)0, 12);
    }
    if (nazev == "dychani") {
      MIDI.sendControlChange((byte)93, (byte)1, 13);
      MIDI.sendControlChange((byte)93, (byte)0, 13);
    }
    if (nazev == "takjajsemopetzde") {
      MIDI.sendControlChange((byte)93, (byte)1, 14);
      MIDI.sendControlChange((byte)93, (byte)0, 14);
    }
    if (nazev == "delejdelej") {
      MIDI.sendControlChange((byte)93, (byte)1, 15);
      MIDI.sendControlChange((byte)93, (byte)0, 15);
    }
    if (nazev == "notaktojsemnevidel") {
      MIDI.sendControlChange((byte)94, (byte)1, 1);
      MIDI.sendControlChange((byte)94, (byte)0, 1);
    }
    if (nazev == "svartajetineco") {
      MIDI.sendControlChange((byte)94, (byte)1, 2);
      MIDI.sendControlChange((byte)94, (byte)0, 2);
    }
    if (nazev == "hovno") {
      MIDI.sendControlChange((byte)94, (byte)1, 3);
      MIDI.sendControlChange((byte)94, (byte)0, 3);
    }
    if (nazev == "jemuhodne") {
      MIDI.sendControlChange((byte)94, (byte)1, 4);
      MIDI.sendControlChange((byte)94, (byte)0, 4);
    }
    if (nazev == "benyes") {
      MIDI.sendControlChange((byte)94, (byte)1, 5);
      MIDI.sendControlChange((byte)94, (byte)0, 5);
    }
    if (nazev == "ben") {
      MIDI.sendControlChange((byte)94, (byte)1, 6);
      MIDI.sendControlChange((byte)94, (byte)0, 6);
    }
    if (nazev == "skillissue") {
      MIDI.sendControlChange((byte)94, (byte)1, 7);
      MIDI.sendControlChange((byte)94, (byte)0, 7);
    }
    if (nazev == "somsadosral") {
      MIDI.sendControlChange((byte)94, (byte)1, 8);
      MIDI.sendControlChange((byte)94, (byte)0, 8);
    }
    if (nazev == "dopici") {
      MIDI.sendControlChange((byte)94, (byte)1, 9);
      MIDI.sendControlChange((byte)94, (byte)0, 9);
    }
    if (nazev == "anime") {
      MIDI.sendControlChange((byte)94, (byte)1, 10);
      MIDI.sendControlChange((byte)94, (byte)0, 10);
    }
    if (nazev == "jatojebu") {
      MIDI.sendControlChange((byte)94, (byte)1, 11);
      MIDI.sendControlChange((byte)94, (byte)0, 11);
    }
    if (nazev == "cotijebe") {
      MIDI.sendControlChange((byte)94, (byte)1, 12);
      MIDI.sendControlChange((byte)94, (byte)0, 12);
    }
    if (nazev == "oof") {
      MIDI.sendControlChange((byte)94, (byte)1, 13);
      MIDI.sendControlChange((byte)94, (byte)0, 13);
    }
    if (nazev == "cunt") {
      MIDI.sendControlChange((byte)94, (byte)1, 14);
      MIDI.sendControlChange((byte)94, (byte)0, 14);
    }
    if (nazev == "stetka") {
      MIDI.sendControlChange((byte)94, (byte)1, 15);
      MIDI.sendControlChange((byte)94, (byte)0, 15);
    }
    if (nazev == "spit") {
      MIDI.sendControlChange((byte)94, (byte)1, 16);
      MIDI.sendControlChange((byte)94, (byte)0, 16);
    }
    if (nazev == "zeus") {
      MIDI.sendControlChange((byte)95, (byte)1, 1);
      MIDI.sendControlChange((byte)95, (byte)0, 1);
    }
    if (nazev == "cockout") {
      MIDI.sendControlChange((byte)95, (byte)1, 2);
      MIDI.sendControlChange((byte)95, (byte)0, 2);
    }
    if (nazev == "zolikstul") {
      MIDI.sendControlChange((byte)95, (byte)1, 3);
      MIDI.sendControlChange((byte)95, (byte)0, 3);
    }
    if (nazev == "angrychineese") {
      MIDI.sendControlChange((byte)95, (byte)1, 4);
      MIDI.sendControlChange((byte)95, (byte)0, 4);
    }
    if (nazev == "aaarhhg") {
      MIDI.sendControlChange((byte)95, (byte)1, 5);
      MIDI.sendControlChange((byte)95, (byte)0, 5);
    }
    if (nazev == "fitta") {
      MIDI.sendControlChange((byte)95, (byte)1, 6);
      MIDI.sendControlChange((byte)95, (byte)0, 6);
    }
    if (nazev == "coooo") {
      MIDI.sendControlChange((byte)95, (byte)1, 7);
      MIDI.sendControlChange((byte)95, (byte)0, 7);
    }
    if (nazev == "chipsyasmr") {
      MIDI.sendControlChange((byte)95, (byte)1, 8);
      MIDI.sendControlChange((byte)95, (byte)0, 8);
    }
    if (nazev == "doorstuck") {
      MIDI.sendControlChange((byte)95, (byte)1, 9);
      MIDI.sendControlChange((byte)95, (byte)0, 9);
    }
    if (nazev == "blblblbl") {
      MIDI.sendControlChange((byte)95, (byte)1, 10);
      MIDI.sendControlChange((byte)95, (byte)0, 10);
    }
    if (nazev == "cojetypico") {
      MIDI.sendControlChange((byte)95, (byte)1, 11);
      MIDI.sendControlChange((byte)95, (byte)0, 11);
    }
    if (nazev == "takovyhlesvine") {
      MIDI.sendControlChange((byte)95, (byte)1, 12);
      MIDI.sendControlChange((byte)95, (byte)0, 12);
    }
    if (nazev == "virus") {
      MIDI.sendControlChange((byte)95, (byte)1, 13);
      MIDI.sendControlChange((byte)95, (byte)0, 13);
    }
    if (nazev == "waltuh") {
      MIDI.sendControlChange((byte)95, (byte)1, 14);
      MIDI.sendControlChange((byte)95, (byte)0, 14);
    }
    if (nazev == "dinglehere") {
      MIDI.sendControlChange((byte)95, (byte)1, 15);
      MIDI.sendControlChange((byte)95, (byte)0, 15);
    }
    if (nazev == "kaboom") {
      MIDI.sendControlChange((byte)95, (byte)1, 16);
      MIDI.sendControlChange((byte)95, (byte)0, 16);
    }
  }

  //MIDI for controlling Voicemeeter
  if (typ == "mixer") {
    if (nazev == "muteA1") {
      MIDI.sendControlChange((byte)90, (byte)1, 1);
      MIDI.sendControlChange((byte)90, (byte)0, 1);
    }
    if (nazev == "muteA2") {
      MIDI.sendControlChange((byte)90, (byte)1, 2);
      MIDI.sendControlChange((byte)90, (byte)0, 2);
    }
    if (nazev == "mutemic") {
      MIDI.sendControlChange((byte)90, (byte)1, 3);
      MIDI.sendControlChange((byte)90, (byte)0, 3);
    }
  }
}