#include<stdio.h>
int foo(int n){
    if (n<=1){
        return 1;
    }
    if (n%2==0){
        return foo(n/2);
    }
    return foo(n/2)+foo(n/2+1);

    }

int main(){
printf("%d\n",foo(15));
}