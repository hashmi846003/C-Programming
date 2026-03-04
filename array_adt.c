#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *A;
    int size;
    int length;
} arr;

int main() {
    arr ar;
    printf("Enter the size of array\n");
    scanf("%d", &ar.size);

    ar.A = (int *)malloc(ar.size * sizeof(int));
    ar.length = 0;  

    int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);

    if (n > ar.size) {
        printf("Number exceeds allocated size!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar.A[i]);
    }
    ar.length = n;

    printf("Array elements are:\n");
    for (int i = 0; i < ar.length; i++) {
        printf("%d ", ar.A[i]);
    }

    free(ar.A);
    return 0;
}