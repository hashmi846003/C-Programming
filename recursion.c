#include<stdio.h>
void func (int num){
    if (num>0){
        func(num-1);
    }
    printf("%d\n",num);
}
int main(){
    int var=5;
    func(var);
    return 0;
}