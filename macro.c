#include<stdio.h>
#define mptr int*
typedef int* tptr;
int main(){
    mptr ptr1,ptr2;
    tptr ptr3,ptr4;
    printf("%lu %lu\n",sizeof(ptr1),sizeof(ptr2));
    printf("%lu %lu",sizeof(ptr3),sizeof(ptr4));
}