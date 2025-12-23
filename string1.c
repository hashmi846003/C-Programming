#include<stdio.h>
#include<string.h>
int main(){
    char string[]={"hashmi"};
   int len=strlen(string);
   for(int i=0;i<len;i++){
    if(string[i]=='\0')
    printf("%s",string);
    break;
   }
}