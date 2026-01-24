#include <stdio.h>
#include<string.h>


void reverse_recursive(char str[], int ind, int len);

int main()
{
    char str[30];
   // int i=0;
    //int j=strlen(str)-1;
    
 //   printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_recursive(str, 0, strlen(str)-1);
    
    printf("Reversed string is %s\n", str);
}
void reverse_recursive(char str[], int ind, int len)
{
    char temp;
    if(ind >= len)   
        return;
    temp = str[ind];
    str[ind] = str[len];
    str[len] = temp;
    
    reverse_recursive(str, ind + 1, len - 1);
}

