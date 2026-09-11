/*
 * IT08.1 - Unterschiedliche Daten zusammenfassen
 *
 * Lernziel:
 * Mit struct einen eigenen zusammengesetzten Datentyp definieren.
 *
 * Beobachtung:
 * Zeit, Messstelle und Messwert werden als zusammengehoeriger Datensatz ausgegeben.
 */

struct Messung {
  unsigned long zeit;
  byte messstelle;
  float messwert;
};

void setup() {
  Serial.begin(115200);

  Messung messung;
  messung.zeit = millis();
  messung.messstelle = 1;
  messung.messwert = 23.5;

  Serial.print(messung.zeit);
  Serial.print(" ms, Stelle ");
  Serial.print(messung.messstelle);
  Serial.print(": ");
  Serial.println(messung.messwert, 1);
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere Messstelle und Messwert.
 * 2. Ergaenze die Struktur um ein bool-Feld gueltig.
 *
 * Lernfragen:
 * 1. Welche Datentypen fasst Messung zusammen?
 * 2. Welche Aufgabe hat der Punktoperator?
 * 3. Ist Messung ein Datentyp oder bereits eine Variable?
 */
