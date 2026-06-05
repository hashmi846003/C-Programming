#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9};
    
    int m = sizeof a / sizeof a[0];   
    int n = sizeof b / sizeof b[0];   
    int o = m + n;                   
    
    int c[o];                         
    
    int i, j;
    
    for (i = 0; i < m; i++) {
        c[i] = a[i];
    }
    
    for (j = 0; j < n; j++) {
        c[i + j] = b[j];
    }
    
    printf("Merged array: ");
    for (i = 0; i < o; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}
