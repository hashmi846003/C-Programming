#include <stdio.h>

int main() {
    int mat[5][5];
    int target;

    // Input matrix
    printf("Enter 5x5 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Input target sum
    printf("Enter target sum: ");
    scanf("%d", &target);

    // Check adjacency
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            
            // Right
            if (j + 1 < 5 && mat[i][j] + mat[i][j+1] == target) {
                printf("%d + %d = %d\n", mat[i][j], mat[i][j+1], target);
            }

            // Down
            if (i + 1 < 5 && mat[i][j] + mat[i+1][j] == target) {
                printf("%d + %d = %d\n", mat[i][j], mat[i+1][j], target);
            }

            // Right-diagonal
            if (i + 1 < 5 && j + 1 < 5 && mat[i][j] + mat[i+1][j+1] == target) {
                printf("%d + %d = %d\n", mat[i][j], mat[i+1][j+1], target);
            }
        }
    }

    return 0;
}
