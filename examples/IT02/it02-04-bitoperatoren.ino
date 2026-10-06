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

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen eine Bitmaske mit dem bitweisen UND anwenden können."
afterFocus: free
focus:
  - id: bitmaske
    title: "Bitmaske"
    objective: "Erklären, wie eine Maske einzelne Bits herausfiltert, und das Ergebnis vorhersagen."
    questions:
      - kind: concept
        text: "Warum bleibt bei `wert & MASKE_BIT_2` nur ein gesetztes Bit erhalten?"
      - kind: prediction
        text: "Welches Ergebnis erwartest du für `wert & MASKE_BIT_2`, wenn Bit 2 in `wert` nicht gesetzt wäre?"
  - id: darstellung-und-abgrenzung
    title: "Darstellung und Abgrenzung"
    objective: "Die Binärausgabe deuten und bitweise von logischen Operatoren unterscheiden."
    questions:
      - kind: concept
        text: "Welche Rolle spielt `BIN` in `Serial.println(wert, BIN)`?"
      - kind: concept
        text: "Worin unterscheidet sich der bitweise Operator `&` vom logischen UND mit zwei Und-Zeichen?"
      - kind: transfer
        text: "Wie würdest du prüfen, ob Bit 3 in `wert` gesetzt ist?"
@end-unosim-tutor */
