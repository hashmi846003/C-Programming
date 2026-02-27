#include <stdio.h>
#include <stdlib.h>

int main() {
    int **A;
    int rows = 5, cols = 6;

    // Allocate initial 5x6 matrix
    A = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        A[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter elements for A (5x6):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Original Matrix A (5x6):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Shrink to 3x4
    rows = 3;
    cols = 4;

    // Reallocate row pointers
    A = (int **)realloc(A, rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        A[i] = (int *)realloc(A[i], cols * sizeof(int));
    }

    printf("Shrunk Matrix A (3x4):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        free(A[i]);
    }
    free(A);

    return 0;
}