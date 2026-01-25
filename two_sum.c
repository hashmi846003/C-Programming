#include <stdio.h>

int main() {
    int arr[] = {1, 2, 5, 7, 9, 8};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: arr[%d] = %d, arr[%d] = %d\n", i, arr[i], j, arr[j]);
            }
        }
    }

    return 0;
}