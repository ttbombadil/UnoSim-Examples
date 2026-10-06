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

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen eine Konstante von einer Variablen unterscheiden können."
  - "Sie sollen erklären können, warum der Compiler eine nachträgliche Änderung ablehnt."
afterFocus: free
focus:
  - id: konstante-oder-variable
    title: "Konstante oder Variable"
    objective: "Den Unterschied zwischen einer Konstante und einer Variablen erklären und die Folge einer Änderung vorhersagen."
    questions:
      - kind: concept
        text: "Wodurch unterscheidet sich `MAXIMALE_ANZAHL` von einer gewöhnlichen Variablen?"
      - kind: prediction
        text: "Was würde der Compiler melden, wenn man später versucht, `MAXIMALE_ANZAHL` einen neuen Wert zuzuweisen, und warum?"
  - id: const-und-namen
    title: "const und Namenswahl"
    objective: "Die Rolle von `const` und die Namenskonvention für Konstanten begründen."
    questions:
      - kind: concept
        text: "Welche Aufgabe hat das Schlüsselwort `const` in der Deklaration?"
      - kind: concept
        text: "Warum ist der Name `MAXIMALE_ANZAHL` hier großgeschrieben?"
      - kind: transfer
        text: "Für welchen weiteren Wert in einem Sketch wäre eine Konstante sinnvoll?"
@end-unosim-tutor */
