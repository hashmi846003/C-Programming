#include<stdio.h>
int max(int *arr,int size);
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of an array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Element of array are\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
int result=max(arr, size);
printf("%d",result);

}
int max(int *arr,int size){
int maxVal=arr[0];
for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;



}