#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {          // number of passes
        for (int j = 0; j < n-i-1; j++) {    // compare adjacent elements
            if (arr[j] > arr[j+1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
