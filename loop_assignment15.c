#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");   
    scanf("%d", &rows); 

    int k = 1;  

    for (int i = rows; i >= 1; i--) {  

        
        for (int s = 1; s <= rows - i; s++) {
            printf("  "); 
        }

        
        for (int j = 0; j < i; j++) {
            printf("%d ", k);
            k++;   
        }
        
        printf("\n"); 
    }

    return 0;
}