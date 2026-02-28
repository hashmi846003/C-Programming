#include<stdio.h>
int main(){
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int key;
    printf("enter the key value\n");
    scanf("%d",&key);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int start=0,end=size-1;
    int found=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            found=mid;
            break;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    if(found!=-1){
        printf("Key found at index %d\n",found);
    }
    else{
        printf("Key not found\n");
    }
    return 0;
}