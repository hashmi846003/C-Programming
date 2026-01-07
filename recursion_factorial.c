//Find the factorial of a number using recursion.
#include<stdio.h>
int fact(int n);
int main(){
    int n;
    scanf("%d",&n);
    int result=fact(n);
    printf("%d",result);
}
int fact(int n){
    if (n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}