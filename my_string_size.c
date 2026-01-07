#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    scanf("%s", str);   

    while (str[count] != '\0') {  
        count++;
    }

    printf("%d\n", count);  
    return 0;
}