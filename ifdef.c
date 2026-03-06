#include<stdio.h>
#define METHOD

int main(){
    #undef METHOD
    #ifdef METHOD
    printf("Hello world\n");
    #else
    printf("Hello world 2");
    #endif
}