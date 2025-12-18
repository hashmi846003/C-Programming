#include<stdio.h>

int main() {
    int rows, i, j, space;
    int a = 0, b = 1, c;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {

        
        for(space = 1; space <= rows - i; space++)
            printf("  ");

        
        for(j = 1; j <= i; j++) {
            printf("%d   ", a);
            c = a + b;
            a = b;
            b = c;
        }

        printf("\n");
    }

    return 0;
}
