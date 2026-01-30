#include <stdio.h>

int main() {
    int value;
    printf("Enter a number: ");
    scanf("%d", &value);

    int rem, temp = 0;

    while (value > 0) {
        rem = value % 10;          
        temp = temp * 10 + rem;    
        value = value / 10;        
    }

    printf("Reversed number: %d\n", temp);

    return 0;
}