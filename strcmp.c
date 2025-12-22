#include <stdio.h>
#include <string.h>

// Prototype
int my_strncmp(const char *ptr1, const char *ptr2);

int main() {
    char str1[100];
    char str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int result = my_strncmp(str1, str2);

    if (result == 0) {
        printf("Both are equal\n");
    } else {
        printf("Not equal\n");
    }

    return 0;
}

int my_strncmp(const char *ptr1, const char *ptr2) {
    while (*ptr1 && *ptr2) {
        if (*ptr1 != *ptr2) {
            return *ptr1 - *ptr2;  
        }
        ptr1++;
        ptr2++;
    }
    return *ptr1 - *ptr2;  
}