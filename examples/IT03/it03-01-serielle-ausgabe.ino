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

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen die serielle Verbindung starten und Text ausgeben können."
afterFocus: free
focus:
  - id: print-und-println
    title: "print und println"
    objective: "Den Unterschied zwischen `print` und `println` erklären und die Zeilenzahl der Ausgabe bestimmen."
    questions:
      - kind: concept
        text: "Was unterscheidet `Serial.print` von `Serial.println`?"
      - kind: application
        text: "Wie viele Zeilen erscheinen im Monitor, und woran erkennst du das im Code?"
  - id: initialisierung
    title: "Serielle Verbindung starten"
    objective: "Begründen, warum die Verbindung vor der ersten Ausgabe gestartet wird und warum der Text nur einmal erscheint."
    questions:
      - kind: concept
        text: "Warum muss `Serial.begin` vor der ersten Ausgabe stehen?"
      - kind: prediction
        text: "Wie oft werden die Texte ausgegeben, und warum nicht fortlaufend?"
@end-unosim-tutor */
