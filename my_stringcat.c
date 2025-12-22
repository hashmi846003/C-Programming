#include <stdio.h>

void my_strcat(char dest[], const char src[]) {
    int i = 0, j = 0;

    
    while (dest[i] != '\0') {
        i++;
    }

    
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';  
}

int main() {
    char str1[200], str2[100];

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar();   

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    my_strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
