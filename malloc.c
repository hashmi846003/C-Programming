#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=malloc(5*sizeof(int));
    for (int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    int *ptr2=calloc(3,sizeof(int));
    for(int i=0;i<3;i++){
        printf("%d",ptr2[i]);
    }
    free(ptr);
}