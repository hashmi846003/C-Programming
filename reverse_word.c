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
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0'; 

    char *wordStart = NULL;
    for (int i = 0; i <= len; i++) {
        if (wordStart == NULL && str[i] != ' ' && str[i] != '\0') {
            wordStart = &str[i];
        }
        if ((str[i] == ' ' || str[i] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &str[i-1]);
            wordStart = NULL;
        }
    }

    printf("Reversed words: %s\n", str);
    return 0;
}