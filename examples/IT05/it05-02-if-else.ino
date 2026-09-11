/*
 * IT05.2 - Zwischen zwei Alternativen entscheiden
 *
 * Lernziel:
 * Mit if/else genau einen von zwei Programmzweigen ausfuehren.
 *
 * Beobachtung:
 * Abhaengig vom Messwert erscheint genau eine der beiden Meldungen.
 */

int messwert = 40;
const int GRENZWERT = 60;

void setup() {
  Serial.begin(115200);

  if (messwert > GRENZWERT) {
    Serial.println("Messwert ist hoch");
  } else {
    Serial.println("Messwert ist nicht hoch");
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze messwert auf 80.
 * 2. Setze messwert genau auf 60.
 *
 * Lernfragen:
 * 1. Koennen beide Zweige in einem Durchlauf ausgefuehrt werden?
 * 2. Welcher Zweig wird bei messwert = 60 ausgefuehrt?
 * 3. Wie muesste die Bedingung fuer "mindestens 60" lauten?
 */
