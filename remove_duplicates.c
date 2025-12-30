#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    int i = 0; 
    for (int j = 1; j < size; j++) {
        if (arr[j] != arr[i]) {
            i++;          
            arr[i] = arr[j]; 
        }
    }

    int newLength = i + 1;

    
    printf("Array after removing duplicates:\n");
    for (int k = 0; k < newLength; k++) {
        printf("%d ", arr[k]);
    }
    printf("\nNew length = %d\n", newLength);

    return 0;
}

