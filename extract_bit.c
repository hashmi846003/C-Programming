#include <stdio.h>

int getBits(int num, int pos, int n) {
    
    return (num >> pos) & ((1 << n) - 1);
}

int main() {
    int num = 0xABCD;   
    int pos = 4;        
    int n   = 5;        

    int result = getBits(num, pos, n);

    printf("Extracted bits: 0x%X\n", result);
    return 0;
}