/*
 * IT03.4 - Einen digitalen Eingang lesen
 *
 * Lernziel:
 * Einen Eingang mit internem Pullup-Widerstand konfigurieren und lesen.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt den aktuellen Zustand von Pin 2.
 */

const byte PIN_TASTER = 2;

void setup() {
  Serial.begin(115200);
  pinMode(PIN_TASTER, INPUT_PULLUP);
}

void loop() {
  int zustand = digitalRead(PIN_TASTER);
  Serial.println(zustand);
  delay(500);
}

/*
 * Experimente:
 * 1. Schalte den Eingang im Simulator zwischen HIGH und LOW um.
 * 2. Ersetze INPUT_PULLUP durch INPUT.
 *
 * Lernfragen:
 * 1. Welche Werte kann digitalRead() liefern?
 * 2. Warum liefert ein gedrueckter Taster bei INPUT_PULLUP normalerweise LOW?
 * 3. Welchen Zweck hat ein Pullup-Widerstand?
 */
