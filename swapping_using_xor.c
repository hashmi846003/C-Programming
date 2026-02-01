#include<stdio.h>
int main(){
    printf("Enter num1 and num2\n");
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("After swapping num1 and num2 are %d and %d",num1,num2);
}