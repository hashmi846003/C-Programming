#include<stdio.h>
int main(){
    int number,n;
    printf("Enter the number\n");
    scanf("%d",&number);
    printf("Enter the nth bit\n");
    scanf("%d",&n);
    printf("%d\n",number|1<<n);
    printf("if bit starting from n-1\n");
    printf("%d",number|1<<(n-1));
}