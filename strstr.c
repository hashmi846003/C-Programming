#include <stdio.h>
char *my_strstr(const char *haystack, const char *needle) {
    if (*needle == '\0') {
        return (char *)haystack;  
    }

    for (int i = 0; haystack[i] != '\0'; i++) {
        int j = 0;
        
        while (needle[j] != '\0' && haystack[i + j] == needle[j]) {
            j++;
        }
        if (needle[j] == '\0') {
            return (char *)&haystack[i];  
        }
    }
    return NULL;  
}

int main() {
    char haystack[200], needle[50];

    printf("Enter the main string (haystack): ");
    scanf("%199s", haystack);

    printf("Enter the substring (needle): ");
    scanf("%49s", needle);

    char *pos = my_strstr(haystack, needle);

    if (pos != NULL) {
        printf("Substring found at position: %ld\n", pos - haystack);
        printf("Remaining string from match: %s\n", pos);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}