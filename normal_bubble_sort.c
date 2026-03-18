#include<stdio.h>

void scan(int arr[], int size);
void print(int arr[], int size);

void asc_sort(int arr[], int size);
void desc_sort(int arr[], int size);

void sort(int arr[], int size);


int main()
{
    int size;
    printf("Enter the size\n");
    scanf("%d", &size);

    int arr[size];
    scan(arr, size);

    printf("Before sorting:\n");
    print(arr, size);

    asc_sort(arr, size);
    printf("\nAfter ascending sorting\n");
    print(arr, size);

    desc_sort(arr, size);
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


void asc_sort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])        
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void desc_sort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] < arr[j+1])        
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}