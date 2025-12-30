#include<stdio.h>


int main() {
    int arr[] = {1, 3, 4, 5, 6, 9, 10};
    int target = 13;
    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = size - 1;
    int found = 0;

    while (i < j) {
        int sum = arr[i] + arr[j];

        if (sum == target) {
            printf("Pair found: %d + %d = %d\n", arr[i], arr[j], target);
            found = 1;
            break; 
        } else if (sum < target) {
            i++; 
        } else {
            j--; 
        }
    }

    if (!found) {
        printf("No pair found with sum %d\n", target);
    }

    return 0;
}
