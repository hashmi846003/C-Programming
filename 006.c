#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year");
    scanf("%d",&a);
    if(a%100==0&&a%400==0){
    printf("year %d is centurian leap year\n",a);
    
    }else if(a%4==0){
        printf("Year %d is a non-centurian leap year",a);
    }
    else{
        printf("%d is not a leap year",a);
    }
}