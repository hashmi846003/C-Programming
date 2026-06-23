#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%b",n);
    //checking the given number is pallindrome or not in binary format
    unsigned int rev = 0, temp = n;

    
    while (temp > 0) {
        rev = (rev << 1) | (temp & 1);
        temp >>= 1;
    }

    // Compare original with reversed
    return n == rev;
}