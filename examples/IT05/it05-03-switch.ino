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
