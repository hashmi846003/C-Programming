#include<stdio.h>
#include<string.h>
int main() {
    char str1[] = "Hello, world!";
    int len = strlen(str1);
    for (int i = len-1; i >=0 ; i--) {
        printf("%c", str1[i]);
    }
}
