#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=30;
    int *arr[]={&a,&b,&c};
    //printf("*(*arr[0]+0)+0-%d (*arr[0]+0)-%d arr[0][0] ",)
      printf("*arr[0] = %d (value of a)\n", *arr[0]);      // Output: 10
    printf("*arr[1] = %d (value of b)\n", *arr[1]);      // Output: 20
    printf("*arr[2] = %d (value of c)\n", *arr[2]);      // Output: 30

    // Using pointer arithmetic, demonstrating the array indexing concept
    printf("Using pointer arithmetic:\n");
    printf("*(*arr + 0) = %d (value of a)\n", *(*arr + 0)); // Output: 10
    printf("*(*arr + 1) = %d (value of b)\n", *(*arr + 1)); // Output: 20
    printf("*(*arr + 2) = %d (value of c)\n", *(*arr + 2)); // Output: 30

    
    printf("Using array subscripting:\n");
    printf("arr[0][0] = %d (value of a)\n", arr[0][0]); // Output: 10 - Wrong context
    printf("arr[1][0] = %d (value of b)\n", arr[1][0]); 
    printf("arr[2][0] = %d (value of c)\n", arr[2][0]); 

    return 0;
}