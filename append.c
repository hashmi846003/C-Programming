#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6};
    int size = 6;
    int value = 99;

    if (size < 10) {
        arr[size] = value;  // put at end
        size++;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}