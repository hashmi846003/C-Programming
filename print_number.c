#include <stdio.h>

// Function prototype
void number(int n);

int main() {
    int n;
    printf("Enter the range:\n");
    scanf("%d", &n);
    number(n);   
    return 0;
}

void number(int n) {
    if (n < 0) {
        return;   
    } else {
        //printf("%d ", n);
        number(n - 1);   
        printf("%d ", n);
    }
}