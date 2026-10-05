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
  - "Einen Anweisungsblock mit while wiederholen, solange eine Bedingung wahr ist."
exclusive: true
focus:
  - id: bedingungspruefung
    title: "Bedingungsprüfung"
    objective: "Die Studierenden sollen den Aspekt \"Bedingungsprüfung\" erklären können."
    questions:
      - kind: concept
        text: "Wann wird die Bedingung `zaehler < 5` geprüft?"
      - kind: prediction
        text: "Wie oft läuft die Schleife, wenn `zaehler` mit dem Wert 5 startet?"
  - id: zaehler
    title: "Der Zähler"
    objective: "Die Studierenden sollen den Aspekt \"Der Zähler\" erklären können."
    questions:
      - kind: concept
        text: "Warum muss `zaehler` im Schleifenblock verändert werden?"
      - kind: prediction
        text: "Welche Zahlen erscheinen im Monitor?"
@end-unosim-tutor */
