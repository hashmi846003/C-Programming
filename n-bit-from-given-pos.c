#include <stdio.h>
int main()
{
int num, pos, n;
printf("Enter number: ");
scanf("%d", &num);
printf("Enter position and number of bits: ");
scanf("%d %d", &pos, &n);
int mask = ((1 << n) - 1) << (pos - n + 1);
int bits = (num & mask) >> (pos - n + 1);
printf("Extracted bits = %b\n", bits);
return 0;
}