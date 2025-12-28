//Check if a string is a palindrome
#include <stdio.h>
#include <string.h>

int main() {
    int size;
    printf("Enter the size of string\n");
    scanf("%d", &size);
    getchar();  

    char str[size];
    printf("Enter the string\n");
    scanf(" %[^\n]", str);  

    int len = strlen(str);
    int isPalindrome = 1;  

    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;  
            break;
        }
    }

    if (isPalindrome)
        printf("Entered string is palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}