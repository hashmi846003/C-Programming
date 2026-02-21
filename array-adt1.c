#include<stdio.h>
#include<stdlib.h>
struct array{
    int *A;
    int size;
    int length;
};
int main(){
    struct array Arr;
    int n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&Arr.size);
    Arr.A=(int*)malloc(Arr.size*sizeof(int));
    Arr.length=0;
    printf("Enter the number of numbers\n");
    scanf("%d",&n);
    printf("enter all elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&Arr.A[i]);
    }
    printf("Entered elements are\n");
    for(i=0;i<n;i++){
        printf("%d",Arr.A[i]);
    }

}