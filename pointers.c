#include<stdio.h>
int main(){
    void *ptr;
    int x=0x12345678;
    ptr=&x;
    printf("%#hhx\n",*(char*)ptr);
    printf("%#hx\n",*(char*)(ptr+2));
    printf("%x",*(int*)(ptr));
    
}