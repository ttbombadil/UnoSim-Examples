/*
 * IT07.4 - Die Adresse einer Variablen uebergeben
 *
 * Lernziel:
 * Eine Variable ueber einen Zeiger in einer Funktion veraendern.
 *
 * Beobachtung:
 * Der geaenderte Wert bleibt nach dem Funktionsaufruf erhalten.
 */

void erhoehen(int *zahl) {
  *zahl = *zahl + 1;
}

void setup() {
  Serial.begin(115200);

  int zaehler = 10;
  erhoehen(&zaehler);
  Serial.println(zaehler);
}

void loop() {
}

/*
 * Experimente:
 * 1. Erhoehe den Wert in der Funktion um 5.
 * 2. Entferne beim Aufruf den Adressoperator & und lies die Fehlermeldung.
 *
 * Lernfragen:
 * 1. Welche Bedeutung hat & beim Funktionsaufruf?
 * 2. Welche Bedeutung hat * vor zahl in der Funktion?
 * 3. Warum bleibt die Aenderung nach dem Funktionsaufruf erhalten?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen eine Variable über einen Zeiger in einer Funktion verändern können."
afterFocus: free
focus:
  - id: adresse-und-zeiger
    title: "Adresse und Zeiger"
    objective: "Die Bedeutung von `&` beim Aufruf und `*` in der Funktion erklären."
    questions:
      - kind: concept
        text: "Welche Bedeutung hat `&` beim Aufruf `erhoehen(&zaehler)`?"
      - kind: concept
        text: "Welche Bedeutung hat `*` vor `zahl` in der Funktion?"
  - id: wirkung
    title: "Wirkung außerhalb der Funktion"
    objective: "Begründen, warum die Änderung erhalten bleibt."
    questions:
      - kind: concept
        text: "Warum bleibt die Änderung nach dem Funktionsaufruf erhalten?"
@end-unosim-tutor */
