#include<stdio.h>
int main(){
    int i,n,sum=0;
    scanf("%d",&n);
    if (n<0){
        printf("Error : Invalid Input, Enter only positive number");
    }
    for (i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
        
    }
    if(sum==n){
        printf("Yes, entered number is perfect number");
    }else{
        printf("No, entered number is not a perfect number");
    }
}