#include<stdio.h>
#define CLEAR(num,n) (num&(~((1<<n)-1)))
int main(){
    int num,n;
    scanf("%x %d",num,n);
    printf("%#x\n",CLEAR(num,n));
}