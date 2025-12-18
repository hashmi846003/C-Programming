<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "hello world";
    int len = strlen(str);
    char *wordStart = str;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(wordStart, &str[i - 1]);
            wordStart = &str[i + 1];
        }
    }

    printf("%s\n", str);
    return 0;
}

=======
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
>>>>>>> master
