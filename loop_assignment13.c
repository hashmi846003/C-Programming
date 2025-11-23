//loop of characters in decrementing order
#include <stdio.h>
int main(){
    int i,j,n;
    char ch='A';
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
      //  ch='A';
        for(j=1;j<=i;j++){
            printf("%c",ch++);
           // ch++;
          // j++;
        }
        //k++;
        //ch++;
        printf("\n");
        }
    return 0;
}