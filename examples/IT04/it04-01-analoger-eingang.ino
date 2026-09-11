/*
 * IT04.1 - Einen analogen Eingang lesen
 *
 * Lernziel:
 * Einen Messwert mit analogRead() erfassen.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt fuer A0 einen Wert von 0 bis 1023.
 */

const byte PIN_SENSOR = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int messwert = analogRead(PIN_SENSOR);
  Serial.println(messwert);
  delay(250);
}

/*
 * Experimente:
 * 1. Stelle A0 im Simulator auf 0, 512 und 1023.
 * 2. Lies statt A0 den Eingang A1.
 *
 * Lernfragen:
 * 1. Welchen Wertebereich besitzt analogRead() beim Arduino Uno?
 * 2. Warum sind fuer diesen Bereich 10 Bit erforderlich?
 * 3. Muss ein analoger Eingang mit pinMode() eingerichtet werden?
 */
