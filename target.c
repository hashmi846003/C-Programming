#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char target;
    int i;

    
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    fgets(str,sizeof(str),stdin); 
    str[strcspn(str, "\n")] = '\0';
    
    printf("Enter a character: ");
    scanf("%c", &target);

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            printf("%s", &str[i]);  // print substring
            return 0;
        }
    }

    
    printf("Character not found");

    return 0;
}
