/*
 * IT07.5 - Gleichartige Werte in einem Array speichern
 *
 * Lernziel:
 * Ein eindimensionales Array deklarieren und ueber seinen Index auslesen.
 *
 * Beobachtung:
 * Die Schleife gibt alle vier gespeicherten Messwerte aus.
 */

const byte ANZAHL_WERTE = 4;
int messwerte[ANZAHL_WERTE] = {120, 135, 128, 142};

void setup() {
  Serial.begin(115200);

  for (byte i = 0; i < ANZAHL_WERTE; i++) {
    Serial.println(messwerte[i]);
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere den Wert des Elements mit dem Index 2.
 * 2. Fuege ein fuenftes Element hinzu.
 *
 * Lernfragen:
 * 1. Mit welchem Index beginnt ein Array?
 * 2. Welchen Wert besitzt messwerte[2] zu Beginn?
 * 3. Warum muss die Schleifenbedingung i < ANZAHL_WERTE lauten?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen ein eindimensionales Array deklarieren und über den Index auslesen können."
afterFocus: free
focus:
  - id: index
    title: "Der Index"
    objective: "Den Startindex nennen und ein Element über seinen Index bestimmen."
    questions:
      - kind: recall
        text: "Mit welchem Index beginnt das Array `messwerte`?"
      - kind: recall
        text: "Welchen Wert besitzt das Element von `messwerte` mit dem Index 2 zu Beginn?"
  - id: schleife-und-grenze
    title: "Schleife und Obergrenze"
    objective: "Die Schleifenbedingung über das Array begründen."
    questions:
      - kind: concept
        text: "Warum muss die Bedingung `i < ANZAHL_WERTE` lauten und darf nicht „kleiner oder gleich“ sein?"
      - kind: prediction
        text: "Was geschähe, wenn `ANZAHL_WERTE` größer als die Zahl der gespeicherten Werte wäre?"
  - id: elementtyp
    title: "Der Elementtyp"
    objective: "Die Rolle des Elementtyps erklären."
    questions:
      - kind: concept
        text: "Welche Rolle spielt der Elementtyp `int` des Arrays `messwerte`?"
@end-unosim-tutor */
