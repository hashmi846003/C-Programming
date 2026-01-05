#include <stdio.h>

char *my_strncat(char *dst, const char *src, size_t n) {
    char *ret = dst;
    while (*dst) dst++;

    while (n-- && *src) {
        *dst++ = *src++;
    }
    *dst = '\0';

    return ret;
}

int main() {
    char buffer[50] = "Hello";
    my_strncat(buffer, " Universe", 3);  
    printf("Result: %s\n", buffer);      
    return 0;
}