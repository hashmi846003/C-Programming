#include<stdio.h>
double power(int x,int y);
int main(){
    int x,y;
    printf("Enter the value of x and y\n");
    scanf("%d %d",&x,&y);
    double ret=power( x, y);
    printf("%f",ret);
}
double power(int x,int y){
    if(y==0){
        return 1;
    } else if (y > 0) {        
        return x * power(x, y - 1);
    } else {                   
        return 1.0 / power(x, -y);
    }


}