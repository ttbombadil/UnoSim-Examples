/*
 * IT08.2 - Mehrere strukturierte Datensaetze speichern
 *
 * Lernziel:
 * Ein Array verwenden, dessen Elemente Strukturen sind.
 *
 * Beobachtung:
 * Drei Messungen werden nacheinander aus dem Array ausgegeben.
 */

struct Messung {
  byte messstelle;
  float messwert;
};

const byte ANZAHL_MESSUNGEN = 3;
Messung messungen[ANZAHL_MESSUNGEN] = {
  {1, 20.5},
  {2, 21.0},
  {1, 20.8}
};

void setup() {
  Serial.begin(115200);

  for (byte i = 0; i < ANZAHL_MESSUNGEN; i++) {
    Serial.print(messungen[i].messstelle);
    Serial.print(": ");
    Serial.println(messungen[i].messwert, 1);
  }
}

void loop() {
}

/*
 * Experimente:
 * 1. Aendere den Messwert des zweiten Datensatzes.
 * 2. Fuege eine vierte Messung hinzu.
 *
 * Lernfragen:
 * 1. Welchen Datentyp besitzt ein einzelnes Arrayelement?
 * 2. Was bedeutet messungen[1].messwert?
 * 3. Warum koennen die Felder einer Struktur verschiedene Datentypen haben?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen ein Array aus Strukturen verwenden können."
afterFocus: free
focus:
  - id: array-aus-structs
    title: "Array aus Strukturen"
    objective: "Den Typ eines Elements bestimmen und den Zugriff auf ein Feld erklären."
    questions:
      - kind: concept
        text: "Welchen Datentyp besitzt ein einzelnes Element von `messungen`?"
      - kind: concept
        text: "Was bedeutet es, das Feld `messwert` des Elements mit dem Index 1 von `messungen` anzusprechen?"
  - id: gemischte-typen
    title: "Gemischte Datentypen"
    objective: "Begründen, warum Felder verschiedene Typen haben dürfen."
    questions:
      - kind: concept
        text: "Warum können die Felder einer `struct` verschiedene Datentypen haben?"
@end-unosim-tutor */
