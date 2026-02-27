#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *str[4]={"hello","how","are","you"};
    printf("...............>%s\n",str[0]);
    printf("...............>%s\n",str[1]);
    printf("...............>%s\n",str[3]);
str[0]="what";
printf("++++++++++->%s\n",str[0]);
str[1]=malloc(10);
scanf("%s",str[1]);

}

