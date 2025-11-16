#include<stdio.h>
#include<string.h>
int main(){
char str1[]="Hello, how are you?";
char str2[50];
int i,j,len;
len=strlen(str1);
for (i=len-1,j=0; i>=0; i--,j++){
    str2[j]=str1[i];
}
str2[j]='\0';
printf("Reversed string is: %s\n",str2);
return 0;
}