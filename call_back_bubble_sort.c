#include<stdio.h>

void scan(int arr[], int size);
void print(int arr[], int size);

int asc_sort(int a, int b);
int desc_sort(int a, int b);

void sort(int arr[], int size, int(*fp)(int,int));


int main()
{
    int size;
    printf("Enter the size\n");
    scanf("%d", &size);

    int arr[size];
    scan(arr, size);

    printf("Before sorting:\n");
    print(arr, size);

    sort(arr, size, asc_sort);
    printf("\nAfter ascending sorting\n");
    print(arr, size);

    sort(arr, size, desc_sort);
    printf("\nAfter descending sorting\n");
    print(arr, size);
}

void scan(int arr[], int size)
{
    printf("Enter the elements\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print(int arr[], int size)
{
    printf("The elements are\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int asc_sort(int a, int b)
{
    return a>b;
}

int desc_sort(int a, int b)
{
    return a<b;
}

void sort(int arr[], int size, int(*fp)(int,int))
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(fp(arr[j], arr[j+1]))            //Using call back  (Because, this condition check differentiates ascending or descending)
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}