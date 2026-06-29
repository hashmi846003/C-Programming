#include <stdio.h>
int main() {
int n, rev = 0, bin[32], i = 0;
printf("Enter number: ");
scanf("%d", &n);
int temp = n;
while(temp > 0) {
bin[i++] = temp % 2;
temp /= 2;
}
printf("Binary: ");
for(int j = i-1; j >= 0; j--)
printf("%d", bin[j]);
printf("\nReverse: ");
for(int j = 0; j < i; j++)
printf("%d", bin[j]);
for(int j = 0; j < i; j++)
rev = rev * 2 + bin[j];
printf("\nReverse Binary Decimal = %d\n", rev);
return 0;
}