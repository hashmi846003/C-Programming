#include <stdio.h>
#include <string.h>

// Copy entire string
char *my_strcpy(char *dst, const char *src) {
    int count = 0;
    while (src[count] != '\0') {
        dst[count] = src[count];
        count++;
    }
    dst[count] = '\0';
    return dst;
}

// Copy up to n characters
char *my_strcpy_n(char *dst, const char *src, int n) {
    int count = 0;
    while (src[count] != '\0' && count < n) {
        dst[count] = src[count];
        count++;
    }
    dst[count] = '\0';
    return dst;
}

int main() {
    char str1[20];
    char str2[20];
    char str[] = "hello world";

    // Full copy
    my_strcpy(str1, str);
    printf("Full copy: %s\n", str1);

    // Copy first 5 chars
    my_strcpy_n(str2, str, 5);
    printf("Partial copy (5 chars): %s\n", str2);

    return 0;
}