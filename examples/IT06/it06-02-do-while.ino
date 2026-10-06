/*
 * IT06.2 - Eine fussgesteuerte Schleife verwenden
 *
 * Lernziel:
 * Einen Anweisungsblock mit do/while mindestens einmal ausfuehren.
 *
 * Beobachtung:
 * Trotz einer anfangs falschen Bedingung erscheint eine Ausgabe.
 */

void setup() {
  Serial.begin(115200);

  byte zaehler = 5;
  do {
    Serial.println(zaehler);
    zaehler++;
  } while (zaehler < 5);
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze den Startwert auf 0.
 * 2. Ersetze do/while durch eine while-Schleife mit gleicher Bedingung.
 *
 * Lernfragen:
 * 1. Wann wird die Bedingung einer do/while-Schleife geprueft?
 * 2. Wie oft wird ihr Block mindestens ausgefuehrt?
 * 3. Warum entsteht beim zweiten Experiment mit Startwert 5 keine Ausgabe?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen eine fußgesteuerte Schleife mit do/while deuten können."
afterFocus: free
focus:
  - id: pruefung-am-ende
    title: "Prüfung am Ende"
    objective: "Erklären, wann die Bedingung geprüft wird und wie oft der Block mindestens läuft."
    questions:
      - kind: concept
        text: "Wann wird die Bedingung der `do`/`while`-Schleife geprüft?"
      - kind: prediction
        text: "Wie oft wird der Block mindestens ausgeführt?"
  - id: vergleich-while
    title: "Vergleich mit while"
    objective: "Das Verhalten von do/while mit while bei gleichem Startwert vergleichen."
    questions:
      - kind: concept
        text: "Warum entstünde mit einer reinen `while`-Schleife und demselben Startwert keine Ausgabe?"
@end-unosim-tutor */
