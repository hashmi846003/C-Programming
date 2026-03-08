#include<stdio.h>
#include <string.h>
char *my_strcpy(char *restrict dst, const char *restrict src){
char *ptr = dst;  

    while (*src != '\0') {   
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0'; 

    return ptr;   
}

int main() {
    char src[] = "Hello, World!";
    char dst[50];  

    my_strcpy(dst, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);

    return 0;
}

