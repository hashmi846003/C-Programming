#include <stdio.h>
#include <stdlib.h>

int main() {
    int *A[3];
    for (int i = 0; i < 3; i++) {
        A[i] = (int *)malloc(4 * sizeof(int));
    }

    printf("Enter elements for A (3x4):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    int **C;
    C = (int **)malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++) {
        C[i] = (int *)malloc(4 * sizeof(int));
    }

    printf("Enter elements for C (3x4):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &C[i][j]);
        }
    }

    printf("Matrix C:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < 3; i++) {
        free(A[i]);
        free(C[i]);
    }
    free(C);

    return 0;
}