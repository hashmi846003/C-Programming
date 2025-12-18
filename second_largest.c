#include <stdio.h>
#include <limits.h>

int second_largest(int *arr, int size);

int main() {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must contain at least 2 elements\n");
        return 0;
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = second_largest(arr, size);
    printf("Second largest element is: %d\n", result);

    return 0;
}

int second_largest(int *ptr, int size) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (*(ptr + i) > first) {
            second = first;
            first = *(ptr + i);
        }
        else if (*(ptr + i) > second && *(ptr + i) != first) {
            second = *(ptr + i);
        }
    }
    return second;
}