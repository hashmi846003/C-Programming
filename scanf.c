#include<stdio.h>
int main(){
    int a,b;
    char ch;
    int ret=scanf("%d %c %d \n",&ch,&a,&b);
    printf("%d %c %d\n",a,ch,b);
    printf("scanf returned--->%d",ret);
}