/*
 * IT05.1 - Eine Anweisung bedingt ausfuehren
 *
 * Lernziel:
 * Mit if einen Programmblock nur bei einer wahren Bedingung ausfuehren.
 *
 * Beobachtung:
 * Die Meldung erscheint, weil der Messwert groesser als der Grenzwert ist.
 */

int messwert = 75;
const int GRENZWERT = 60;

void setup() {
  Serial.begin(115200);

  if (messwert > GRENZWERT) {
    Serial.println("Grenzwert ueberschritten");
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze messwert auf 40.
 * 2. Ersetze > durch >= und setze messwert auf 60.
 *
 * Lernfragen:
 * 1. Welchen Datentyp hat die Bedingung messwert > GRENZWERT?
 * 2. Was geschieht bei einer falschen Bedingung?
 * 3. Wann unterscheiden sich > und >=?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Mit if einen Programmblock nur bei einer wahren Bedingung ausfuehren."
exclusive: true
focus:
  - id: bedingung
    title: "Die Bedingung"
    objective: "Die Studierenden sollen den Aspekt \"Die Bedingung\" erklären können."
    questions:
      - kind: prediction
        text: "Welchen Wahrheitswert hat `messwert > GRENZWERT` mit den aktuellen Werten?"
      - kind: prediction
        text: "Was geschieht, wenn die Bedingung falsch ist?"
  - id: grenzfall
    title: "Der Grenzfall"
    objective: "Die Studierenden sollen den Aspekt \"Der Grenzfall\" erklären können."
    questions:
      - kind: application
        text: "Wann unterscheidet sich der Vergleich mit `>` von einem Vergleich mit „größer oder gleich“?"
      - kind: transfer
        text: "Wie würdest du eine zweite Meldung für Werte unterhalb des `GRENZWERT` ergänzen?"
@end-unosim-tutor */
