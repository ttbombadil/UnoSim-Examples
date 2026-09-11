/*
 * IT07.6 - Werte in Zeilen und Spalten speichern
 *
 * Lernziel:
 * Ein zweidimensionales Array als Tabelle verwenden.
 *
 * Beobachtung:
 * Zwei verschachtelte Schleifen geben eine Tabelle mit zwei Zeilen aus.
 */

const byte ZEILEN = 2;
const byte SPALTEN = 3;
int tabelle[ZEILEN][SPALTEN] = {
  {1, 2, 3},
  {4, 5, 6}
};

void setup() {
  Serial.begin(115200);

  for (byte zeile = 0; zeile < ZEILEN; zeile++) {
    for (byte spalte = 0; spalte < SPALTEN; spalte++) {
      Serial.print(tabelle[zeile][spalte]);
      Serial.print(" ");
    }
    Serial.println();
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere den Wert in der zweiten Zeile und dritten Spalte.
 * 2. Erweitere die Tabelle um eine dritte Zeile.
 *
 * Lernfragen:
 * 1. Welche zwei Indizes werden fuer ein Element benoetigt?
 * 2. Welchen Wert liefert tabelle[1][2]?
 * 3. Welche Schleife laeuft ueber die Spalten?
 */
