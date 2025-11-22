#include<stdio.h>
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if (a>=0){
        if(a%2){
            printf("%d is positive odd ",a);
        }else{
            printf("%d is positive even",a);
        }
        
    }
      if (a<0){
        if(a%2){
            printf("%d is negative odd ",a);
        }else{
            printf("%d is negative even",a);
        }
        
    }
}