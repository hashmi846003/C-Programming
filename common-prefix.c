#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char strs[][20], int strsSize) {
    static char prefix[20];   // buffer for result
    int index = 0;

    if (strsSize == 0) return "";

    // Loop through characters of the first string
    for (int j = 0; j < strlen(strs[0]); j++) {
        char c = strs[0][j];  // current character to check

        // Compare with all other strings
        for (int i = 1; i < strsSize; i++) {
            if (j >= strlen(strs[i]) || strs[i][j] != c) {
                prefix[index] = '\0'; // terminate string
                return prefix;        // mismatch found
            }
        }
        prefix[index++] = c; // add to prefix if all matched
    }

    prefix[index] = '\0'; // terminate string
    return prefix;
}

int main() {
    char strs[3][20] = {"flower", "flow", "flight"};
    int size = 3;
    printf("Longest Common Prefix: %s\n", longestCommonPrefix(strs, size));
    return 0;
}
