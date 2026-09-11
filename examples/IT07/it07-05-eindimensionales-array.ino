/*
 * IT07.5 - Gleichartige Werte in einem Array speichern
 *
 * Lernziel:
 * Ein eindimensionales Array deklarieren und ueber seinen Index auslesen.
 *
 * Beobachtung:
 * Die Schleife gibt alle vier gespeicherten Messwerte aus.
 */

const byte ANZAHL_WERTE = 4;
int messwerte[ANZAHL_WERTE] = {120, 135, 128, 142};

void setup() {
  Serial.begin(115200);

  for (byte i = 0; i < ANZAHL_WERTE; i++) {
    Serial.println(messwerte[i]);
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere den Wert des Elements mit dem Index 2.
 * 2. Fuege ein fuenftes Element hinzu.
 *
 * Lernfragen:
 * 1. Mit welchem Index beginnt ein Array?
 * 2. Welchen Wert besitzt messwerte[2] zu Beginn?
 * 3. Warum muss die Schleifenbedingung i < ANZAHL_WERTE lauten?
 */
