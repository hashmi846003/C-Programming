<<<<<<< HEAD
/*WAP to find the sum and product of two numbers

Eg:

Enter the two numbers : 10 20

Output : sum = 30, product = 200*/
#include<stdio.h>
void sum_and_product(int*,int*);
int main(){
    int n1,n2;
    printf("Enter the two numbers:");
    scanf("%d %d",&n1,&n2);
    printf("Sum and products of two numbers are:");
    sum_and_product( &n1,&n2);
}
void sum_and_product(int *ptr1,int *ptr2){
    *ptr1=*ptr1+*ptr2;
    *ptr2=(*ptr1-*ptr2)*(*ptr2);
     printf("sum = %d, product = %d\n", *ptr1, *ptr2);
}


=======
#include<stdio.h>
int main(){
    int *ptr;
    char *ptr1;
    float *ptr2;
    double *ptr3;
    printf("%lu\n",sizeof(ptr));
    printf("%lu\n",sizeof(ptr1));
    printf("%lu\n",sizeof(ptr2));
    printf("%lu\n",sizeof(ptr3));
}
>>>>>>> 83e84f5bba08c706b4861930fb74e4967f17692a
