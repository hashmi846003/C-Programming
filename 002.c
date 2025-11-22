#include<stdio.h>
int main(){
    char ch;
    int a;
    float f;
    double d;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter an integer: ");
    scanf("%d", &a);                       
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a double: ");
    scanf("%lf", &d);
    printf("You entered:\n");
    printf("Character: %c\n", ch);
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", f);
    printf("Double: %.2lf\n", d);
    return 0;
}