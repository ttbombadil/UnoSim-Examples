/*
 * IT01.2 - Einen unveraenderlichen Wert festlegen
 *
 * Lernziel:
 * Einen Wert mit const als Konstante deklarieren.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt den festgelegten Grenzwert.
 * Serial wird hier nur benutzt, um den Wert sichtbar zu machen.
 */

const byte MAXIMALE_ANZAHL = 10;

void setup() {
  Serial.begin(115200);
  Serial.print("Maximale Anzahl: ");
  Serial.println(MAXIMALE_ANZAHL);
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere den Wert der Konstante auf 20.
 * 2. Versuche nach der Deklaration MAXIMALE_ANZAHL = 5; zu ergaenzen.
 *
 * Lernfragen:
 * 1. Wodurch unterscheidet sich eine Konstante von einer Variablen?
 * 2. Warum meldet der Compiler beim zweiten Experiment einen Fehler?
 * 3. Warum werden Konstantennamen hier grossgeschrieben?
 */
