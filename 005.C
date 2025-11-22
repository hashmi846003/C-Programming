#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=0){
        printf("The number %d is positive\n", a); 
    }else{
        printf("The number %d is negative\n", a);
    }
    return 0;
}
