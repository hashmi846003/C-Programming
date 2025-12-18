#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int num = 1;  // continuous numbers

    for (int i = 1; i <= rows; i++) {

        // print spaces
        for (int s = 1; s <= rows - i; s++) {
            printf(" ");
        }

        // print continuous numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
