/*
 * IT07.1 - Eine Funktion ohne Rueckgabe schreiben
 *
 * Lernziel:
 * Wiederverwendbare Anweisungen in einer void-Funktion zusammenfassen.
 *
 * Beobachtung:
 * Ein Funktionsaufruf erzeugt eine vollstaendige Begruessung.
 */

void begruessungAusgeben() {
  Serial.println("Hallo!");
  Serial.println("Willkommen bei UnoSim.");
}

void setup() {
  Serial.begin(115200);
  begruessungAusgeben();
}

void loop() {
}

/*
 * Experimente:
 * 1. Rufe begruessungAusgeben() zweimal auf.
 * 2. Ergaenze in der Funktion eine dritte Textzeile.
 *
 * Lernfragen:
 * 1. Wann werden die Anweisungen in der Funktion ausgefuehrt?
 * 2. Welche Bedeutung hat der Rueckgabetyp void?
 * 3. Welcher Teil ist Funktionsdefinition und welcher Funktionsaufruf?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Wiederverwendbare Anweisungen in einer void-Funktion zusammenfassen."
exclusive: true
focus:
  - id: definition-und-aufruf
    title: "Definition und Aufruf"
    objective: "Die Studierenden sollen den Aspekt \"Definition und Aufruf\" erklären können."
    questions:
      - kind: concept
        text: "Welcher Teil ist die Definition und welcher der Aufruf von `begruessungAusgeben`?"
      - kind: concept
        text: "Wann werden die Anweisungen in der Funktion ausgeführt?"
  - id: rueckgabetyp
    title: "Rückgabetyp"
    objective: "Die Studierenden sollen den Aspekt \"Rückgabetyp\" erklären können."
    questions:
      - kind: concept
        text: "Welche Bedeutung hat der Rückgabetyp `void`?"
@end-unosim-tutor */
