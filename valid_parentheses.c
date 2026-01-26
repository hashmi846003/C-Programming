#include <stdio.h>
#include <stdbool.h>

bool isValid(char *s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }
        
        else if (c == ')' || c == '}' || c == ']') {

            
            if (top == -1)
                return false;

            char last = stack[top--];


            if ((c == ')' && last != '(') ||
                (c == '}' && last != '{') ||
                (c == ']' && last != '[')) {
                return false;
            }
        }
        
        else {
            return false;
        }
    }


    return top == -1;
}

int main() {
    char s[10000];

    printf("Enter parentheses string: ");
    scanf("%9999s", s);   

    if (isValid(s))
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}
