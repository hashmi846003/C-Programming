//Copy one array to another array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int array1[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    int array2[n];
    for (int i=0;i<n;i++){
        array2[i]=array1[i];
    }
    printf("Copied array elements:\n");
    for (int i=0;i<n;i++){
        printf("%d ",array2[i]);
    }
    return 0;
}