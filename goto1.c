#include<stdio.h>
int main(){
    int n=0;
    goto jump;
    int m;
    if(n){
        jump:printf("Hi");
    }
}//goto is used to jump to specific part of program