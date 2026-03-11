#include<stdio.h>
typedef union floatbits{
    float num;
    struct{
        unsigned int m :23;
        unsigned int e: 8;
        unsigned int s:1;
    }bits;
} nickname;
int main(){
    nickname var={3.2};
    printf("s----->%#x\n",var.bits.s);
    printf("e--->%#x\n",var.bits.e);
    printf("m----->%#x",var.bits.m);

}