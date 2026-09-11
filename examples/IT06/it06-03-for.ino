/*
 * IT06.3 - Eine Zaehlerschleife verwenden
 *
 * Lernziel:
 * Eine feste Anzahl von Wiederholungen mit for formulieren.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt die Zahlen 1 bis 5.
 */

void setup() {
  Serial.begin(115200);

  for (byte i = 1; i <= 5; i++) {
    Serial.println(i);
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Lasse die Schleife von 0 bis 9 laufen.
 * 2. Zaehle mit i-- von 5 bis 1 herunter.
 *
 * Lernfragen:
 * 1. Welche drei Angaben stehen im Kopf der for-Schleife?
 * 2. Wie oft wird der Schleifenblock ausgefuehrt?
 * 3. Welchen Gueltigkeitsbereich hat die Variable i?
 */
