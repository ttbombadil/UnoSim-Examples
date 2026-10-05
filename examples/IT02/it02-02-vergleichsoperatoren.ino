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
  - "Vergleichsoperatoren anwenden und ihr boolesches Ergebnis beobachten."
exclusive: true
focus:
  - id: vergleichsergebnis
    title: "Ergebnis eines Vergleichs"
    objective: "Die Studierenden sollen den Aspekt \"Ergebnis eines Vergleichs\" erklären können."
    questions:
      - kind: prediction
        text: "Welche der Vergleiche `a == b`, `a != b`, `a < b` und `a >= b` sind mit den aktuellen Werten wahr?"
      - kind: recall
        text: "Wie werden ein wahres und ein falsches Ergebnis in der Ausgabe dargestellt?"
  - id: zuweisung-oder-vergleich
    title: "Zuweisung oder Vergleich"
    objective: "Die Studierenden sollen den Aspekt \"Zuweisung oder Vergleich\" erklären können."
    questions:
      - kind: concept
        text: "Was ist der Unterschied zwischen `=` und `==`?"
      - kind: concept
        text: "Welchen Datentyp hat das Ergebnis eines Vergleichs?"
@end-unosim-tutor */
