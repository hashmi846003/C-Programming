//second largest element in an array
#include<stdio.h>
#include<string.h>
int main(){
    int str[8]={4,1,5,3,765,234,546,9};
    int max1=0,max2=0;
    int i,j;
    int n=8;
    max1=str[0];
    for (i=0;i<=n-1;i++){
        if (str[i]>max1){
            max2=max1;
            max1=str[i];
        }
        else if (str[i]>max2 && str[i]<max1){
            max2=str[i];
        }
    }
    printf("The second largest element is %d\n", max2);
    return 0;
}
