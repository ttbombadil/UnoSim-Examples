/*
 * IT08.4 - Eine Funktion in eine Headerdatei auslagern
 *
 * Lernziel:
 * Eine eigene Headerdatei mit #include in das Hauptprogramm einbinden.
 *
 * Beobachtung:
 * Die ausgelagerte Funktion berechnet weiterhin das erwartete Ergebnis.
 */

#include "rechnen.h"

void setup() {
  Serial.begin(115200);
  Serial.println(addieren(7, 5));
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere die beiden an addieren() uebergebenen Werte.
 * 2. Ergaenze in rechnen.h eine Funktion subtrahieren().
 *
 * Lernfragen:
 * 1. Welche Aufgabe hat die Zeile mit #include?
 * 2. In welcher Datei ist addieren() implementiert?
 * 3. Welchen Vorteil bietet die Trennung bei groesseren Programmen?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Eine eigene Headerdatei mit #include in das Hauptprogramm einbinden."
exclusive: true
focus:
  - id: include
    title: "Die Include-Zeile"
    objective: "Die Studierenden sollen den Aspekt \"Die Include-Zeile\" erklären können."
    questions:
      - kind: concept
        text: "Welche Aufgabe hat die Zeile mit `#include`?"
      - kind: concept
        text: "In welcher Datei ist `addieren` implementiert?"
  - id: trennung
    title: "Trennung von Dateien"
    objective: "Die Studierenden sollen den Aspekt \"Trennung von Dateien\" erklären können."
    questions:
      - kind: concept
        text: "Welchen Vorteil bietet die Trennung bei größeren Programmen?"
@end-unosim-tutor */
