#include<stdio.h>
#include<string.h>
int main(){
char str1[]="Hello, how are you?";
int *i,*j,len;
len=strlen(str1);
i=(int*)&str1[0];
j=(int*)&str1[len-1];
while(i<j){
    char temp=*(char*)i;
    *(char*)i=*(char*)j;
    *(char*)j=temp;
    i=(int*)((char*)i+1);
    j=(int*)((char*)j-1);
}
printf("Reversed string is: %s\n",str1);
return 0;
}