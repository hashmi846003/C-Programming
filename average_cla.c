#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    if(argc<3){
        printf("Invalid no of arguments\n");
        return 0;
    }
    int sum=0;
    for(int i=1;i<argc;i++){
        sum+=atoi(argv[i]);
    }
    printf("The sum is %d \n The average is %f\n",sum,(float)sum/(argc-1));
}