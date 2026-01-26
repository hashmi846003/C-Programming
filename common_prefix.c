#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char strs[][20], int strsSize) {
    static char prefix[20];
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < strlen(prefix) && j < strlen(strs[i]) && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0'; 
    }
    return prefix;
}

int main() {
    char strs[3][20] = {"flower", "flow", "flight"};
    int size = 3;
    printf("Longest Common Prefix: %s\n", longestCommonPrefix(strs, size));
    return 0;
}