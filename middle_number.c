#include<stdio.h>
int main(){
    int n1, n2, n3, middle;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1>n2){
        if(n1<n3){
            middle = n1;
        } else if(n2>n3){
            middle = n2;
        } else {
            middle = n3;
        }
    } else {
        if(n1>n3){
            middle = n1;
        } else if(n2<n3){
            middle = n2;
        } else {
            middle = n3 ;
        }
    }
    printf("The middle number is: %d\n", middle);
    return 0;
}