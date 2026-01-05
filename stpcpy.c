#include <stdio.h>


char *stpcpy(char *restrict dst, const char *restrict src)
{
    while ((*dst = *src) != '\0') {
        dst++;
        src++;
    }
    return dst;  
}

int main()
{
    char buffer[200];   
    char input[100];    

    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // remove newline if present
        size_t i = 0;
        while (input[i] != '\0') {
            if (input[i] == '\n') {
                input[i] = '\0';
                break;
            }
            i++;
        }

        char *end = stpcpy(buffer, input);   
        stpcpy(end, " (copied!)");           

        printf("Result: %s\n", buffer);
    }

    return 0;
}