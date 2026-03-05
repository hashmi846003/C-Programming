#include<stdio.h>
int addition (int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int main(void){
    int n1=10,n2=20;
    int n3=addition(n1,n2);
    printf("%d\n",n3);
    return 0;
}