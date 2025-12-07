#include<stdio.h>
int expy(int x,int y){
    if(y==0) return 1;
    int result=x*expy(x,y-1);
    return result;
}
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int pow=expy(a,b);
    printf("%d",pow);

}