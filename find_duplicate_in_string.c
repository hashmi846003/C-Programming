#include <stdio.h>

void findDuplicateChars(char str[]) {
    int freq[256] = {0};

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    // Print duplicates
    printf("Duplicate characters: ");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1)
            printf("%c ", i);
    }
}

int main() {
    char str[] = "programming";
    findDuplicateChars(str);
    return 0;
}
