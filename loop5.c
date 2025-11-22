#include<stdio.h>
int main(){
    int range,i,power=1;
    printf("Enter the value of n: ");
    scanf("%d", &range);
    for(i=1;i<=range;i++){
        if(i==0){
            printf("%d",i);
            
        }
        else
        printf("%d\t", power=power*2);
    }
}