#include<stdio.h>
int main(){
    volatile unsigned int wait;
    char bit=0;
    while(1){
        bit=!bit;
        printf("bit is %d\r",bit);
        fflush(stdout);
        for(wait=0xFFFFFFFF;wait--;);
    }
}