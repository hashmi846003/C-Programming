#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char arr[100][100];   // array of strings
    char result[100][100]; // to store unique strings
    int resCount = 0;

    printf("Enter strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Remove duplicates
    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int j = 0; j < resCount; j++) {
            if (strcmp(arr[i], result[j]) == 0) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            strcpy(result[resCount], arr[i]);
            resCount++;
        }
    }

    // Print unique strings
    printf("Unique strings:\n");
    for (int i = 0; i < resCount; i++) {
        printf("%s\n", result[i]);
    }

    return 0;
}
