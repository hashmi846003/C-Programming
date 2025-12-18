/*Description : 

You have to read a number from user and find the square and cube of a number.

Sample Execution : */
#include<stdio.h>
void square_and_cube(int*,int*,int*);
int main(){
    int n,square,cube;
    scanf("%d",&n);
    printf("Square and cube is:");
    square_and_cube(&n, &square, &cube);
}
void square_and_cube(int *ptr,int *square,int *cube){
    *square=(*ptr)*(*ptr);
    *cube=(*ptr)*(*ptr)*(*ptr);
    printf("%d %d",*square,*cube);
}