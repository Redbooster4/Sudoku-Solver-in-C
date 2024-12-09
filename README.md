
# Dynamic Sudoku Solver

![License](https://img.shields.io/badge/License-MIT-green) ![Contributions](https://img.shields.io/badge/Contributions-Welcome-blue)

## Description

The **Dynamic Sudoku Solver** is an interactive and efficient program designed to solve Sudoku puzzles of various sizes dynamically. It leverages advanced algorithms to provide quick and accurate solutions, making it an excellent tool for enthusiasts, educators, and developers.

---

## Key Features

- **Dynamic Grid Support**: Solve standard 9x9 grids and adaptable to other sizes (e.g., 4x4, 16x16).
- **Interactive Input**: Accepts manual entry or puzzle files.
- **Real-Time Validation**: Detects invalid puzzles before solving.
- **Algorithmic Efficiency**: Uses backtracking and constraint propagation for fast solutions.
- **Step-by-Step Display**: Optional feature to visualize the solving process.

---

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/Redbooster/dynamic-sudoku-solver.git
    cd dynamic-sudoku-solver
    ```

2. Compile the program (if using C):
    ```bash
    gcc sudoku_solver.c -o sudoku_solver
    ```

3. Run the program:
    ```bash
    ./sudoku_solver
    ```

---

## Usage

1. Run the program and follow the prompts to input the Sudoku puzzle (use `0` for empty cells).
2. View the solution on the terminal or export it to a file.

**Example Input:**
```
Welcome to SUDOKU SOLVER !!
Input Question :-
Enter value for cell [1][1]: 0
Enter value for cell [1][2]: 0
Enter value for cell [1][3]: 6
Enter value for cell [1][4]: 3
Enter value for cell [1][5]: 0
Enter value for cell [1][6]: 7
Enter value for cell [1][7]: 0
Enter value for cell [1][8]: 0
Enter value for cell [1][9]: 0
Enter value for cell [2][1]: 0
Enter value for cell [2][2]: 0
Enter value for cell [2][3]: 4
Enter value for cell [2][4]: 0
Enter value for cell [2][5]: 0
Enter value for cell [2][6]: 0
Enter value for cell [2][7]: 0
Enter value for cell [2][8]: 0
Enter value for cell [2][9]: 5
Enter value for cell [3][1]: 1
Enter value for cell [3][2]: 0
Enter value for cell [3][3]: 0
Enter value for cell [3][4]: 0
Enter value for cell [3][5]: 0
Enter value for cell [3][6]: 6
Enter value for cell [3][7]: 0
Enter value for cell [3][8]: 8
Enter value for cell [3][9]: 2
Enter value for cell [4][1]: 2
Enter value for cell [4][2]: 0
Enter value for cell [4][3]: 5
Enter value for cell [4][4]: 0
Enter value for cell [4][5]: 3
Enter value for cell [4][6]: 0
Enter value for cell [4][7]: 1
Enter value for cell [4][8]: 0
Enter value for cell [4][9]: 6
Enter value for cell [5][1]: 0
Enter value for cell [5][2]: 0
Enter value for cell [5][3]: 0
Enter value for cell [5][4]: 2
Enter value for cell [5][5]: 0
Enter value for cell [5][6]: 0
Enter value for cell [5][7]: 3
Enter value for cell [5][8]: 0
Enter value for cell [5][9]: 0
Enter value for cell [6][1]: 9
Enter value for cell [6][2]: 0
Enter value for cell [6][3]: 0
Enter value for cell [6][4]: 0
Enter value for cell [6][5]: 7
Enter value for cell [6][6]: 0
Enter value for cell [6][7]: 0
Enter value for cell [6][8]: 0
Enter value for cell [6][9]: 4
Enter value for cell [7][1]: 0
Enter value for cell [7][2]: 5
Enter value for cell [7][3]: 0
Enter value for cell [7][4]: 0
Enter value for cell [7][5]: 0
Enter value for cell [7][6]: 0
Enter value for cell [7][7]: 0
Enter value for cell [7][8]: 0
Enter value for cell [7][9]: 0
Enter value for cell [8][1]: 0
Enter value for cell [8][2]: 1
Enter value for cell [8][3]: 0
Enter value for cell [8][4]: 0
Enter value for cell [8][5]: 0
Enter value for cell [8][6]: 0
Enter value for cell [8][7]: 0
Enter value for cell [8][8]: 0
Enter value for cell [8][9]: 0
Enter value for cell [9][1]: 0
Enter value for cell [9][2]: 0
Enter value for cell [9][3]: 8
Enter value for cell [9][4]: 1
Enter value for cell [9][5]: 0
Enter value for cell [9][6]: 9
Enter value for cell [9][7]: 0
Enter value for cell [9][8]: 4
Enter value for cell [9][9]: 0
```

**Output:**
```
Given puzzle:

+-------+-------+-------+
|     6 | 3   7 |       |
|     4 |       |     5 |
| 1     |     6 |   8 2 |
|-------+-------+-------|
| 2   5 |   3   | 1   6 |
|       | 2     | 3     |
| 9     |   7   |     4 |
|-------+-------+-------|
|   5   |       |       |
|   1   |       |       |
|     8 | 1   9 |   4   |
+-------+-------+-------+

The puzzle is solved:

+-------+-------+-------+
| 5 8 6 | 3 2 7 | 4 9 1 |
| 7 2 4 | 8 9 1 | 6 3 5 |
| 1 9 3 | 5 4 6 | 7 8 2 |
|-------+-------+-------|
| 2 4 5 | 9 3 8 | 1 7 6 |
| 8 6 7 | 2 1 4 | 3 5 9 |
| 9 3 1 | 6 7 5 | 8 2 4 |
|-------+-------+-------|
| 4 5 2 | 7 6 3 | 9 1 8 |
| 3 1 9 | 4 8 2 | 5 6 7 |
| 6 7 8 | 1 5 9 | 2 4 3 |
+-------+-------+-------+
```

## Technologies Used

- Programming Language: C
- Algorithms: Backtracking, Constraint Propagation
- Tools: GCC Compiler, Git

---

## Contributing

We welcome contributions! Follow these steps to contribute:

1. Fork the repository.
2. Create a new branch:
    ```bash
    git checkout -b feature/your-feature-name
    ```
3. Commit your changes:
    ```bash
    git commit -m "Add your message here"
    ```
4. Push to the branch:
    ```bash
    git push origin feature/your-feature-name
    ```
5. Create a pull request.

---

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

---

## Contact

For questions or support, contact:
- **Email**: neev.p4@gmail.com
- **GitHub**: [Redbooster](https://github.com/Redbooster)

---
