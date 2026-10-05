/*
 * IT03.3 - Einen digitalen Ausgang einschalten
 *
 * Lernziel:
 * Einen Pin als Ausgang konfigurieren und auf HIGH setzen.
 *
 * Beobachtung:
 * Pin 13 wird im Simulator als eingeschalteter Ausgang angezeigt.
 */

const byte PIN_LED = LED_BUILTIN;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, HIGH);
}

void loop() {
}

/*
 * Experimente:
 * 1. Ersetze HIGH durch LOW.
 * 2. Verwende Pin 12 statt LED_BUILTIN.
 *
 * Lernfragen:
 * 1. Welche Aufgabe hat pinMode()?
 * 2. Welche elektrische Bedeutung haben HIGH und LOW?
 * 3. Warum reicht fuer dieses Beispiel die Funktion setup() aus?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen erklären können, wie ein digitaler Ausgang im aktuellen Sketch gesetzt wird."
  - "Sie sollen den Zusammenhang zwischen Ausgangszustand und beobachtbarer Wirkung beschreiben können."
exclusive: true
focus:
  - id: pin-konfigurieren
    title: "Pin konfigurieren"
    objective: "Die Studierenden sollen den Aspekt \"Pin konfigurieren\" erklären können."
    questions:
      - kind: concept
        text: "Welche Aufgabe hat `pinMode(PIN_LED, OUTPUT)`?"
      - kind: concept
        text: "Welche elektrische Bedeutung hat `HIGH` an diesem Pin?"
  - id: programmstruktur
    title: "Programmstruktur"
    objective: "Die Studierenden sollen den Aspekt \"Programmstruktur\" erklären können."
    questions:
      - kind: concept
        text: "Warum reicht für dieses Beispiel die Funktion `setup` aus?"
      - kind: transfer
        text: "Wie würdest du die LED wieder ausschalten?"
@end-unosim-tutor */
