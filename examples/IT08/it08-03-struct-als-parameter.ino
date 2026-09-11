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
