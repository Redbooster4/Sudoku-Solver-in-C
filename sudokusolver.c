#include <stdio.h>

void print_pattern(int puzzle[9][9]);
int valid_pattern(int puzzle[9][9], int r, int c, int val);
int solve(int puzzle[9][9], int r, int c);

int main() {
    int puzzle[9][9];
    printf("Welcome to SUDOKU SOLVER !!\n");
    printf("Input Question :- \n");
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("Enter value for cell [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &puzzle[i][j]);
            if (puzzle[i][j] < 0 || puzzle[i][j] > 9)
            {
                printf("Invalid input! Enter a number between 0 and 9.\n");
                j--; // Re-prompt the same cell
            }
        }
    }
    printf("Given puzzle:\n");
    print_pattern(puzzle);
    if (solve(puzzle, 0, 0)) {
        printf("\nThe puzzle is solved:\n");
        print_pattern(puzzle);
    } else {
        printf("\nWrong Puzzle: Not solvable.\n");
    }
    return 0;
}

// Validity Check
int valid_pattern(int puzzle[9][9], int r, int c, int val) {
    for (int i = 0; i < 9; i++) {
        // Row check
        if (puzzle[r][i] == val) return 0;
        // Column check
        if (puzzle[i][c] == val) return 0;
    }
    // 3x3 subgrid check
    int startRow = r - r % 3;
    int startCol = c - c % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (puzzle[startRow + i][startCol + j] == val) return 0;
        }
    }
    return 1;  // Value is valid
}

// Solving Logic
int solve(int puzzle[9][9], int r, int c) {
    // If column is 9, move to the next row and reset column to 0
    if (c == 9) {
        c = 0;
        r++;
        // If row is 9, the puzzle is solved
        if (r == 9) return 1;
    }
    // Skip filled cells
    if (puzzle[r][c] > 0) return solve(puzzle, r, c + 1);

    // Try numbers 1 to 9 in the empty cell
    for (int val = 1; val <= 9; val++) {
        if (valid_pattern(puzzle, r, c, val)) {
            puzzle[r][c] = val;
            if (solve(puzzle, r, c + 1)) return 1;
            puzzle[r][c] = 0;  // Backtrack
        }
    }
    return 0;  // No solution found for this path
}

// Printing Sudoku Pattern
void print_pattern(int puzzle[9][9]) {
    printf("\n+-------+-------+-------+");
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0 && i != 0) printf("\n|-------+-------+-------|");
        printf("\n");
        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0) printf("| ");
            if (puzzle[i][j] == 0)
                printf("  ");
            else
                printf("%d ", puzzle[i][j]);
        }
        printf("|");
    }
    printf("\n+-------+-------+-------+\n");
}
