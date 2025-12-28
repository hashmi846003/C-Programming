//Count frequency of each character
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0';  

    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    
    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}