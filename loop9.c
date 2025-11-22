//loop 2 for rectangle
#include<stdio.h>
int main(){
    int i,j,rows,count=0;
    char ch='A';
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
       // char ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c\t",ch);
            //count++;
            ch++;
            //printf("*");
            
        }
       // ch++;
        printf("\n");
    }
}