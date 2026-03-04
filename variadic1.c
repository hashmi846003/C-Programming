#include<stdio.h>
#include<stdarg.h>
  int sum(int,...);
 int main(){
    printf("%d\n",sum(3,10,(int)10.5,(int)10.5));
 }
 int sum(int count,...){
    va_list ap;
    int sum=0;
    va_start(ap,count);
    for(int i=0;i<count;i++){
        sum +=va_arg(ap,int);
    }
    va_end(ap);
    return sum;
 }