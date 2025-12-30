#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);

    
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    if (n > 0)
    {
        printf("Invalid input");
        return 0;
    }

    
    int limit = abs(n);
    int i = 0;
    int first = 1;

    while (1)
    {
        int val = fib(i);

        
        if (i % 2 != 0)
            val = -val;

        if (abs(val) > limit)
            break;

        if (!first)
            printf(", ");
        printf("%d", val);

        first = 0;
        i++;
    }

    return 0;
}