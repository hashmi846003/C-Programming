#include<stdio.h>
struct nibble{
    unsigned int low : 4;
    unsigned int high : 4;
};
int main(){
    unsigned int hex;
    struct nibble n;
    scanf("%x",&hex);
    n.low=hex & 0x0F;
    n.high=(hex >> 4) & 0x0F;
    unsigned int swapped=(n.low << 4)| n.high;
    printf("After swap nibble : %X",swapped);
    return 0;
}