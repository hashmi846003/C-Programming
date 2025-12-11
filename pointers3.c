#include<stdio.h>
int main(){
    int x=20,y=30;
    int *ptr;
    ptr=&x;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",*ptr);
    printf("%d\n",x);
    ptr=&y;
     printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",*ptr);
    printf("%d\n",y);
    *ptr=18;
      printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",*ptr);
    printf("%d",y);
    
}