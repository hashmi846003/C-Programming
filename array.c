#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char *array=(char*)malloc(n*sizeof(char));
    //int array[4]={10,20,30,40};
    //printf("%p\n",&array[1]);
    //printf("%p\n",array);
    for (int i=0;i<n;i++){
        scanf(" %c",&array[i]);
    }
    for (int i=0;i<n;i++){
        printf("%c ",array[i]);
    }
    free(array);
    return 0;
}