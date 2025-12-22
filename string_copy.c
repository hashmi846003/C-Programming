#include <stdio.h>

void copyString(char s1[], char s2[], int i) {
    if (s1[i] == '\0') {
        s2[i] = '\0';
        return;
    }
    s2[i] = s1[i];
    copyString(s1, s2, i + 1);
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str1);

    copyString(str1, str2, 0);

    printf("Copied string: %s\n", str2);

    return 0;
}
