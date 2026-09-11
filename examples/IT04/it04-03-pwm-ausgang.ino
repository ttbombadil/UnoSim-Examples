/*
 * IT04.3 - Einen Ausgang mit PWM ansteuern
 *
 * Lernziel:
 * Mit analogWrite() unterschiedliche PWM-Tastgrade einstellen.
 *
 * Beobachtung:
 * Pin 9 durchlaeuft nacheinander vier verschiedene PWM-Werte.
 */

const byte PIN_PWM = 9;

void setup() {
  pinMode(PIN_PWM, OUTPUT);
}

void loop() {
  analogWrite(PIN_PWM, 0);
  delay(1000);
  analogWrite(PIN_PWM, 64);
  delay(1000);
  analogWrite(PIN_PWM, 128);
  delay(1000);
  analogWrite(PIN_PWM, 255);
  delay(1000);
}

/*
 * Experimente:
 * 1. Teste zusaetzlich den PWM-Wert 192.
 * 2. Verwende einen anderen PWM-faehigen Pin.
 *
 * Lernfragen:
 * 1. Welchen Wertebereich erwartet analogWrite()?
 * 2. Welchem Tastgrad entspricht ungefaehr der Wert 128?
 * 3. Warum ist nicht jeder digitale Pin fuer PWM geeignet?
 */
