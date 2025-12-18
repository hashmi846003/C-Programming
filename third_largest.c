#include <stdio.h>
#include <limits.h>

int third_largest(int *arr, int size);

int main() {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size < 3) {
        printf("Array must contain at least 3 elements\n");
        return 0;
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = third_largest(arr, size);
    printf("Third largest element is: %d\n", result);

    return 0;
}

int third_largest(int *ptr, int size) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (*(ptr + i) > first) {
            third = second;
            second = first;
            first = *(ptr + i);
        }
        else if (*(ptr + i) > second && *(ptr + i) != first) {
            third = second;
            second = *(ptr + i);
        }
        else if (*(ptr + i) > third &&
                 *(ptr + i) != first &&
                 *(ptr + i) != second) {
            third = *(ptr + i);
        }
    }
    return third;
}
