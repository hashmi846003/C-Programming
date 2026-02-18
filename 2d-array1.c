#include<stdio.h>
int main(){
    int a[]={10};
    int b[]={20};
    int c[]={30};
    int *arr[]={a,b,c};
    printf("%d %d %d",*(*(arr+0)+0),*(arr[0]+0),arr[0][0]);
    printf("%d %d %d",*(*(arr+1)+0),*(arr[1]+0),arr[1][0]);
    printf("%d %d %d",*(*(arr+2)+0),*(arr[2]+0),arr[2][0]);
}

