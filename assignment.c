#include <stdio.h>

int main() {
    unsigned int Num;
    int N;

    
    printf("Enter the number and number of bits: ");
    scanf("%u %d", &Num, &N);

    
    if (N < 0 || N > 31) {
        printf("N should be between 0 and 31.\n");
        return 1;
    }


    unsigned int Num1 = Num << N;
    
    
    unsigned int Num2 = Num >> (31 - N + 1);  

    
    unsigned int Num3 = Num1 | Num2;

    printf("Num3: %b\n", Num3);

    return 0;
}
