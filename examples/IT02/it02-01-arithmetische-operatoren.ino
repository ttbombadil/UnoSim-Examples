/*
 * IT02.1 - Mit arithmetischen Operatoren rechnen
 *
 * Lernziel:
 * Die Operatoren +, -, *, / und % anwenden.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt die Ergebnisse derselben zwei Operanden.
 */

int a = 13;
int b = 5;

void setup() {
  Serial.begin(115200);

  Serial.print("a + b = ");
  Serial.println(a + b);
  Serial.print("a - b = ");
  Serial.println(a - b);
  Serial.print("a * b = ");
  Serial.println(a * b);
  Serial.print("a / b = ");
  Serial.println(a / b);
  Serial.print("a % b = ");
  Serial.println(a % b);
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze a auf 20 und b auf 4.
 * 2. Deklariere a und b als float und entferne die Modulo-Ausgabe.
 *
 * Lernfragen:
 * 1. Warum ist 13 / 5 bei Variablen vom Typ int gleich 2?
 * 2. Welche Bedeutung hat das Ergebnis von 13 % 5?
 * 3. Bei welchem Experiment darf der Operator % nicht verwendet werden?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Operatoren +, -, *, / und % anwenden."
exclusive: true
focus:
  - id: ganzzahldivision
    title: "Ganzzahldivision"
    objective: "Die Studierenden sollen den Aspekt \"Ganzzahldivision\" erklären können."
    questions:
      - kind: concept
        text: "Warum liefert `a / b` bei Variablen vom Typ `int` ein ganzzahliges Ergebnis?"
      - kind: prediction
        text: "Welches Ergebnis erwartest du für `a / b`, wenn `a` den Wert 13 und `b` den Wert 5 hat?"
  - id: modulo
    title: "Rest einer Division"
    objective: "Die Studierenden sollen den Aspekt \"Rest einer Division\" erklären können."
    questions:
      - kind: concept
        text: "Welche Bedeutung hat das Ergebnis von `a % b`?"
      - kind: application
        text: "Wofür könnte man den Rest einer Division in einem Programm nutzen?"
@end-unosim-tutor */
