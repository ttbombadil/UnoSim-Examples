/*
 * IT11.1 - Eine Matrix lesbar ausgeben
 *
 * Lernziel:
 * Die Elemente einer 3x3-Matrix zeilen- und spaltenweise ausgeben.
 *
 * Beobachtung:
 * Der serielle Monitor stellt die neun Werte in drei Zeilen dar.
 */

const byte ANZAHL_ZEILEN = 3;
const byte ANZAHL_SPALTEN = 3;
int matrix[ANZAHL_ZEILEN][ANZAHL_SPALTEN] = {
  {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9}
};

void setup() {
  Serial.begin(115200);

  for (byte zeile = 0; zeile < ANZAHL_ZEILEN; zeile++) {
    for (byte spalte = 0; spalte < ANZAHL_SPALTEN; spalte++) {
      Serial.print(matrix[zeile][spalte]);
      Serial.print("\t");
    }
    Serial.println();
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere die Werte der Hauptdiagonalen zu 0.
 * 2. Vertausche bei der Ausgabe zeile und spalte.
 *
 * Lernfragen:
 * 1. Welches Element wird mit matrix[1][2] angesprochen?
 * 2. Warum werden zwei Schleifen benoetigt?
 * 3. Welche Aufgabe hat das Tabulatorzeichen \t?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Elemente einer 3x3-Matrix zeilen- und spaltenweise ausgeben."
exclusive: true
focus:
  - id: elementzugriff
    title: "Elementzugriff"
    objective: "Die Studierenden sollen den Aspekt \"Elementzugriff\" erklären können."
    questions:
      - kind: prediction
        text: "Welches Element von `matrix` wird mit den Indizes 1 und 2 angesprochen?"
      - kind: concept
        text: "Warum werden zwei Schleifen benötigt?"
  - id: ausgabeformat
    title: "Ausgabeformat"
    objective: "Die Studierenden sollen den Aspekt \"Ausgabeformat\" erklären können."
    questions:
      - kind: concept
        text: "Welche Aufgabe hat das Tabulatorzeichen `\\t`?"
@end-unosim-tutor */
