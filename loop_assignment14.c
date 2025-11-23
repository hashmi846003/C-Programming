//printing character in descending order triangle
#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
   // char ch='A';
    for (int i = rows; i >= 1; i--) {

        
      

        //char ch='A';
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A'+j);
           // ch++;
        }
        //ch++;
        printf("\n");
    }

    return 0;
}
