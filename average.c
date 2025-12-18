/*WAP to find the average of array's elements.

Instructions:

Read size and array's elements from the user

Write a function to find the average

Print the average in the main function

Eg:*/
#include<stdio.h>
void read(int*,int);
void average(int*,int);
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Array elements are:");
    read( arr,size);
    printf("average is:");
    average(arr,size);
}
void read(int *ptr,int size){
    for(int i=0;i<size;i++){
        scanf("%d",(ptr+i));
    }
     for(int i=0;i<size;i++){
        printf("%d\t",*(ptr+i));
    }

}
void average(int *ptr, int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+*(ptr+i);
       // printf("%d",(ptr+i*sizeof(int)));
    }
    float average=(float)sum/size;
    printf("\n%f",average);
}