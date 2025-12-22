#include <stdio.h>

void my_strcpy(char dest[], const char src[]) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';   
}

int main() {
    char src[100], dest[100];

    printf("Enter source string: ");
    scanf("%[^\n]", src);

    my_strcpy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}
