#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of name: ");
    scanf("%d", &n);

    char *str = (char *)malloc(n * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter name: ");
    scanf(" %[^\n]", str);

    printf("Name: %s\n", str);

    free(str);   
    return 0;
}

