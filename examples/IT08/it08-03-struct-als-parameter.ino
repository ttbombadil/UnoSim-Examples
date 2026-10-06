/*
 * IT08.3 - Eine Struktur an eine Funktion uebergeben
 *
 * Lernziel:
 * Eine Struktur per Referenz an eine Funktion uebergeben.
 *
 * Beobachtung:
 * Die Funktion veraendert den Messwert im urspruenglichen Datensatz.
 */

struct Messung {
  byte messstelle;
  float messwert;
};

void messwertKorrigieren(struct Messung *messung) {
  messung->messwert = messung->messwert + 0.5;
}

void setup() {
  Serial.begin(115200);

  Messung messung = {1, 20.0};
  messwertKorrigieren(&messung);
  Serial.println(messung.messwert, 1);
}

void loop() {
}

/*
 * Experimente:
 * 1. Korrigiere den Messwert um -1.0.
 * 2. Gib den Wert vor und nach dem Funktionsaufruf aus.
 *
 * Lernfragen:
 * 1. Warum wird beim Aufruf &messung verwendet?
 * 2. Welche Bedeutung hat der Operator ->?
 * 3. Wird in der Funktion eine Kopie oder das Original veraendert?
 */

/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen eine Struktur per Zeiger an eine Funktion übergeben können."
afterFocus: free
focus:
  - id: zeiger-uebergabe
    title: "Übergabe per Zeiger"
    objective: "Die Rolle von `&` beim Aufruf und `->` in der Funktion erklären."
    questions:
      - kind: concept
        text: "Warum wird beim Aufruf `&messung` verwendet?"
      - kind: concept
        text: "Welche Bedeutung hat der Operator `->`?"
  - id: kopie-oder-original
    title: "Kopie oder Original"
    objective: "Entscheiden, ob Kopie oder Original verändert wird."
    questions:
      - kind: concept
        text: "Wird in `messwertKorrigieren` eine Kopie oder das Original verändert?"
@end-unosim-tutor */
