#include<stdio.h>
int main(){
    int x=10;
    char ch;
    double d;
    float f;
    printf("%lu\n",sizeof(&x));
    printf("%lu\n",sizeof(&ch));
    printf("%lu\n",sizeof(&d));
    printf("%lu\n",sizeof(&f));
}