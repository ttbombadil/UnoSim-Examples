/*
 * IT05.3 - Einen von mehreren Faellen auswaehlen
 *
 * Lernziel:
 * Mit switch/case anhand eines Wertes einen Programmzweig auswaehlen.
 *
 * Beobachtung:
 * Fuer modus = 2 wird die zweite Meldung ausgegeben.
 */

byte modus = 2;

void setup() {
  Serial.begin(115200);

  switch (modus) {
    case 1:
      Serial.println("Modus 1: langsam");
      break;
    case 2:
      Serial.println("Modus 2: schnell");
      break;
    default:
      Serial.println("Unbekannter Modus");
      break;
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze modus auf 1 und danach auf 7.
 * 2. Entferne das erste break.
 *
 * Lernfragen:
 * 1. Wann wird der default-Zweig ausgefuehrt?
 * 2. Welche Aufgabe hat break?
 * 3. Was geschieht ohne das erste break bei modus = 1?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen mit switch/case anhand eines Wertes einen Zweig auswählen können."
afterFocus: free
focus:
  - id: default-zweig
    title: "Der default-Zweig"
    objective: "Erklären, wann `default` greift, und eine Ausgabe vorhersagen."
    questions:
      - kind: concept
        text: "Wann wird der `default`-Zweig ausgeführt?"
      - kind: prediction
        text: "Welche Meldung erscheint, wenn `modus` den Wert 7 hat?"
  - id: break
    title: "Die Rolle von break"
    objective: "Die Aufgabe von `break` erklären und das Durchfallen ohne `break` vorhersagen."
    questions:
      - kind: concept
        text: "Welche Aufgabe hat `break` in einem `case`?"
      - kind: prediction
        text: "Was geschähe ohne das erste `break` bei `modus` gleich 1?"
      - kind: transfer
        text: "Wie würdest du einen dritten Modus ergänzen?"
@end-unosim-tutor */
