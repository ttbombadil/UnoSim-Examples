/*
 * IT04.4 - Einen Wert auf einen anderen Bereich abbilden
 *
 * Lernziel:
 * Mit map() die relative Lage eines Wertes auf einen neuen Wertebereich uebertragen.
 *
 * Beobachtung:
 * Der Wert 512 aus dem Bereich 0 bis 1023 wird etwa auf 127 abgebildet.
 */

int eingangswert = 512;

void setup() {
  Serial.begin(115200);

  long ausgangswert = map(eingangswert, 0, 1023, 0, 255);
  Serial.println(ausgangswert);
}

void loop() {
}

/*
 * Experimente:
 * 1. Verwende die Eingangswerte 0 und 1023.
 * 2. Vertausche im Zielbereich 0 und 255.
 * 3. Probiere den Eingangswert 1200 aus.
 *
 * Lernfragen:
 * 1. Welche Bedeutung haben die vier Bereichsgrenzen?
 * 2. Warum ist das Ergebnis fuer 512 nicht exakt 127,5?
 * 3. Begrenzt map() einen Wert automatisch auf den Zielbereich?
 */
