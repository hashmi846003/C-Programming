#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    for(int i=31;i>=0;i--){
        if(num & 1<<i){
           // count++;
            printf("1");
        }else{
            printf("0");
        }
    }
    //printf("%d",count);
}