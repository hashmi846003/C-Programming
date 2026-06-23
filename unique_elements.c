#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int *arr = malloc(n * sizeof *arr);
     printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The unique elements found in the array are : ");
    
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 1) {
            printf("%d ", arr[i]);
        }
    }

    free(arr);
    
    return 0;
}
