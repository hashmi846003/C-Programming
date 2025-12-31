#include <stdio.h>
#include <limits.h>
int main(){
    int arr[]={5,1,3,2,4};
    int smallest1=INT_MAX,smallest2=INT_MAX;
    int size=sizeof(arr)/sizeof(arr[0]);
    if (size<2){
        printf("invalid inputs");
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest1) {
            smallest2 = smallest1;
            smallest1 = arr[i];
        }
        else if (arr[i] < smallest2 && arr[i] != smallest1) {
            smallest2 = arr[i];
        }
    }

    if (smallest2 == INT_MAX) {
        printf("Second smallest doesn't exist\n");
    } else {
        printf("Second smallest = %d\n", smallest2);
    }

    return 0;
}
