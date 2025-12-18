#include<stdio.h>
int func();
int main(){
    int num=func();
    printf("%d\n",num);
    num=func();
    printf("%d\n",num);
     num=func();
    printf("%d\n",num);

}
int func(){
    //volatile int ret=10;
     static  int ret=10;
    ret=ret+2;
    return ret;
}