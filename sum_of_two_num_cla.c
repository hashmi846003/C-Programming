#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
 //   int i=0;
if(argc<3){
    printf("invalid no of arguments");
    return 0;
}
int sum=atoi(argv[1])+atoi(argv[2]);
printf("%d\n",sum);
}