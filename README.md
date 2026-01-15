# Sudoku Solver in C++ (Backtracking)

**Timeline:** Originally written in 2020  
**Context:** Early learning phase while preparing for competitive programming

## About
This is a console-based Sudoku solver implemented in C++ using a recursive backtracking approach.
I wrote this program when I was first learning core C++ concepts and problem-solving for competitive coding.

## Key Concepts Used
- Functions
- 2D arrays
- Nested (double) loops
- Recursion and backtracking
- Constraint checking (row, column, 3×3 subgrid)

## Important Learning Moment: Space & Environment
This program worked correctly in offline C++ IDEs (such as Dev-C++, Code::Blocks, and g++)
but failed in constrained online environments like the SoloLearn IDE.

This experience helped me realize early on that:
- Memory and stack space are real constraints
- Recursive solutions are sensitive to execution environments
- Correct logic alone does not guarantee successful execution everywhere

This was one of my first lessons in space complexity and system limitations.

## Why This Repository Exists
I am uploading this code now to:
- Document my early programming journey
- Revisit core C++ syntax and logic
- Reflect on how my understanding of systems and constraints has evolved

## Revisiting (Reflection)
If I were to rewrite this today, I would:
- Use `std::vector` instead of raw arrays
- Improve input validation
- Add clearer comments for the recursive logic
- Explore iterative or space-optimized approaches

## How to Run
```bash
g++ sudoku_solver.cpp -o sudoku
./sudoku
