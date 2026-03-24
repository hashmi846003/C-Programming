#include<stdio.h>
int main(){
    int x=0x55;
    int y=x|(1<<5);
    printf("%x",y);

}