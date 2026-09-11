/*
 * IT03.2 - Ein Zeichen seriell einlesen
 *
 * Lernziel:
 * Mit Serial.available() und Serial.read() ein einzelnes Zeichen empfangen.
 *
 * Beobachtung:
 * Jedes gesendete Zeichen wird im seriellen Monitor wieder ausgegeben.
 */

void setup() {
  Serial.begin(115200);
  Serial.println("Ein Zeichen eingeben:");
}

void loop() {
  if (Serial.available() > 0) {
    char zeichen = Serial.read();
    Serial.print("Empfangen: ");
    Serial.println(zeichen);
  }
}

/*
 * Experimente:
 * 1. Sende nacheinander die Zeichen A, 7 und ?.
 * 2. Aendere den Datentyp von zeichen zu int.
 *
 * Lernfragen:
 * 1. Warum wird Serial.available() vor Serial.read() geprueft?
 * 2. Was liefert Serial.read(), wenn kein Zeichen vorhanden ist?
 * 3. Warum erscheinen bei einer int-Variablen Zahlen statt Zeichen?
 */
