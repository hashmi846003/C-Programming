#include<stdio.h>
int func(int num){
    if (num>0){
        return num + func(num-1);
    }else{
        return 0;
    }
    //return 0;
}
int main(){
    int var=5;
    int result = func(var);
    printf("%d", result);
    return 0;
}