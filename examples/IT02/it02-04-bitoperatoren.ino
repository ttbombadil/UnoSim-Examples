/*
 * IT02.4 - Einzelne Bits untersuchen
 *
 * Lernziel:
 * Eine Bitmaske mit dem bitweisen UND-Operator anwenden.
 *
 * Beobachtung:
 * Die Maske prueft, ob Bit 2 im Ausgangswert gesetzt ist.
 */

byte wert = 0b00101101;
const byte MASKE_BIT_2 = 0b00000100;

void setup() {
  Serial.begin(115200);

  Serial.print("Wert:     ");
  Serial.println(wert, BIN);
  Serial.print("Maske:    ");
  Serial.println(MASKE_BIT_2, BIN);
  Serial.print("Ergebnis: ");
  Serial.println(wert & MASKE_BIT_2, BIN);
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze wert auf 0b00101001.
 * 2. Aendere die Maske so, dass Bit 3 geprueft wird.
 * 3. Ersetze & durch | und vergleiche die Ausgabe.
 *
 * Lernfragen:
 * 1. Warum bleibt bei UND nur ein gesetztes Bit erhalten?
 * 2. Welchen Dezimalwert hat MASKE_BIT_2?
 * 3. Worin unterscheiden sich & und &&?
 */
