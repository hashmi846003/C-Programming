//Find the sum of first n natural numbers using recursion.
#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    //sum( n);
    int result = sum(n);   
    printf("Sum of first %d natural numbers = %d\n", n, result);


}
int sum(int n){
    if (n<0){
        return 0;
    }else{
        return n+sum(n-1);
    }
}