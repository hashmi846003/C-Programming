#include<stdio.h>
int main(){
    int number,n;
    printf("Enter the number\n");
    scanf("%d",&number);
    printf("Enter the bits\n");
    scanf("%d",&n);
    printf("%d",number|1<<n-1);
}