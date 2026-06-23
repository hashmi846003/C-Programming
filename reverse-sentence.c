#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);   // reads full sentence including spaces

    int len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0'; // remove newline

    char *wordStart = NULL;
    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (wordStart == NULL) wordStart = &str[i];
        } else {
            if (wordStart != NULL) {
                reverseWord(wordStart, &str[i-1]);
                wordStart = NULL;
            }
        }
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
