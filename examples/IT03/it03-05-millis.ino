/*
 * IT03.5 - Die vergangene Zeit abfragen
 *
 * Lernziel:
 * Mit millis() die Zeit seit dem Programmstart bestimmen.
 *
 * Beobachtung:
 * Der ausgegebene Zeitwert wird bei jeder Ausgabe groesser.
 */

void setup() {
  Serial.begin(115200);
}

void loop() {
  unsigned long zeitSeitStart = millis();
  Serial.println(zeitSeitStart);
  delay(500);
}

/*
 * Experimente:
 * 1. Aendere die Wartezeit auf 1000 ms.
 * 2. Gib millis() vor und nach delay() aus.
 *
 * Lernfragen:
 * 1. In welcher Einheit liefert millis() die Zeit?
 * 2. Warum eignet sich unsigned long fuer den Zeitwert?
 * 3. Wird der Zeitwert durch einen erneuten Schleifendurchlauf zurueckgesetzt?
 */
