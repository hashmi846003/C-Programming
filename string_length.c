#include <stdio.h>

int stringLength(char str[], int i) {
    if (str[i] == '\0')
        return i;
    return stringLength(str, i + 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Length of the string = %d\n", stringLength(str, 0));

    return 0;
}
