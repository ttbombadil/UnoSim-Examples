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

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen mit analogWrite() PWM-Tastgrade einstellen können."
afterFocus: free
focus:
  - id: tastgrad
    title: "Wertebereich und Tastgrad"
    objective: "Den Wertebereich von `analogWrite` nennen und Werte einem Tastgrad zuordnen."
    questions:
      - kind: recall
        text: "Welchen Wertebereich erwartet `analogWrite`?"
      - kind: concept
        text: "Welchem Tastgrad entspricht ungefähr der Wert `128`?"
  - id: pwm-pins
    title: "PWM-Pins"
    objective: "Erklären, warum nicht jeder Pin PWM kann, und die Wirkung unterschiedlicher Werte beschreiben."
    questions:
      - kind: concept
        text: "Warum ist nicht jeder digitale Pin für PWM geeignet?"
      - kind: prediction
        text: "Wie unterscheidet sich die Helligkeit einer LED bei `64` und bei `255`?"
@end-unosim-tutor */
