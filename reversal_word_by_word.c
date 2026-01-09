#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    // remove newline if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    reverse(str);

    printf(" Reversed string: %s", str);
    return 0;
}

void reverse(char str[]) {
    int i, start = 0;
    int len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}
