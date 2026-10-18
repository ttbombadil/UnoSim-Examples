# UnoSim Examples

Small Arduino Uno sketches consumed by UnoSim through the server-side HTTP
ExamplesProvider. The manifest is the public contract; every listed path is
relative to this repository and its immutable release ref.

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

IT08.4 (`typedef` in function signatures) and the IT11 examples (array
parameters sized by constants, default arguments) need an UnoSim version whose
generated function prototypes follow the Arduino IDE, that is, placed before the
first function definition and without default arguments. IT03.6 and IT04.4
expect an open `INPUT_PULLUP` pin to read `HIGH`, which also needs that version.

UnoSim does not run the sketch as Uno machine code, so a few observations
differ from the hardware: `int` is 32 bits wide, `double` 64 bits, and a float
printed without a precision shows `2.5` instead of `2.50`. The examples avoid
these cases (overflow is shown with `byte`, floats are always printed with a
precision). Keep it that way in new examples; the UnoSim user guide lists all
differences in its section "Grenzen der Simulation".

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
        text: "Welchen Wert besitzt `variable` nach der Deklaration?"
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
  sketch outside comments; the quality gate rejects the rest. Refer to
  elements by description (for example "das Element mit dem Index 2") and
  not by an expression that is not in the code.
- Never name a type or construct the sketch does not use (`long` for an
  `unsigned long` sketch).
- Mix question kinds: start with `recall` or `concept`, then `prediction`,
  and end with `application` or `transfer`.
- Questions carry no answers and no hints; the Tutor gives feedback.
- A focus area counts as mastered once each of its questions was answered with
  a rating of 3 or better. If the questions are used up without that, the
  Tutor also switches to the free mode.

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
