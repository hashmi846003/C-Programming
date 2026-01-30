#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num&1)
        printf("odd\n");
    else    
        printf("even");
}