/*
 * IT03.5 - Die vergangene Zeit abfragen
 *
 * Lernziel:
 * Mit millis() die Zeit seit dem Programmstart bestimmen.
 *
 * Beobachtung:
 * Der ausgegebene Zeitwert wird bei jeder Ausgabe groesser.
 */

void setup() {
  Serial.begin(115200);
}

void loop() {
  unsigned long zeitSeitStart = millis();
  Serial.println(zeitSeitStart);
  delay(500);
}

/*
 * Experimente:
 * 1. Aendere die Wartezeit auf 1000 ms.
 * 2. Gib millis() vor und nach delay() aus.
 *
 * Lernfragen:
 * 1. In welcher Einheit liefert millis() die Zeit?
 * 2. Warum eignet sich unsigned long fuer den Zeitwert?
 * 3. Wird der Zeitwert durch einen erneuten Schleifendurchlauf zurueckgesetzt?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen erklären können, warum millis() einen Zeitwert liefert."
  - "Sie sollen den Zeitwert als Grundlage für einen wiederkehrenden Ablauf einordnen können."
exclusive: true
focus:
  - id: zeitwert
    title: "Der Zeitwert"
    objective: "Die Studierenden sollen den Aspekt \"Der Zeitwert\" erklären können."
    questions:
      - kind: concept
        text: "In welcher Einheit liefert `millis()` die Zeit?"
      - kind: prediction
        text: "Wie verändert sich der ausgegebene Wert von einem Schleifendurchlauf zum nächsten?"
  - id: datentyp
    title: "Der Datentyp"
    objective: "Die Studierenden sollen den Aspekt \"Der Datentyp\" erklären können."
    questions:
      - kind: concept
        text: "Warum eignet sich `unsigned long` für `zeitSeitStart`?"
      - kind: concept
        text: "Wird der Zeitwert durch einen erneuten Durchlauf von `loop` zurückgesetzt?"
@end-unosim-tutor */
