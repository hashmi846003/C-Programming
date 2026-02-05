#include <stdio.h>

int main() {
   unsigned int number;
   int count = 0, i = 0; 
    scanf("%X",&number);

    do {
        if (number & (1 << i)) {
            count++;
        }
        i++; 
    } while (i < 32); 

    printf("Number of set bits: %d\n", count); 
    return 0;
}
