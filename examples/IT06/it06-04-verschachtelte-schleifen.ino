/*
 * IT06.4 - Zwei Schleifen verschachteln
 *
 * Lernziel:
 * Eine innere Schleife fuer jeden Durchlauf einer aeusseren Schleife ausfuehren.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt ein Rechteck aus drei Zeilen und vier Zeichen.
 */

void setup() {
  Serial.begin(115200);

  for (byte zeile = 0; zeile < 3; zeile++) {
    for (byte spalte = 0; spalte < 4; spalte++) {
      Serial.print("X");
    }
    Serial.println();
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Erzeuge ein Rechteck aus zwei Zeilen und sechs Spalten.
 * 2. Gib statt X den aktuellen Spaltenindex aus.
 *
 * Lernfragen:
 * 1. Wie oft wird die innere Schleife insgesamt durchlaufen?
 * 2. Welche Schleife bestimmt die Anzahl der Zeilen?
 * 3. Warum steht println() ausserhalb der inneren Schleife?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen zwei Schleifen verschachteln können."
afterFocus: free
focus:
  - id: verschachtelung
    title: "Verschachtelung"
    objective: "Die Gesamtzahl der inneren Durchläufe bestimmen und die Rolle beider Schleifen erklären."
    questions:
      - kind: prediction
        text: "Wie oft wird die innere Schleife insgesamt durchlaufen?"
      - kind: concept
        text: "Welche Schleife bestimmt die Anzahl der Zeilen?"
  - id: zeilenumbruch
    title: "Zeilenumbruch"
    objective: "Die Stellung des Zeilenumbruchs begründen und das Muster verändern."
    questions:
      - kind: concept
        text: "Warum steht `Serial.println()` außerhalb der inneren Schleife?"
      - kind: transfer
        text: "Wie erzeugst du ein Rechteck aus zwei Zeilen und sechs Spalten?"
@end-unosim-tutor */
