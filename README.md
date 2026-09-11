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
