//Monolithic program example
#include<stdio.h>
int main(){
    int length=0,breadth=0;
    printf("Enter length and breath value\n");
    scanf("%d %d",&length,&breadth);
    float area=length*breadth;
    float perimeter=2*(length+breadth);
    printf("%f %f",area,perimeter);
}