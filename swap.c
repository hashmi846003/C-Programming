/*You have to read two numbers from user and you have to swap the two number.*/
#include<stdio.h>
void swap(int*,int*);
int main(){
    printf("Enter the two numbers\n");
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf(" Numbers before swapping are:%d %d\n",n1,n2);
   swap(&n1,&n2);
    //printf(" Numbers after swapping are:%d %d",n1,n2);
}
void swap(int *ptr1,int *ptr2){
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
    printf(" Numbers after swapping are:%d %d",*ptr1,*ptr2);

}