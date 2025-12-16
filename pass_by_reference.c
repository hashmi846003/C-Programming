#include<stdio.h>
void func(int*, int*);
int main(){
    int num1=12,num2=15;
    printf("Before pass by reference %d %d\n",num1,num2);
    func(&num1,&num2);
    printf("After pass by reference %d %d",num1,num2);
}
void func(int *ptr1, int *ptr2){
    *ptr1=*ptr1+10;
    *ptr2=*ptr2+10;
}