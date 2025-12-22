#include <stdio.h>

// recursive function
void negFib(int a, int b, int n) {
    if (n == 0) {
        return;
    }

    int c = a - b;   
    printf("%d ", c);

    negFib(b, c, n - 1);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    
    printf("0 1 ");

    negFib(0, 1, n);

    return 0;
}
