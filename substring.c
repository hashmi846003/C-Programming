#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[200], subStr[100];

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);   // read full line including spaces

    // remove newline if present
    mainStr[strcspn(mainStr, "\n")] = '\0';

    printf("Enter the sub string: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0';

    // find substring
    char *pos = strstr(mainStr, subStr);

    if (pos != NULL) {
        printf("%s\n", pos);
    } else {
        printf("Substring not found in the main string.\n");
    }

    return 0;
}

