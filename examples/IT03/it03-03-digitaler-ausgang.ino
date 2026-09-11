/*
 * IT03.3 - Einen digitalen Ausgang einschalten
 *
 * Lernziel:
 * Einen Pin als Ausgang konfigurieren und auf HIGH setzen.
 *
 * Beobachtung:
 * Pin 13 wird im Simulator als eingeschalteter Ausgang angezeigt.
 */

const byte PIN_LED = LED_BUILTIN;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, HIGH);
}

void loop() {
}

/*
 * Experimente:
 * 1. Ersetze HIGH durch LOW.
 * 2. Verwende Pin 12 statt LED_BUILTIN.
 *
 * Lernfragen:
 * 1. Welche Aufgabe hat pinMode()?
 * 2. Welche elektrische Bedeutung haben HIGH und LOW?
 * 3. Warum reicht fuer dieses Beispiel die Funktion setup() aus?
 */
