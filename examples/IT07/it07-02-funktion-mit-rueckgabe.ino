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

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen Parameter und Rückgabewert einer Funktion unterscheiden können."
afterFocus: free
focus:
  - id: eingabe-und-ergebnis
    title: "Eingabe und Ergebnis"
    objective: "Parameter und Rückgabewert benennen und den Rückgabetyp erklären."
    questions:
      - kind: concept
        text: "Was geht in `quadrat` hinein, und was kommt heraus?"
      - kind: concept
        text: "Welchen Datentyp besitzt der Rückgabewert?"
  - id: return
    title: "Die Anweisung return"
    objective: "Die Wirkung von `return` erklären und ein Ergebnis vorhersagen."
    questions:
      - kind: concept
        text: "Was bewirkt die Anweisung `return`?"
      - kind: prediction
        text: "Welcher Wert steht nach `quadrat(6)` in `ergebnis`?"
@end-unosim-tutor */
