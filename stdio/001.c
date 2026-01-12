#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    char str[]="EOF received";
    while((ch=getchar())!=EOF){
        putchar(toupper(ch));
    }
    puts(str);
}