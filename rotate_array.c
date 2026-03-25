#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int len = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the shift: ");
    scanf("%d", &k);

    
    k = k % len;

    
    int start = 0, end = len - k - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    
    start = len - k;
    end = len - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    
    start = 0;
    end = len - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}