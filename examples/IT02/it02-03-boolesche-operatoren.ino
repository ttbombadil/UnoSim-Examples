/*
 * IT02.3 - Boolesche Aussagen verknuepfen
 *
 * Lernziel:
 * Die Operatoren &&, || und ! auf Wahrheitswerte anwenden.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt fuer jede Aussage 1 oder 0.
 */

bool schalter1 = true;
bool schalter2 = false;

void setup() {
  Serial.begin(115200);

  Serial.print("schalter1 UND schalter2: ");
  Serial.println(schalter1 && schalter2);
  Serial.print("schalter1 ODER schalter2: ");
  Serial.println(schalter1 || schalter2);
  Serial.print("NICHT schalter1: ");
  Serial.println(!schalter1);
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze beide Schalter auf true.
 * 2. Setze beide Schalter auf false.
 *
 * Lernfragen:
 * 1. Wann ergibt eine UND-Verknuepfung true?
 * 2. Wann ergibt eine ODER-Verknuepfung false?
 * 3. Welche Wirkung hat der Operator ! auf einen Wahrheitswert?
 */
