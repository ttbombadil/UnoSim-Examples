/*
 * IT06.4 – Eine Zahl binär ausgeben
 *
 * Lernziel:
 * Mit einer Zählschleife und den bitweisen Operatoren alle 8 Bits einer
 * Zahl ausgeben – auch die führenden Nullen.
 *
 * Bezug zu den Unterlagen:
 * IT06, Abschnitt „Beispiel 1: Anwendung von Schleifen bei dem Programm zur
 * Darstellung von Binärzahlen“; IT02 „Beispiel Dezimalzahl 37 als Binärzahl“.
 *
 * Beobachtung:
 * „37 = 00100101“. Zum Vergleich gibt BIN die Zahl ohne führende Nullen aus.
 */

byte a = 37;

void setup() {
  Serial.begin(115200);

  Serial.print(a);
  Serial.print(" = ");
  for (int i = 7; i >= 0; i--) {
    Serial.print(a & (1 << i) && 1);   // ist Bit i gesetzt?
  }
  Serial.println();

  Serial.print("Mit BIN: ");
  Serial.println(a, BIN);
}

void loop() {
}

/*
 * Experimente:
 * 1. Gib die Zahlen 200 und 255 aus.
 * 2. Ergänze nach dem vierten Bit ein Leerzeichen (wie auf der Folie).
 * 3. Erweitere das Programm auf 16 Bit: unsigned int a = 32109; und i ab 15.
 *
 * Lernfragen:
 * 1. Welche Zahl ergibt 1 << i für i = 7?
 * 2. Warum zählt die Schleife von 7 herunter und nicht von 0 hoch?
 * 3. Welchen Vorteil hat die Schleife gegenüber acht einzelnen Ausgaben?
 */

/* @unosim-tutor
schemaVersion: 3
learningObjectives:
  - "Die Studierenden sollen eine Zählschleife mit bitweisen Operatoren kombinieren können."
  - "Sie sollen den Vorteil einer Schleife für die Skalierbarkeit eines Programms erklären können."
afterFocus: free
focus:
  - id: bit-pruefen
    title: "Ein Bit prüfen"
    objective: "Erklären, wie in jedem Durchlauf ein Bit geprüft wird."
    questions:
      - kind: concept
        text: "Welche Aufgabe hat `1 << i` in der Schleife?"
        reference:
          answer: "Sie bildet eine Maske, in der nur Bit i gesetzt ist; a & (1 << i) prüft damit genau dieses Bit von a."
          explanation: "1 << i schiebt eine 1 um i Stellen nach links, z. B. ist 1 << 7 = 128 (binär 10000000). Das bitweise Und mit a lässt nur Bit i von a stehen: Das Ergebnis ist ungleich 0, wenn dieses Bit gesetzt ist, sonst 0. && 1 macht daraus die Ausgabe 1 oder 0."
          requiresCode:
            - "for (int i = 7; i >= 0; i--) {"
            - "Serial.print(a & (1 << i) && 1);"
      - kind: prediction
        text: "Was wird im ersten Durchlauf ausgegeben, wenn `a` den Wert 200 hat?"
        reference:
          answer: "1"
          explanation: "Im ersten Durchlauf ist i = 7, also 1 << 7 = 128 (binär 10000000). 200 ist binär 11001000, Bit 7 ist gesetzt: 200 & 128 = 128. Der Ausdruck 128 && 1 ist wahr, deshalb gibt Serial.print eine 1 aus. Die ganze erste Zeile lautet 200 = 11001000."
          accept: ["1", "200 = 1"]
          assumptions: ["a = 200"]
          requiresCode:
            - "for (int i = 7; i >= 0; i--) {"
            - "Serial.print(a & (1 << i) && 1);"
  - id: schleife-und-skalierung
    title: "Schleife und Skalierbarkeit"
    objective: "Die Zählrichtung begründen und das Programm auf 16 Bit übertragen."
    questions:
      - kind: concept
        text: "Warum zählt die Schleife mit `i--` von 7 herunter?"
        reference:
          answer: "Damit das höchstwertige Bit (Bit 7) zuerst ausgegeben wird und die Binärzahl in der gewohnten Leserichtung erscheint."
          explanation: "Eine Binärzahl schreibt man wie eine Dezimalzahl mit der höchsten Stelle links. Der Serial Monitor zeigt die Zeichen in der Reihenfolge der Ausgabe. Beginnt die Schleife bei i = 7 und zählt bis 0 herunter, kommt Bit 7 zuerst und Bit 0 zuletzt; 37 erscheint so als 00100101. Würde sie von 0 hochzählen, stünde die Zahl gespiegelt da."
          requiresCode:
            - "for (int i = 7; i >= 0; i--) {"
      - kind: transfer
        text: "Was musst du an `a` und `i` ändern, damit alle 16 Bits einer größeren Zahl ausgegeben werden?"
        reference:
          answer: "a muss 16 Bit fassen, z. B. unsigned int statt byte, und die Schleife muss bei i = 15 beginnen."
          explanation: "Ein byte hat nur 8 Bit (0 bis 255); auf dem Arduino Uno hat unsigned int 16 Bit (0 bis 65535). Damit alle 16 Bits ausgegeben werden, muss die Schleife beim höchstwertigen Bit 15 starten und weiter bis 0 herunterzählen."
          requiresCode:
            - "byte a = 37;"
            - "for (int i = 7; i >= 0; i--) {"
@end-unosim-tutor */
