#include<stdio.h>
int f(int n){
   // if (n < 0) {
     //   return 0;  
     if (n==0){
        return 1;
    }else{
       return n*f(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int product=f(n);
    printf("product is %d",product);
}