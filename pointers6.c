#include<stdio.h>
int main(){
    int x=0x12345687;
    char *ptr=(char *)&x;
    if(*ptr=(char)0x87){
        printf("Little Endian\n");
    }else{
        printf("Big Endian");
    }
}