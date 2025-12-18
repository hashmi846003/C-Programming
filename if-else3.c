#include <stdio.h>

int main() {
    float percentage;

    printf("Enter attendance percentage: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Status not found: Invalid number.\n");
    }
    else if (percentage > 85) {
        printf("Status: Good\n");
    }
    else if (percentage >= 50 && percentage <= 85) {
        printf("Status: Not enough\n");
    }
    else if (percentage < 50) {
        printf("Status: Don't bunk\n");
    }

    return 0;
}
