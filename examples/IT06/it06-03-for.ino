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

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen eine Zählschleife mit for formulieren können."
afterFocus: free
focus:
  - id: schleifenkopf
    title: "Der Schleifenkopf"
    objective: "Die drei Angaben im Schleifenkopf benennen und die Zahl der Durchläufe bestimmen."
    questions:
      - kind: concept
        text: "Welche drei Angaben stehen im Kopf von `for (byte i = 1; i <= 5; i++)`?"
      - kind: prediction
        text: "Wie oft wird der Schleifenblock ausgeführt?"
  - id: gueltigkeit
    title: "Gültigkeit und Richtung"
    objective: "Den Gültigkeitsbereich der Zählvariablen erklären und die Zählrichtung ändern."
    questions:
      - kind: concept
        text: "Welchen Gültigkeitsbereich hat die Variable `i`?"
      - kind: transfer
        text: "Wie würdest du die Schleife von 5 bis 1 herunterzählen lassen?"
@end-unosim-tutor */
