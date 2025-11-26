#include<stdio.h>
int main() {
    int i;
    for(i=0;i<6;i++){
        printf("Hello-----%d\n",i);
       if(i==4 || i==3){
       //if(i==4 && i==3){
            continue;
        }
        printf("World-----%d\n",i);
    }
    printf("Hello World-----------%d\n",i);
    return 0;
}