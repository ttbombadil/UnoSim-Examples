/*
 * IT02.1 - Mit arithmetischen Operatoren rechnen
 *
 * Lernziel:
 * Die Operatoren +, -, *, / und % anwenden.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt die Ergebnisse derselben zwei Operanden.
 */

int a = 13;
int b = 5;

void setup() {
  Serial.begin(115200);

  Serial.print("a + b = ");
  Serial.println(a + b);
  Serial.print("a - b = ");
  Serial.println(a - b);
  Serial.print("a * b = ");
  Serial.println(a * b);
  Serial.print("a / b = ");
  Serial.println(a / b);
  Serial.print("a % b = ");
  Serial.println(a % b);
}

void loop() {
}

/*
 * Experimente:
 * 1. Setze a auf 20 und b auf 4.
 * 2. Deklariere a und b als float und entferne die Modulo-Ausgabe.
 *
 * Lernfragen:
 * 1. Warum ist 13 / 5 bei Variablen vom Typ int gleich 2?
 * 2. Welche Bedeutung hat das Ergebnis von 13 % 5?
 * 3. Bei welchem Experiment darf der Operator % nicht verwendet werden?
 */
