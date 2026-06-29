#include <stdio.h>
#include <stdbool.h>

bool hasAlternatingBits(int n) {
    int x = n ^ (n >> 1);   // XOR with shifted version
    return (x & (x + 1)) == 0;  // check if x is all 1s
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (hasAlternatingBits(num)) {
        printf("%d → Yes, it has alternating bits.\n", num);
    } else {
        printf("%d → No, it does not have alternating bits.\n", num);
    }

    return 0;
}
