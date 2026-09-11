/*
 * IT03.1 - Text seriell ausgeben
 *
 * Lernziel:
 * Die serielle Verbindung starten und Text mit print() und println() ausgeben.
 *
 * Beobachtung:
 * Drei Ausgabebefehle erzeugen im Monitor zwei Textzeilen.
 */

void setup() {
  Serial.begin(115200);

  Serial.print("Hallo ");
  Serial.println("Arduino!");
  Serial.println("Zweite Zeile");
}

void loop() {
}

/*
 * Experimente:
 * 1. Ersetze den ersten Aufruf von print() durch println().
 * 2. Aendere die Baudrate im Programm.
 *
 * Lernfragen:
 * 1. Was unterscheidet print() von println()?
 * 2. Warum muss Serial.begin() vor der ersten Ausgabe stehen?
 * 3. Wie oft werden die Texte ausgegeben und warum?
 */
