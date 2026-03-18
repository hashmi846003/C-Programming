#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;

    
    str = (char *)malloc(15 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string: ");
    
    fgets(str, 15, stdin);

    printf("You entered: %s\n", str);

    
    free(str);

    return 0;
}

