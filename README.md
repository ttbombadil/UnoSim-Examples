# UnoSim Examples

Small sketches for the Arduino Uno consumed by UnoSim through the server-side
HTTP ExamplesProvider. The manifest is the public contract; every listed path is
relative to this repository and its immutable release ref. Every Example carries
`"board": "uno"`: it is written for the Uno, and UnoSim asks before it loads one
on another board. On the Nano and the Mega 2560 the Examples also run; ATtiny85
has neither their pins nor a usable serial output at their 115200 baud.

## Didactic structure

The examples follow the weekly `ITxx` course documents used in the first
semester; the week number in a file name matches the number of the course
document. Each sketch focuses on one concept from that week and contains five
parts:

1. a learning objective,
2. a reference to the slides it illustrates (`Bezug zu den Unterlagen`),
3. a directly observable result,
4. small experiments that modify the sketch, and
5. learning questions without included answers.

The sketches use the conventions of the slides: constants in upper case,
`const byte` for pin numbers, `struct Messung` with the `struct` keyword, and
the voltage conversion `messwert / 1024.0 * 5.0`. Comments are German with
umlauts; string literals stay ASCII. Every example compiles for the Arduino Uno
without warnings.

File names use the pattern `it<week>-<number>-<topic>.ino`, for example
`it03-04-led-blinken.ino`. File names stay ASCII-only for reliable use in
URLs and different file systems; German characters may be used in the titles
inside `manifest.json`.

Headers are plain `.h` files with definitions, as in the course, so beginners
only ever handle one extra file. `examples/IT11/mat_func.h` is shared by the
matrix examples IT11.2 to IT11.5.

The weeks IT09 and IT10 are project weeks and have no examples. The examples
are intentionally small reference programs. Complete solutions for the larger
Morse, LED dice, traffic-light, and workpiece-detection exercises are not part
of the public catalog.

The sketches assume the simulator's defaults: the browser emulation runs the
compiled Uno machine code, so `int` is 16 bits wide, `double` equals `float`, and
a float prints with two decimals. An example that reads text expects the Serial
Monitor's line ending "Newline", the default. The UnoSim user guide lists all
limits in its section "Grenzen der Simulation", including the older Legacy engine,
where `int` is 32 bits wide. Examples show overflow with `byte` and print floats
with a precision, so that they behave the same in both.

The terms follow C++. Every definition of a variable is also a declaration.
`int a;` is a definition without an explicit initializer, `int a = 0;` one with
an explicit initializer, and its `=` belongs to the initialization. `a = 3;` in a
function is an assignment. A global `int` without an explicit initializer starts
at 0; this does not hold for local variables. The quality gate rejects the older
course formula "definition = declaration + initialization".

## Releases

Releases use immutable tags such as `v3.0.0`; production UnoSim deployments may
pin the corresponding tag or commit SHA.

## Course Content and Tutor authoring

Schema v2 supports an optional Tutor capability in addition to the Examples
capability. Reusable Tutor Topics live under `tutor/topics/`, Tutor Strategies
under `tutor/strategies/`, and `tutor/manifest.yaml` enumerates and SHA-256 pins
each file. The repository `defaultStrategy` is optional; when present it is
used for Examples and arbitrary sketches unless an Example annotation provides
an override. Without it, UnoSim uses the application-owned `built-in-default`.
The Topics of this repository serve students' own sketches: every Example has
a focus with `afterFocus: free`, so its session uses the focus and then the free
Tutor.

Example-specific Tutor information belongs at the end of the Example's main
`.ino` file. UnoSim removes the annotation before the source is shown or
compiled. Annotations are optional, as are their Topic bindings and strategy
override. `learningObjectives` are teacher-authored learning goals, not raw
prompts; the current sketch remains the factual authority.

The effective strategy precedence is:

1. embedded Example strategy,
2. repository `defaultStrategy`,
3. UnoSim `built-in-default`.

### Writing Tutor instructions for an Example (template)

Schema 2 lets a teacher say what the Tutor should ask for this Example. The
Tutor works through the `focus` areas in order and then switches to the free
Tutor (`afterFocus: free`, the default). `afterFocus: topics` continues with
the repository Topics instead.

```cpp
/* @unosim-tutor
schemaVersion: 2
learningObjectives:
  - "Die Studierenden sollen … erklären können."
afterFocus: free
focus:
  - id: kurzer-bezeichner            # lower-case, digits, hyphens
    title: "Kurzer Titel"
    objective: "Was die Studierenden nach diesem Bereich können sollen."
    questions:                       # 1 to 6; all are asked, the Tutor picks the order within an area
      - kind: recall                 # recall | concept | application | prediction | transfer
        text: "Welchen Wert besitzt `variable` nach der Definition?"
      - kind: concept
        text: "Warum …?"
      - kind: transfer
        text: "Wie würdest du … erweitern?"
@end-unosim-tutor */
```

Rules and recommendations:

- Focus areas are worked through in the order written; within an area the
  Tutor chooses the next question by question kind, so every question of an
  area should be fine to ask first.
- 2 to 3 focus areas per Example, 1 to 3 questions per area. Keep functions
  and parameters to one or two areas; the Tutor does not drift beyond them.
- Put every code term in backticks. Each backticked term must occur in the
  sketch outside comments; the quality gate rejects the rest. Every question
  names at least one such term: it is how the Tutor checks that the question
  still fits while a student experiments. Refer to elements by description (for example "das Element mit dem Index 2") and
  not by an expression that is not in the code.
- Never name a type or construct the sketch does not use (`long` for an
  `unsigned long` sketch).
- Mix question kinds: start with `recall` or `concept`, then `prediction`,
  and end with `application` or `transfer`.
- One question per text, without solution code; the question reaches the
  student word for word, and the quality gate rejects the rest.
- Questions carry no answers and no hints; the Tutor gives feedback. Sketch
  comments must not answer a question either: a "Beobachtung" names what to
  look at, and an experiment asks for the explanation without giving it.
- A focus question stays in the session only while its code terms are in the
  sketch. After most terms are gone the sketch counts as another program, and
  the free Tutor takes over.
- After a weak answer (rating 1 or 2) the Tutor gives a hint and asks the same
  question once more. A focus area counts as understood once each of its
  questions was answered with a rating of 3 or better. If the questions are used
  up without that, the Tutor says which areas stayed open and works on them in
  free mode.
- The questions of a focus are fixed: the adaptive difficulty changes the
  feedback and the free Tutor, not the question.

Tutor repository data is normalized didactic data, never a system prompt.

### Deterministic Tutor quality gate

`tutor/quality-cases.yaml` contains small positive and negative activation
cases that reference Examples by ID. Every Topic needs both kinds of coverage.
The gate also checks the complete pinned bundle, Topic/Question reachability,
mastery capacity, and a strict LEARN-to-DEEPEN path. It deliberately does not
try to judge semantic teaching quality.

`.unosim-compatible-commit` pins the exact UnoSim validator used by CI; it must
be updated deliberately when the Course Content adopts a newer validator
contract. With that UnoSim revision checked out locally, run:

```sh
npm run validate:tutor-course-content -- /path/to/UnoSim-Examples
```
