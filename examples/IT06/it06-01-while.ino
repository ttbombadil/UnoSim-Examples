/*
 * IT06.1 - Eine kopfgesteuerte Schleife verwenden
 *
 * Lernziel:
 * Einen Anweisungsblock mit while wiederholen, solange eine Bedingung wahr ist.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt die Zahlen 0 bis 4.
 */

void setup() {
  Serial.begin(115200);

  byte zaehler = 0;
  while (zaehler < 5) {
    Serial.println(zaehler);
    zaehler++;
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere die Schleifenbedingung zu zaehler < 10.
 * 2. Setze den Startwert des Zaehlers auf 5.
 *
 * Lernfragen:
 * 1. Wann wird die Schleifenbedingung geprueft?
 * 2. Warum muss zaehler im Schleifenblock veraendert werden?
 * 3. Wie oft laeuft die Schleife beim Startwert 5?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen eine kopfgesteuerte Schleife mit while schreiben und deuten können."
afterFocus: free
focus:
  - id: bedingungspruefung
    title: "Bedingungsprüfung"
    objective: "Erklären, wann die Bedingung geprüft wird, und die Zahl der Durchläufe vorhersagen."
    questions:
      - kind: concept
        text: "Wann wird die Bedingung `zaehler < 5` geprüft?"
      - kind: prediction
        text: "Wie oft läuft die Schleife, wenn `zaehler` mit dem Wert 5 startet?"
  - id: zaehler
    title: "Der Zähler"
    objective: "Begründen, warum der Zähler im Block verändert werden muss."
    questions:
      - kind: concept
        text: "Warum muss `zaehler` im Schleifenblock verändert werden?"
      - kind: prediction
        text: "Welche Zahlen erscheinen im Monitor?"
@end-unosim-tutor */
