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

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen erklären können, welche Rolle die Variable im aktuellen Sketch spielt."
  - "Sie sollen den Zusammenhang zwischen gespeichertem Wert und serieller Ausgabe verstehen."
afterFocus: free
focus:
  - id: wert-und-zuweisung
    title: "Wert und Zuweisung"
    objective: "Erklären, welchen Wert die Variable nach Deklaration und nach einer neuen Zuweisung besitzt und was mit dem alten Wert geschieht."
    questions:
      - kind: recall
        text: "Welchen Wert besitzt `anzahlTeile` direkt nach der Deklaration?"
      - kind: prediction
        text: "Was geschieht mit dem alten Wert von `anzahlTeile`, wenn `anzahlTeile = 5` ausgeführt wird?"
      - kind: application
        text: "Wie viele Werte kann `anzahlTeile` zu einem Zeitpunkt gleichzeitig speichern?"
  - id: sichtbare-ausgabe
    title: "Sichtbare Ausgabe"
    objective: "Begründen, warum die Ausgaben genau so und nur einmal erscheinen, und eine Erweiterung planen."
    questions:
      - kind: concept
        text: "Warum erscheint jede Ausgabe von `Serial.println` nur einmal?"
      - kind: transfer
        text: "Welche weitere Zuweisung und Ausgabe würdest du ergänzen, um einen dritten Wert sichtbar zu machen?"
@end-unosim-tutor */
