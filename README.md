# UnoSim Examples

Small Arduino Uno sketches consumed by UnoSim through the server-side HTTP
ExamplesProvider. The manifest is the public contract; every listed path is
relative to this repository and its immutable release ref.

## Didactic structure

The examples follow the weekly `ITxx` course documents used in the first
semester. Each sketch focuses on one concept and contains four parts:

1. a learning objective,
2. a directly observable result,
3. small experiments that modify the sketch, and
4. learning questions without included answers.

File names use the pattern `it<week>-<number>-<topic>.ino`, for example
`it03-03-digitaler-ausgang.ino`. File names stay ASCII-only for reliable use in
URLs and different file systems; German characters may be used in the titles
inside `manifest.json`.

The examples are intentionally small reference programs. Complete solutions
for the larger Morse, LED dice, traffic-light, and workpiece-detection exercises
are not part of the public catalog.

## Releases

Releases use immutable tags such as `v2.0.0`; production UnoSim deployments may
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

For example:

```cpp
/* @unosim-tutor
schemaVersion: 1
topics:
  - variables-and-serial
primaryTopic: variables-and-serial
learningObjectives:
  - Die Studierenden sollen erklären können, welche Rolle die Variable im aktuellen Sketch spielt.
  - Sie sollen den Zusammenhang zwischen gespeichertem Wert und serieller Ausgabe verstehen.
@end-unosim-tutor */
```

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
