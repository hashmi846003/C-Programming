//reversing an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Reversed array:\n");
    for (int i=0;i<n/2;i++){
       // printf("%d ",array[i]);
        temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;  
    }   
    for (int i=0;i<n;i++){
        printf("%d ",array[i]);
    }   
    return 0;
}