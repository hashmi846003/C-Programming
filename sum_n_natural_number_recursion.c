#include<stdio.h>
int f(int n){
    if (n < 0) {
        return 0;  
    }else if (n==0){
        return 0;
    }else{
       return n+f(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=f(n);
    printf("Sum is %d",sum);
}