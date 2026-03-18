#include<stdio.h>
typedef int (  *nick_name)(int,int);
int fun(int,int);
int main(){
    nick_name ptr=fun;
    printf("%d\n",ptr(10,5));
}
int fun(int a,int b){
    return a+b;
}