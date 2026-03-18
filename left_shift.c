#include <stdio.h>

void leftRotate(int arr[], int n, int k) {
    k = k % n;  // handle if k > n
    int temp[k];

    // Step 1: store first k elements
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Step 2: shift remaining elements left
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Step 3: put temp elements at the end
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    leftRotate(arr, n, k);

    printf("Array after left rotation by %d: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}