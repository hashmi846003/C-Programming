#include<stdio.h>
func (int num){
    int ret=10;
    ret+num;
    return ret;
}
int main(){
    int var=1;
   int res=func(var);
    printf("Result is: %d\n",res);
    res=func(var);
    printf("Result is: %d\n",res);
    res=func(var);
    printf("Result is: %d\n",res);
    return 0;
}