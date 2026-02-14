#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("%d\n",&p[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",p[i]);
    }
    q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        q[i]=p[i];
    }
    p=q;
    q=NULL;
    for(int i=0;i<10;i++){
        printf("%d\n",p[i]);
    }
}