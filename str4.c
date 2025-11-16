// Approach 1
#include<stdio.h>
#include<string.h>
int main(){
char str1[]="Hello, how are you?";
int i,len;
len=strlen(str1);
for(i=len-1;i>=0;i--){
    printf("%c",str1[i]);
}
return 0;
}