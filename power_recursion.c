#include <stdio.h>

double power(int m, int n) {
    if (n == 0) {
        return 1;  
    } else if (n > 0) {
        return m * power(m, n - 1);  
    } else {
        return 1.0 / power(m, -n);   
    }
}

int main() {
    int m, n;
    printf("Enter base (m): ");
    scanf("%d", &m);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    printf("%d^%d = %lf\n", m, n, power(m, n));
    return 0;
}