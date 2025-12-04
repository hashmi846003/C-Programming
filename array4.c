//Repacing even no with 0 and odd no with 1
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    printf("\n");
    for (int i=0;i<n;i++){
        if (array[i]%2==0){
            array[i]=0;
            printf("%d\n ", array[i]);
        }else{
            array[i]=1;
            printf("%d\n ", array[i]);
        }           
    }
    return 0;
}