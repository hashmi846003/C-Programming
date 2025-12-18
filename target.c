#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char target;
    int i, count = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", str);   // read full line including spaces

    getchar(); // consume newline left in buffer

    printf("Enter a character: ");
    scanf("%c", &target);

    // Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    if (count > 0) {
        printf("Character '%c' is found %d time(s) in the string.\n", target, count);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}

