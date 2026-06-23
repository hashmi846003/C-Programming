#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    int prevPrime = -1; // To store the previous prime number

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            if (prevPrime != -1 && i - prevPrime == 6) {
                printf("(%d, %d)\n", prevPrime, i);
            }
            prevPrime = i;
        }
    }

    return 0;
}