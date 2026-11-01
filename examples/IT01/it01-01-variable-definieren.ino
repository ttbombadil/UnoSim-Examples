/*
 * IT01.1 – Eine Variable definieren, initialisieren und zuweisen
 *
 * Lernziel:
 * Eine Variable mit und ohne ausdrücklichen Initialisierer definieren,
 * Initialisierung und Zuweisung unterscheiden und erklären, was bei einer neuen
 * Zuweisung mit dem alten Wert geschieht.
 *
 * Bezug zu den Unterlagen:
 * IT01 Daten, Folien zu Variablen und zu Datentypen für ganze Zahlen.
 * Eine Variablendefinition ist zugleich eine Deklaration: Beide Zeilen unten
 * definieren je eine Variable. Sie unterscheiden sich nur durch den
 * ausdrücklichen Initialisierer.
 *
 * Beobachtung:
 * Der serielle Monitor zeigt „Teile: 3“, dann „Teile: 5“ und „Fehler: 0“.
 * Serial wird hier nur benutzt, um die Werte sichtbar zu machen.
 * Eine globale int-Variable ohne ausdrücklichen Initialisierer beginnt mit 0.
 * Das gilt nicht für lokale automatische int-Variablen, also lokale Variablen
 * ohne static: Deren Wert ist dann nicht festgelegt.
 */

int anzahlTeile;        // Definition ohne ausdrücklichen Initialisierer
int anzahlFehler = 0;   // Definition mit ausdrücklichem Initialisierer; dieses = ist keine Zuweisung

void setup() {
  Serial.begin(115200);

  anzahlTeile = 3;      // Zuweisung
  Serial.print("Teile: ");
  Serial.println(anzahlTeile);

  anzahlTeile = 5;      // Die neue Zuweisung überschreibt den alten Wert
  Serial.print("Teile: ");
  Serial.println(anzahlTeile);

  Serial.print("Fehler: ");
  Serial.println(anzahlFehler);
}

void loop() {
}

/*
 * Experimente:
 * 1. Weise anzahlFehler in setup() den Wert 2 zu und gib ihn erneut aus.
 * 2. Definiere drei weitere Variablen in einer Zeile: int x, y, z;
 * 3. Schreibe in einer der Ausgaben AnzahlTeile mit großem A und lies die
 *    Fehlermeldung des Compilers.
 *
 * Lernfragen:
 * 1. Was unterscheidet eine Definition mit ausdrücklichem Initialisierer von
 *    einer ohne?
 * 2. Was geschieht mit dem alten Wert, wenn anzahlTeile = 5 ausgeführt wird?
 * 3. Warum erkennt der Compiler AnzahlTeile nicht als dieselbe Variable?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen Initialisierung und Zuweisung einer Variablen unterscheiden können."
  - "Sie sollen erklären können, dass eine Zuweisung den alten Wert überschreibt."
afterFocus: free
focus:
  - id: begriffe
    title: "Definition, Initialisierung und Zuweisung"
    objective: "Definitionen mit und ohne ausdrücklichen Initialisierer sowie Initialisierung und Zuweisung an den Zeilen des Sketches unterscheiden."
    questions:
      - kind: concept
        text: "Wodurch unterscheidet sich die Definition `int anzahlTeile;` von der Definition `int anzahlFehler = 0;`?"
      - kind: concept
        text: "Warum ist das Gleichheitszeichen in `int anzahlFehler = 0;` keine Zuweisung, das in `anzahlTeile = 5` aber schon?"
      - kind: recall
        text: "Welchen Wert hat `anzahlTeile` als globale Variable, bevor in `setup` die erste Zuweisung läuft?"
  - id: ueberschreiben
    title: "Einen Wert überschreiben"
    objective: "Vorhersagen, welchen Wert eine Variable nach mehreren Zuweisungen besitzt."
    questions:
      - kind: prediction
        text: "Was geschieht mit dem alten Wert von `anzahlTeile`, wenn `anzahlTeile = 5` ausgeführt wird?"
      - kind: recall
        text: "Wie viele Werte kann `anzahlTeile` zu einem Zeitpunkt gleichzeitig speichern?"
  - id: namen
    title: "Variablennamen"
    objective: "Die Regeln für Variablennamen anwenden."
    questions:
      - kind: concept
        text: "Warum meldet der Compiler einen Fehler, wenn `anzahlTeile` an einer Stelle mit großem A geschrieben wird?"
      - kind: transfer
        text: "Welche weitere Variable würdest du neben `anzahlTeile` für ein Zählprogramm anlegen, und mit welchem Startwert?"
@end-unosim-tutor */
