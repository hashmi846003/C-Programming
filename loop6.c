//reversing a given number using while loop
#include<stdio.h>
int main(){
    int i,num,rev=0;
    scanf("%d",&num);
    while(num){
        rev=rev*10+num%10;
        num=num/10;
       // printf("inside the loop %d\n",i);
        i++;
    }
    printf("revers %d\n",rev);
}