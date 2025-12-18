/*Write a program to square each element of array.*/
#include<stdio.h>
void array(int*,int);
void square(int*,int);
int main(){
    int size;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    int arr[size];
    array(arr,size);
    square(arr,size);
}
void array(int*arr,int size){
    for(int i=0;i<size;i++){
        scanf("%d",(arr+i));
    }
printf("Array elements are:");
    for(int i=0;i<size;i++){
        printf("%d",*(arr+i));
    }
}
void square(int *arr,int size){
for(int i=0;i<size;i++){
    *(arr+i)=*(arr+i)**(arr+i);
    printf("\n%d\t",*(arr+i));
}
}

