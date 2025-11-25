#include<stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(j = 2; j <= n; j++)
    {
        count = 0;

        for(i = 2; i * i <= j; i++)
        {
            if(j % i == 0)
            {
                count = 1;
                break;
            }
        }

        if(count == 0)   
        {
            printf("%d ", j);
        }
    }

    return 0;
}
