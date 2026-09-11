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
