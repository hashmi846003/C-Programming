#include <stdio.h>

char *my_strncat(char *dst, const char *src, size_t n) {
    int i = 0, j = 0;

    
    while (dst[i] != '\0') {
        i++;
    }

    
    while (j < n && src[j] != '\0') {
        dst[i] = src[j];
        i++;
        j++;
    }

    
    dst[i] = '\0';

    return dst;
}

int main() {
    char dst[200], src[100];
    int n;

    printf("Enter destination string: ");
    scanf("%199s", dst);

    printf("Enter source string: ");
    scanf("%99s", src);

    printf("Enter n (number of characters to append): ");
    scanf("%d", &n);

    my_strncat(dst, src, n);

    printf("Result: %s\n", dst);

    return 0;
}