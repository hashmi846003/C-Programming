#include<stdio.h>
int main(){
    int arr[]={1,2,0,3,7,0,0,9,4,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int j=0;
    for(int i=0;i<size;i++){
        if (arr[i] != 0) {
            arr[j] = arr[i];
            if (i != j) 
                arr[i] = 0; 
            j++;
        }


    }
     for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;


}