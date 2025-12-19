#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char target;
    int i;

    // Read the string
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    getchar();   // clear newline

    // Read the character
    printf("Enter a character: ");
    scanf("%c", &target);

    // Search for character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            printf("%s", &str[i]);  // print substring
            return 0;
        }
    }

    // If character not found
    printf("Character not found");

    return 0;
}
