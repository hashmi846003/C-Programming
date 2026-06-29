#include <stdio.h>

int main() {
    int n, i, j, count;
    
    // Read size from the user
    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read elements from user
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The unique elements found in the array are : ");
    
    // Logic to find unique elements
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 1) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}