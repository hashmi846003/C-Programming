#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("Output: ");
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (str[i] == ' ') {
            printf(" ");
        } else if (count == 1) {
            printf("%c", str[i]);
        }
    }

    return 0;
}
