/*Description : 

You have to read a array elements from the user and find the average.

Sample Execution : 

Test case 1 : 

Enter the size : 5

Enter the array elements : 2 4 6 8 11

Average is 6.2*/
#include<stdio.h>
void read(int *,int);
void print(int *,int);
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    read( arr, size);
    print(arr,size);
}
void read(int *arr,int size){
    for(int i=0;i<size;i++){
        scanf("%d",(arr+i));
    }
    printf("Value in the array are:");
    for( int i=0;i<size;i++){
        printf("%d",*(arr+i));
    }
}
void print(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+*(arr+i);
    }
    float average=(float)sum/size;
    printf("\n%f",average);
}