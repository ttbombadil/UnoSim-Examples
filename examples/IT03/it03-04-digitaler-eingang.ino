/*
 * IT03.4 - Einen digitalen Eingang lesen
 *
 * Lernziel:
 * Einen Eingang mit internem Pullup-Widerstand konfigurieren und lesen.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt den aktuellen Zustand von Pin 2.
 */

const byte PIN_TASTER = 2;

void setup() {
  Serial.begin(115200);
  pinMode(PIN_TASTER, INPUT_PULLUP);
}

void loop() {
  int zustand = digitalRead(PIN_TASTER);
  Serial.println(zustand);
  delay(500);
}

/*
 * Experimente:
 * 1. Schalte den Eingang im Simulator zwischen HIGH und LOW um.
 * 2. Ersetze INPUT_PULLUP durch INPUT.
 *
 * Lernfragen:
 * 1. Welche Werte kann digitalRead() liefern?
 * 2. Warum liefert ein gedrueckter Taster bei INPUT_PULLUP normalerweise LOW?
 * 3. Welchen Zweck hat ein Pullup-Widerstand?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Einen Eingang mit internem Pullup-Widerstand konfigurieren und lesen."
exclusive: true
focus:
  - id: eingang-lesen
    title: "Eingang lesen"
    objective: "Die Studierenden sollen den Aspekt \"Eingang lesen\" erklären können."
    questions:
      - kind: recall
        text: "Welche Werte kann `digitalRead` liefern?"
      - kind: concept
        text: "Welchen Zweck hat `INPUT_PULLUP` für den Pin `PIN_TASTER`?"
  - id: taster-logik
    title: "Taster-Logik"
    objective: "Die Studierenden sollen den Aspekt \"Taster-Logik\" erklären können."
    questions:
      - kind: prediction
        text: "Welcher Wert wird ausgegeben, solange der Taster gedrückt ist, und warum?"
      - kind: concept
        text: "Warum steht in `loop` der Aufruf `delay(500)`?"
@end-unosim-tutor */
