/*
 * IT07.2 - Einen Wert aus einer Funktion zurueckgeben
 *
 * Lernziel:
 * Einer Funktion einen Parameter uebergeben und ihr Ergebnis mit return nutzen.
 *
 * Beobachtung:
 * Die Funktion berechnet das Quadrat der uebergebenen Zahl.
 */

int quadrat(int zahl) {
  return zahl * zahl;
}

void setup() {
  Serial.begin(115200);

  int ergebnis = quadrat(6);
  Serial.println(ergebnis);
}

void loop() {
}

/*
 * Experimente:
 * 1. Uebergib der Funktion die Zahl 9.
 * 2. Verwende den Aufruf direkt in Serial.println().
 *
 * Lernfragen:
 * 1. Was geht in die Funktion hinein und was kommt heraus?
 * 2. Welchen Datentyp besitzt der Rueckgabewert?
 * 3. Was bewirkt die Anweisung return?
 */
