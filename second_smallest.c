#include<stdio.h>
int main(){
    int arr[]={5,1,3,2,4};
    int smallest1, smallest2;
    int size = sizeof(arr)/sizeof(arr[0]);

    if(size < 2){
        printf("Invalid inputs\n");
        return 0;
    }

    if(arr[0] < arr[1]){
        smallest1 = arr[0];
        smallest2 = arr[1];
    } else {
        smallest1 = arr[1];
        smallest2 = arr[0];
    }

    for(int i = 2; i < size; i++){
        if(arr[i] < smallest1){
            smallest2 = smallest1;
            smallest1 = arr[i];
        }
        else if(arr[i] < smallest2 && arr[i] != smallest1){
            smallest2 = arr[i];
        }
    }

    if(smallest1 == smallest2){
        printf("Second smallest doesn't exist\n");
    }
    else{
        printf("smallest2 = %d\n", smallest2);
    }

    return 0;
}
