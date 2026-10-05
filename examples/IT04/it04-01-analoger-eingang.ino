/*
 * IT04.1 - Einen analogen Eingang lesen
 *
 * Lernziel:
 * Einen Messwert mit analogRead() erfassen.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt fuer A0 einen Wert von 0 bis 1023.
 */

const byte PIN_SENSOR = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int messwert = analogRead(PIN_SENSOR);
  Serial.println(messwert);
  delay(250);
}

/*
 * Experimente:
 * 1. Stelle A0 im Simulator auf 0, 512 und 1023.
 * 2. Lies statt A0 den Eingang A1.
 *
 * Lernfragen:
 * 1. Welchen Wertebereich besitzt analogRead() beim Arduino Uno?
 * 2. Warum sind fuer diesen Bereich 10 Bit erforderlich?
 * 3. Muss ein analoger Eingang mit pinMode() eingerichtet werden?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Einen Messwert mit analogRead() erfassen."
exclusive: true
focus:
  - id: wertebereich
    title: "Wertebereich"
    objective: "Die Studierenden sollen den Aspekt \"Wertebereich\" erklären können."
    questions:
      - kind: recall
        text: "Welchen Wertebereich liefert `analogRead` beim Arduino Uno?"
      - kind: concept
        text: "Warum sind für diesen Bereich 10 Bit erforderlich?"
  - id: pin-und-messwert
    title: "Pin und Messwert"
    objective: "Die Studierenden sollen den Aspekt \"Pin und Messwert\" erklären können."
    questions:
      - kind: concept
        text: "Muss ein analoger Eingang wie `PIN_SENSOR` mit pinMode() eingerichtet werden?"
      - kind: application
        text: "Welchen Wert erwartest du für `messwert`, wenn A0 auf halber Referenzspannung liegt?"
@end-unosim-tutor */
