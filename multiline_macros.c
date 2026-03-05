#include<stdio.h>
#define SWAP(x,y,type)   \
{                 \
type temp=x;   \
x= y;           \
y= temp;         \
}               \

int main(){
    int n1=10;
    int n2=20;
    printf("Beafore swapping n1--%d n2---%d",n1,n2);
    SWAP(n1,n2,int);
    printf("After macro call  n1--->%d   n2--->%d",n1,n2);
    int a1=40;
    int a2=50;
    printf("Beafore swapping n1--%d n2---%d",a1,a2);
    SWAP(a1,a2,int);
    printf("After macro call  n1--->%d   n2--->%d",a1,a2);

}

