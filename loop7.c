// using for loop for reversing an integer
#include<stdio.h>
int main(){
    int num,rev=0,rem;
    printf("Enter the number to be reversed\n");
    scanf("%d",&num);
    for(;num;num/=10){
        rev=rev*10+num%10;
    }
    printf("Reversed number is %d\n",rev);
}