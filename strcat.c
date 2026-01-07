#include <stdio.h>


char *my_strcat(char *dst, const char *src) {
    char *ret = dst;
    while (*dst) dst++;          
    while ((*dst++ = *src++));   
    return ret;
}

int main() {
    char buffer[50] = "Hello";
    my_strcat(buffer, " World");
    printf("Result: %s\n", buffer);  
    return 0;
}