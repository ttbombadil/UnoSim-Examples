/*
 * IT01.1 - Einen Wert in einer Variablen speichern
 *
 * Lernziel:
 * Eine Variable deklarieren, ihr einen Wert zuweisen und den Wert veraendern.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt zuerst 3 und danach 5.
 * Serial wird hier nur benutzt, um die Werte sichtbar zu machen.
 */

int anzahlTeile = 3;

void setup() {
  Serial.begin(115200);

  Serial.println(anzahlTeile);
  anzahlTeile = 5;
  Serial.println(anzahlTeile);
}

void loop() {
}

/*
 * Experimente:
 * 1. Weise der Variablen vor der zweiten Ausgabe den Wert 12 zu.
 * 2. Fuege eine dritte Zuweisung und Ausgabe hinzu.
 *
 * Lernfragen:
 * 1. Welchen Wert besitzt anzahlTeile direkt nach der Deklaration?
 * 2. Was geschieht mit dem alten Wert bei einer neuen Zuweisung?
 * 3. Warum erscheint jede Ausgabe nur einmal?
 */
