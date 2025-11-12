#include<stdio.h>
int main(){
    char ch;
    int a;
    float f;
    double d;
    printf("Size of char: %zu byte(s)\n", sizeof(ch));
    printf("Size of int: %zu byte(s)\n", sizeof(a));
    printf("Size of float: %zu byte(s)\n", sizeof(f));
    printf("Size of double: %zu byte(s)\n", sizeof(d));
    printf("%d\n", a);
    printf("%f\n", f);
    printf("%lf\n", d);
    printf("%c\n", ch);        

    return 0;
}