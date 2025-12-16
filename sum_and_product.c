#include<stdio.h>
void func(int*,int*);
int main(){
    int num1=10,num2=30;
    func(&num1,&num2);
    printf("%d %d",num1, num2);

}
void func(int *ptr1,int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr1+*ptr2;
    *ptr2=temp * *ptr2;
}