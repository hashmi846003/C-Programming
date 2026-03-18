#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char *argv[]) {
    int sum = 0;

    
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    
    for (int i = 1; i < argc; i++) {

        sum += atoi(argv[i]);
    }

    
    printf("The sum of the provided numbers is: %d\n", sum);

    return 0;
}
