#include <stdio.h>
#include <stdlib.h>

void scan(int arr[], int size);
void print(int arr[], int size);

int asc_sort(const void* a, const void* b);

int main()
{
    int size;
    printf("Enter the size\n");
    scanf("%d", &size);

    int arr[size];
    scan(arr, size);

    printf("Before sorting:\n");
    print(arr, size);

    qsort(arr, size, sizeof(int), asc_sort);
    printf("After ascending sort:\n");
    print(arr, size);

    return 0;
}

void scan(int arr[], int size)
{
    printf("Enter the elements\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print(int arr[], int size)
{
    printf("The elements are:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int asc_sort(const void* a, const void* b)
{
    int x = *(const int*)a;
    int y = *(const int*)b;
    return x - y;  // Negative if x < y, zero if equal, positive if x > y
}