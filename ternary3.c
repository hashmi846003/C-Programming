#include<stdio.h>
int main(){
    int x=0,y=1,z=1;
    int a=x?++y:!x?z++:y++;
    printf("x=%d y=%d z=%d a=%d\n",x,y,z,a);
    return 0;

}