#include <stdio.h>


double expy(double x, int y) ;
int main() {
    double a;
    int b;
    
    scanf("%lf %d", &a, &b);  // use %lf for double input

    double result = expy(a, b);
    printf("%f\n", result);

    return 0;
}
double expy(double x, int y) {
    if (y == 0) {
        return 1.0;
    } else if (y > 0) {
        return x * expy(x, y - 1);
    } else {  // y < 0
        return 1.0 / expy(x, -y);
    }
}