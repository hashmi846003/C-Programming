  
#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int len = sizeof(arr) / sizeof(arr[0]);
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < len; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    printf("Largest element: %d\n", first);
    if (second == INT_MIN) {
        printf("No second largest element (all elements may be equal).\n");
    } else {
        printf("Second largest element: %d\n", second);
    }

    return 0;
}