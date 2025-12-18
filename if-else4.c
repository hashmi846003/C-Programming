#include <stdio.h>

int main() {
    float weight;

    printf("Enter your weight: ");
    scanf("%f", &weight);

    if (weight < 0) {
        printf("Are you really human?\n");
    }
    else if (weight >= 1 && weight <= 10) {
        printf("Paper weight :(\n");
    }
    else if (weight >= 50 && weight <= 100) {
        printf("Normal weight\n");
    }
    else if (weight > 250) {
        printf("Weight machine broken\n");
    }
    else {
        printf("Weight is unusual\n");
    }

    return 0;
}
