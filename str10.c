#include <stdio.h>
#include <string.h>

int main() {
    int str[8] = {4,1,5,3,765,234,546,9};
    int max1 = 0,max2 = 0,max3 = 0;
    int n = 8;

    for (int i = 0; i < n; i++) {
        if (str[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = str[i];
        }
        else if (str[i] > max2 && str[i] < max1) {
            max3 = max2;
            max2 = str[i];
        }
        else if (str[i] > max3 && str[i] < max2) {
            max3 = str[i];
        }
    }

    printf("The third largest element is %d\n", max3);
    return 0;
}

