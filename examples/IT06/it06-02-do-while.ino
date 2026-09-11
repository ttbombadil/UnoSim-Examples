/*
 * IT06.2 - Eine fussgesteuerte Schleife verwenden
 *
 * Lernziel:
 * Einen Anweisungsblock mit do/while mindestens einmal ausfuehren.
 *
 * Beobachtung:
 * Trotz einer anfangs falschen Bedingung erscheint eine Ausgabe.
 */

void setup() {
  Serial.begin(115200);

  byte zaehler = 5;
  do {
    Serial.println(zaehler);
    zaehler++;
  } while (zaehler < 5);
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze den Startwert auf 0.
 * 2. Ersetze do/while durch eine while-Schleife mit gleicher Bedingung.
 *
 * Lernfragen:
 * 1. Wann wird die Bedingung einer do/while-Schleife geprueft?
 * 2. Wie oft wird ihr Block mindestens ausgefuehrt?
 * 3. Warum entsteht beim zweiten Experiment mit Startwert 5 keine Ausgabe?
 */
