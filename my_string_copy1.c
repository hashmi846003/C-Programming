//WAP to copy a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int i=0;
    printf("Enter the string \n");
    scanf(" %[^\n]", str1);
    getchar();
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("%s",str2);
}