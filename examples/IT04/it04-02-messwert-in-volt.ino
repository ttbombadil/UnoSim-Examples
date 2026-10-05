/*
 * IT04.2 - Einen Analogwert in Volt umrechnen
 *
 * Lernziel:
 * Den digitalisierten Messwert eines Analogeingangs in eine Spannung umrechnen.
 *
 * Beobachtung:
 * Zu jedem Rohwert von A0 wird die entsprechende Spannung ausgegeben.
 */

const byte PIN_SENSOR = A0;
const float REFERENZSPANNUNG = 5.0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int messwert = analogRead(PIN_SENSOR);
  float spannung = messwert * REFERENZSPANNUNG / 1024.0;

  Serial.print(messwert);
  Serial.print(" entspricht ");
  Serial.print(spannung, 2);
  Serial.println(" V");
  delay(500);
}

/*
 * Experimente:
 * 1. Stelle A0 auf den kleinsten und groessten Wert.
 * 2. Entferne bei 1023.0 den Dezimalpunkt und vergleiche die Ausgabe.
 *
 * Lernfragen:
 * 1. Welche Spannung gehoert ungefaehr zum Messwert 512?
 * 2. Warum wird fuer spannung der Datentyp float verwendet?
 * 3. Welche Bedeutung hat die Referenzspannung in der Rechnung?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Den digitalisierten Messwert eines Analogeingangs in eine Spannung umrechnen."
exclusive: true
focus:
  - id: umrechnung
    title: "Umrechnung in Volt"
    objective: "Die Studierenden sollen den Aspekt \"Umrechnung in Volt\" erklären können."
    questions:
      - kind: prediction
        text: "Welche Spannung gehört ungefähr zum Messwert 512?"
      - kind: concept
        text: "Welche Bedeutung hat `REFERENZSPANNUNG` in der Rechnung?"
  - id: datentyp-float
    title: "Gleitkommazahlen"
    objective: "Die Studierenden sollen den Aspekt \"Gleitkommazahlen\" erklären können."
    questions:
      - kind: concept
        text: "Warum wird für `spannung` der Datentyp `float` verwendet?"
      - kind: prediction
        text: "Was ändert sich im Ergebnis, wenn bei `1024.0` der Dezimalpunkt entfällt?"
@end-unosim-tutor */
