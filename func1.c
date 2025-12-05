#include<stdio.h>
func(int num1,int num2){
    return num1+num2;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=func(a,b);
    printf("The sum is: %d\n",result);
    return 0;
}