#include <stdio.h>

void scan(int*, int);
void printPrime(int*, int);

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    scan(arr, size);
    printPrime(arr, size);

    return 0;
}

void scan(int *ptr, int size)
{
    for(int i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }
}

void printPrime(int *ptr, int size)
{
    int i, j, isPrime;

    for(i = 0; i < size; i++)
    {
//        if(*(ptr+i) <= 1)
  //          continue;

        isPrime = 1;

        for(j = 2; j * j <= *(ptr+i); j++)
        {
            if(*(ptr+i) % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            printf("%d ", *(ptr+i));
        }
    }
    printf("\n");
}
