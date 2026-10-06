/*
 * IT02.2 - Zwei Werte vergleichen
 *
 * Lernziel:
 * Vergleichsoperatoren anwenden und ihr boolesches Ergebnis beobachten.
 *
 * Beobachtung:
 * Ein wahres Ergebnis erscheint als 1, ein falsches als 0.
 */

int a = 7;
int b = 10;

void setup() {
  Serial.begin(115200);

  Serial.print("a == b: ");
  Serial.println(a == b);
  Serial.print("a != b: ");
  Serial.println(a != b);
  Serial.print("a < b:  ");
  Serial.println(a < b);
  Serial.print("a >= b: ");
  Serial.println(a >= b);
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze a ebenfalls auf 10.
 * 2. Ersetze in einer Ausgabe == durch = und beobachte das Ergebnis.
 *
 * Lernfragen:
 * 1. Welche Vergleiche sind bei a = 7 und b = 10 wahr?
 * 2. Was ist der Unterschied zwischen = und ==?
 * 3. Welchen Datentyp hat das Ergebnis eines Vergleichs?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen Vergleichsoperatoren anwenden und ihr Ergebnis deuten können."
  - "Sie sollen Zuweisung und Vergleich unterscheiden können."
afterFocus: free
focus:
  - id: vergleichsergebnis
    title: "Ergebnis eines Vergleichs"
    objective: "Das Ergebnis mehrerer Vergleiche bestimmen und die Darstellung als 1 oder 0 erklären."
    questions:
      - kind: prediction
        text: "Welche der Vergleiche `a == b`, `a != b`, `a < b` und `a >= b` sind mit den aktuellen Werten wahr?"
      - kind: recall
        text: "Wie werden ein wahres und ein falsches Ergebnis in der Ausgabe dargestellt?"
  - id: zuweisung-oder-vergleich
    title: "Zuweisung oder Vergleich"
    objective: "Den Unterschied zwischen `=` und `==` erklären und den Ergebnistyp eines Vergleichs nennen."
    questions:
      - kind: concept
        text: "Was ist der Unterschied zwischen `=` und `==`?"
      - kind: concept
        text: "Welchen Datentyp hat das Ergebnis eines Vergleichs?"
      - kind: prediction
        text: "Was würde sich ändern, wenn `b` den Wert 7 hätte?"
@end-unosim-tutor */
