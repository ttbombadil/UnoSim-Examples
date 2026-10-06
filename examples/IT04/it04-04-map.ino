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

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen map() zur Umrechnung zwischen Wertebereichen anwenden können."
afterFocus: free
focus:
  - id: bereichsgrenzen
    title: "Bereichsgrenzen"
    objective: "Die vier Bereichsgrenzen deuten und das gerundete Ergebnis erklären."
    questions:
      - kind: concept
        text: "Welche Bedeutung haben die vier Bereichsgrenzen im Aufruf von `map`?"
      - kind: concept
        text: "Warum ist das Ergebnis für 512 nicht exakt 127,5?"
  - id: datentyp-und-grenzen
    title: "Datentyp und Grenzen"
    objective: "Die Rolle des Ergebnistyps erklären und das Verhalten außerhalb des Bereichs vorhersagen."
    questions:
      - kind: concept
        text: "Welche Rolle spielt der Typ `long` für `ausgangswert`?"
      - kind: prediction
        text: "Begrenzt `map` einen Eingangswert wie 1200 automatisch auf den Zielbereich?"
@end-unosim-tutor */
