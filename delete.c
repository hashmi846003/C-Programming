#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6};
    int size = 6;
    int pos = 2;  

    if (pos >= 0 && pos < size) {
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];  
        }
        size--; 
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}