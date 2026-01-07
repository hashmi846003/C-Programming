#include<stdio.h>

double ncr(int n,int r);
int main(){
    int n,r;
    printf("Enter the value of n and r\n");
    scanf("%d %d",&n,&r);
    double ret=ncr( n, r);
  //  printf("%f",ret);
    printf("nCr(%d, %d) = %f\n", n, r, ret);
    return 0;

}
double ncr(int n,int r){
    if (r == 0 || r == n) {   
        return 1;
    } else {
        return ncr(n - 1, r - 1) + ncr(n - 1, r);

}
}