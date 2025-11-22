#include <stdio.h>
int main(){
    int i;
    for(i=0;i<5;i++){
        printf("inside for loop-> %d\n",i);
    }
    printf("After executing for loop %d\n", i);
    return 0;
}