#include<stdio.h>
int main(int argc,char *argv[]){
    int i=0;
    while(argv[i]){
        printf("argv[%d]----->%s",i,argv[i]);
        i++;
    }
}