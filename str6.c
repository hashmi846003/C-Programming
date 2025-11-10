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
    char str[] = "hello world";
    int len = strlen(str);
    char *wordStart = str;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(wordStart, &str[i - 1]);
            wordStart = &str[i + 1];
        }
    }

    printf("%s\n", str);
    return 0;
}

