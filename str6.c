// C program to reverse a string using recursion
#include<stdio.h>
#include<string.h>
void reverse_string(char str[],int start, int end){
    if (start>=end){
        return;
    }
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    reverse_string(str,start+1,end-1);          
}
int main(){
    char str1[]="Hello, how are you?";
    int len=strlen(str1);
    reverse_string(str1,0,len-1);
    printf("Reversed string is: %s\n",str1);
    return 0;
}