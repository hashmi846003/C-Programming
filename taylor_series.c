//taylor series example for e^x=1+x/1!+x^2/2!+x^3/3!+.........n terms
#include<stdio.h>
double e(int x,int n){
    static double p=1,f=1;
    double r;
    if (n==0){
        return 1;
    }else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
    printf("%lf\n",e(1,10));
    return 0;
}