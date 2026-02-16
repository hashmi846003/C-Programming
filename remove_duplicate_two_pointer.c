#include <stdio.h>

int main() {
    int arr[] = {1,2,2,3,3,3,4,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int i = 1;   
    int j = 0;   

    while (i < size) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
        i++;
    }

    
    int k = 0;
    while (k <= j) {
        printf("%d ", arr[k]);
        k++;
    }

    return 0;
}