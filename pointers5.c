#include<stdio.h>
int main(){
    int x=0x12345678;
    int *ptr1=&x;
    char *ptr2=(char *)&x;
    short *ptr3=(short *)&x;
    printf("%x\n",*ptr1);
    printf("%hhx\n",*ptr2);
    printf("%hx\n",*ptr3);
}