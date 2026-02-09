//modular approach

#include<stdio.h>
int are(int l,int b);
int peri(int l,int b);
int main(){
    int length=0,breadth=0;
    printf("Enter length and breath value\n");
    scanf("%d %d",&length,&breadth);
 //   float area=length*breadth;
   // float perimeter=2*(length+breadth);
   int area=are(length,breadth);
   int perimeter=peri(length,breadth);
    printf("%d %d",area,perimeter);
}
int are(int l,int b){
    return l*b;
}
int peri(int l,int b){
    return 2*(l+b);
}