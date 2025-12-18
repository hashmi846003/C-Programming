#include<stdio.h>
void scan(int*,int);
void print(int*,int);
int main(){
    int size;
    printf("Enter the size of array\n");
    scanf ("%d",&size);
    int arr[size];
    scan(arr,size);
    print(arr,size);
}
void scan(int *ptr,int size)
{
    int i;
    for(i=0;i<size;i++){
        scanf("%d",(ptr+i));
    }
}
void print(int *ptr,int size){
for(int i=0;i<size;i++){
    printf("%d\t",*(ptr+i));
}
printf("\n");
}