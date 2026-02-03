#include <stdio.h>
#include <ctype.h>  

int main() {
    int ch;
    int line = 0, words = 0, character = 0;
    int in_word = 0;

    while ((ch = getchar()) != EOF) {
        character++;  

        if (ch == '\n') {
            line++;   
        }

        if (isspace(ch)) {
            in_word = 0;  
        } else {
            if (in_word == 0) {
                words++;   
                in_word = 1;
            }
        }
    }

    printf("Lines: %d\n", line);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", character);

    return 0;
}