#include<stdio.h>
void sum_pro(int,int,int*,int*);
int main(){
    int num1,num2,sum,pro;
    scanf("%d %d",&num1,&num2);
    sum_pro(num1,num2,&sum,&pro);
    printf("Sum is %d, and product is %d", sum,pro);
}
void sum_pro(int n1,int n2,int *ptr1,int *ptr2){
    *ptr1=n1+n2;
    *ptr2=n1*n2;
}
/*another method
*ptr1=*ptr1+*ptr2;
*ptr2=(*ptr1-*ptr2)*(*ptr2)*/