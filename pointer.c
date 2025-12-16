#include<stdio.h>
int main(){
    int arr[5]={12,13,14,15,16};
    int *ptr1=&arr[1];
    int *ptr2=&arr[3];
    printf("%ld\n",ptr2-ptr1);
    printf("%d\n",*ptr2-*ptr1);
}