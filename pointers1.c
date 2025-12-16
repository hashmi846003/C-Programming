<<<<<<< HEAD
/*
WAP to find the square of array's elements using a function.

Instructions:

Read the size and array's elements from the user

Write a function called display to print the array's elements

Write a function called square to square the array's elements and update the same array.

Donot use another additional array.

Eg:

Enter the array size : 6

Enter the array elements : 2 3 5 4 1 7

Array elements before squaring : 2 3 5 4 1 7  //print using display function

Array elements after squaring ; 4 9 25 16 1 49 // print using display function
*/
#include <stdio.h>

void display(int *arr, int size);
void square(int *arr, int size);

int main() {
    int size;
    printf("Enter the array size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++) {
        scanf("%d", (arr + i));   
    }

    printf("Array elements before squaring : ");
    display(arr, size);

    square(arr, size);

    printf("\nArray elements after squaring : ");
    display(arr, size);

    return 0;
}

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));   
    }
}

void square(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i));  
    }
}
=======
#include<stdio.h>
int main(){
    int x=10;
    char ch;
    double d;
    float f;
    printf("%lu\n",sizeof(&x));
    printf("%lu\n",sizeof(&ch));
    printf("%lu\n",sizeof(&d));
    printf("%lu\n",sizeof(&f));
}
>>>>>>> 83e84f5bba08c706b4861930fb74e4967f17692a
