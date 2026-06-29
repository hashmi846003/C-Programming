#include<stdio.h>
int main(){
    int i,j;
    printf("Enter the range");
    scanf("%d",&j);
    for (i=2;i<j;i++){
       int flag1 = 1;
        for (int k=2;k<=i/2;k++){
            if(i%k==0){
                flag1 = 0;
                break;
            }
        }
      int  flag2 = 1;
        for (int k=2;k<=(i+6)/2;k++){
            if((i+6)%k==0){
                flag2 = 0;
                break;
            }
        }

        if(flag1==1 && flag2==1 && i+6<=j){
            printf("%d %d\n",i,i+6);
        }
    }
}