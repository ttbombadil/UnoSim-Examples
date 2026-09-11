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
