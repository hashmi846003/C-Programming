#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int **A;   
    int rows;
    int cols;
} arr;

int main() {
    arr ar;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &ar.rows, &ar.cols);

    // allocate memory for rows
    ar.A = (int **)malloc(ar.rows * sizeof(int *));
    // allocate memory for each row
    for (int i = 0; i < ar.rows; i++) {
        ar.A[i] = (int *)malloc(ar.cols * sizeof(int));
    }

    printf("Enter elements:\n");
    for (int i = 0; i < ar.rows; i++) {
        for (int j = 0; j < ar.cols; j++) {
            scanf("%d", &ar.A[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < ar.rows; i++) {
        for (int j = 0; j < ar.cols; j++) {
            printf("%d ", ar.A[i][j]);
        }
        printf("\n");
    }

    // free memory
    for (int i = 0; i < ar.rows; i++) {
        free(ar.A[i]);
    }
    free(ar.A);

    return 0;
}