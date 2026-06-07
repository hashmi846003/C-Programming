#include <stdio.h>
#include <string.h>

void removeDuplicates(char* arr[], int n) {
    char* result[n];
    int size = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (strcmp(arr[i], result[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[size++] = arr[i];
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", result[i]);
    }
}

int main() {
    char* arr[] = {"test", "best", "rest", "test", "beat", "cheat", "leet"};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    return 0;
}
