#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    char array[n];
    for (int i=0;i<n;i++){
        scanf(" %c",&array[i]);
    }
    for (int i=0;i<n;i++){
       if('A'<=array[i] && array[i]<='Z'){
           array[i]=array[i]+32;
       }
       else if('a'<=array[i] && array[i]<='z'){
           array[i]=array[i]-32;
       }
       printf("%c ",array[i]);
    }
}