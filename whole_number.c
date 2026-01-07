#include<stdio.h>
int main(){
    int n=5;
    //scanf("%d",&n);
    print(n);
}
int print(int n){
    if(n>=0){
        print(n-1);
        printf("%d",n);
    }
}