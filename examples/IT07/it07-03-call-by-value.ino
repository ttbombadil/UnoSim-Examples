/*
 * IT07.3 - Einen Parameter als Wert uebergeben
 *
 * Lernziel:
 * Beobachten, dass Call-by-value in der Funktion mit einer Kopie arbeitet.
 *
 * Beobachtung:
 * Die Zahl wird in der Funktion veraendert, ausserhalb bleibt sie unveraendert.
 */

void erhoehen(int zahl) {
  zahl = zahl + 1;
  Serial.print("In der Funktion: ");
  Serial.println(zahl);
}

void setup() {
  Serial.begin(115200);

  int zaehler = 10;
  erhoehen(zaehler);
  Serial.print("Nach dem Aufruf: ");
  Serial.println(zaehler);
}

void loop() {
}

/*
 * Experimente:
 * 1. Erhoehe zahl in der Funktion um 100.
 * 2. Rufe die Funktion zweimal mit demselben zaehler auf.
 *
 * Lernfragen:
 * 1. Welcher Wert wird beim Aufruf kopiert?
 * 2. Warum bleibt zaehler ausserhalb der Funktion gleich?
 * 3. In welchem Bereich ist der Parameter zahl gueltig?
 */
