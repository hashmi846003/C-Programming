//loop of * in decrementing order
#include <stdio.h>
int main(){
    int i,j,n;
    int k=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",k);
           // k++;
          // j++;
        }
        k++;
        printf("\n");
        }
    return 0;
}