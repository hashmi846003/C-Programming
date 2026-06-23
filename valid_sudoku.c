#include <stdio.h>

int main() {
    int grid[3][3];
    int seen[10] = {0}; // Index 0 unused, 1-9 for digits
    int valid = 1;

    // Read the 3x3 grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &grid[i][j]);
            if (grid[i][j] < 1 || grid[i][j] > 9) {
                valid = 0; // Invalid number
            } else {
                seen[grid[i][j]]++;
            }
        }
    }

    // Check if each number 1-9 appears exactly once
    for (int k = 1; k <= 9; k++) {
        if (seen[k] != 1) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid 3x3 Sudoku\\n");
    else
        printf("Invalid 3x3 Sudoku\\n");

    return 0;
}