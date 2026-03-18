#include<stdio.h>
void sum_and_prod(int,int,int *,int *);
int main(){
    int n1,n2;
    printf("Enter the two numbers\n");
    scanf("%d %d",&n1,&n2);
    int *p1=&n1;
    int *p2=&n2;
    sum_and_prod( n1,n2,*p1,*p2);
}
void sum_and_prod(int n1,int n2,int *p1,int *p2){
     *p1=n1+n2;
     *p2=n1*n2;
    printf("sum and product is %d and %d", *p1,*p2);
}
