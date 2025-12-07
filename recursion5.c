#include<stdio.h>
int func(int num){
    if (num>0){
        int rem,sum=0;
        rem=num%10;
        sum=rem+func(num/10);   
        return sum;
    }else{
        return 0;
    }
}
int main(){

    int var;
    scanf("%d", &var);
    int result = func(var);
    printf("%d\n", result);
    return 0;
}