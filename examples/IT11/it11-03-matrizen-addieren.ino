/*
 * IT11.3 - Zwei Matrizen addieren
 *
 * Lernziel:
 * Zwei Matrizen elementweise addieren.
 *
 * Beobachtung:
 * Jedes Element der Ergebnismatrix ist die Summe derselben Position in A und B.
 */

const byte GROESSE = 3;
int matrixA[GROESSE][GROESSE] = {
  {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9}
};
int matrixB[GROESSE][GROESSE] = {
  {9, 8, 7},
  {6, 5, 4},
  {3, 2, 1}
};
int summe[GROESSE][GROESSE];

void setup() {
  Serial.begin(115200);

  for (byte zeile = 0; zeile < GROESSE; zeile++) {
    for (byte spalte = 0; spalte < GROESSE; spalte++) {
      summe[zeile][spalte] =
          matrixA[zeile][spalte] + matrixB[zeile][spalte];
      Serial.print(summe[zeile][spalte]);
      Serial.print("\t");
    }
    Serial.println();
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze alle Elemente von matrixB auf 0.
 * 2. Addiere eine Matrix mit negativen Elementen.
 *
 * Lernfragen:
 * 1. Welche Elemente werden miteinander addiert?
 * 2. Warum muessen beide Matrizen dieselben Abmessungen besitzen?
 * 3. Welchen Wert hat summe[2][1] im Ausgangsbeispiel?
 */
