#include<stdio.h>
int main(){
    int x=20;
    int *ptr1=&x;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;
    printf("ptr3-%p &ptr2-%p\n",ptr3,&ptr2);
    printf("*ptr3-%p ptr2-%p &ptr1-%p\n",*ptr3,ptr2,&ptr1);
    printf("**ptr3-%p *ptr2-%p ptr1-%p &x=%p\n",**ptr3,*ptr2,ptr1,&x);
     printf("***ptr3-%d **ptr2-%d *ptr1-%d x=%d\n",***ptr3,**ptr2,*ptr1,x);

}