#include<stdio.h>
int main(){
    int a=0x03;
    int x=1<<0;
    int y=a&x;
    printf("%x",y);
}