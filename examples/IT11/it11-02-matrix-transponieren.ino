/*
 * IT11.2 - Eine Matrix transponieren
 *
 * Lernziel:
 * Beim Transponieren Zeilen- und Spaltenindizes vertauschen.
 *
 * Beobachtung:
 * Aus dem Element [0][1] der Ausgangsmatrix wird [1][0] im Ergebnis.
 */

const byte GROESSE = 3;
int matrix[GROESSE][GROESSE] = {
  {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9}
};
int transponiert[GROESSE][GROESSE];

void setup() {
  Serial.begin(115200);

  for (byte zeile = 0; zeile < GROESSE; zeile++) {
    for (byte spalte = 0; spalte < GROESSE; spalte++) {
      transponiert[spalte][zeile] = matrix[zeile][spalte];
    }
  }

  for (byte zeile = 0; zeile < GROESSE; zeile++) {
    for (byte spalte = 0; spalte < GROESSE; spalte++) {
      Serial.print(transponiert[zeile][spalte]);
      Serial.print("\t");
    }
    Serial.println();
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Verwende eine Diagonalmatrix.
 * 2. Gib Ausgangsmatrix und Ergebnis untereinander aus.
 *
 * Lernfragen:
 * 1. Welche beiden Indizes werden beim Transponieren vertauscht?
 * 2. Was geschieht mit den Elementen auf der Hauptdiagonalen?
 * 3. Welche Eigenschaft hat das Ergebnis bei einer symmetrischen Matrix?
 */
