#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,*q;
    int i;
    p=(int *)malloc(5*sizeof(int));
    p[0]=1;p[1]=5;p[2]=4;p[3]=6;
    q=(int *)malloc(10*sizeof(int));
    for(i=0;i<5;i++){
        q[i]=p[i];
    }
    free(p);
   // q=NULL;
 for(i=0;i<5;i++){
        printf("%d ",q[i]);
    }
    

}