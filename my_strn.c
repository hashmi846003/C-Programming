#include <stdio.h>

void my_strncpy(char dest[], const char src[], int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    while (i < n) {
        dest[i] = '\0';
        i++;
    }
}

int main() {
    char src[100], dest[100];
    int n;

    printf("Enter source string: ");
    scanf("%[^\n]", src);

    printf("Enter number of characters to copy: ");
    scanf("%d", &n);

    my_strncpy(dest, src, n);

    printf("Copied string: %s\n", dest);

    return 0;
}
