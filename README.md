# CIS_5 Assignment – Week 3 (Winter 2026)
A C++ program that collects and analyzes test scores for multiple students using arrays and loops.

## What the program does
1. Asks the user how many students are in the class (maximum 50).
2. Uses an array to store each student's test score (0–100).
3. Uses loops to:
   - Read all the scores from the user
   - Calculate and display several statistics
   - Show the scores in both normal and reverse order
4. Prints a clear summary of the class performance.

## Inputs and types
- Number of students: `int` (1 to 50)
- Test scores: stored in an `int` array (size 50 is fine)

## Required calculations and output
Using loops, compute and display:

- The **average score** (use `double` for the result, show 1–2 decimal places)
- The **highest score**
- The **lowest score**
- The **number of students who passed** (score ≥ 60)
- The **number of students who earned an A** (score ≥ 90)

Also:
- Print all scores in the order they were entered
- Print all scores in **reverse order** (last student → first student)

## Final output example
```
Number of students: 6
Average score:      78.00
Highest score:      100
Lowest score:       45
Students passed:    5  (>= 60)
Students with A:    2  (>= 90)
Scores in original order:
78  92  65  88  45  100
Scores in reverse order:
100 45  88  65  92  78
```

## Implementation notes / tips
- Use a classic `for` loop with index to read scores and to find min/max/counts
- Use a **range-based for** loop at least once (e.g., to print scores or calculate sum)
- Use `std::setprecision(2)` from `<iomanip>` for nice average output
- Include basic validation:
  - Number of students between 1 and 50
  - Each score between 0 and 100 (re-prompt or clamp if invalid – simple check is enough)
- Use clear, polite prompts and section headers in output
- Add a few comments explaining major sections (input, calculations, output)

## Required includes
```
#include <iostream>
#include <iomanip>   // for std::setprecision
```
