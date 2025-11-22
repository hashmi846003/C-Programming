// using for loop for reversing an integer
#include<stdio.h>
int main(){
    int num,rev=0,rem,copy,count=0;
    printf("Enter the number to be reversed\n");
    scanf("%d",&num);
    copy = num;
   // if (num==0) {
   //     count=1;
    //}
    for(;num;num/=10){
        rev=rev*10+num%10;
        //count++;
    }
    count++;
    printf("Number of digits: %d\n", count);
    printf("Reversed number is %d\n",rev);
    printf("Original number was %d\n",copy);
    if (rev == copy){
        printf("The number is a palindrome\n");
    } else {
        printf("The number is not a palindrome\n");
    }
}