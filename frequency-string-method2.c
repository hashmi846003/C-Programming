#include<stdio.h>
#include<string.h>
int main(){
       char str[] = "hello how are you";  
    int len = strlen(str);
    int freq[256] = {0}; 
    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }
    printf("Unique characters:\n");
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("%c ", str[i]);
        }
    }

    return 0;
}